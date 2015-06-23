<?php

/**
 * Main admin page
 */
function randomblocks_admin_display() {
	$rblocks = Randomblocks::get_randomblocks();
	$rows = array();
	foreach ($rblocks as $rblock) {
		$config_path = 'admin/structure/block/randomblocks/'. $rblock->machine_name;
		$blocks = $rblock->get_blocks();
		$rows[] = array(
			$rblock->machine_name,
			$rblock->info,
			count($blocks),
			l('Edit', $config_path .'/edit') .' &nbsp; '.
			l('Blocks', $config_path .'/blocks') .' &nbsp; '.
			l('Configure', 'admin/structure/block/manage/randomblocks/'. $rblock->machine_name .'/configure')
		);
	}
	return theme('table', array(
		'header' => array(
			t("Machine Name"), 
			t("Info"),
			t("# of Blocks"),
			t("Actions"),
		), 
		'rows' => $rows
	));
}

/**
 * Form for setting configuration options
 */
function randomblocks_random_block_edit_form($form, &$form_state, $randomblock = null) {
	$form['machine_name'] = array(
		'#title' => t("Machine Name"),
		'#description' => t("The machine-readable name of this block. Must contain only alphanumeric, hyphens, and underscore characters. Must also be unique. This will be the block delta id."),
		'#type' => 'textfield',
		'#required' => TRUE,
	);
	$form['info'] = array(
		'#title' => t("Block description"),
		'#type' => 'textfield',
		'#description' => t("A brief description of your random block. Used on the Blocks administration page"),
		'#required' => TRUE,
	);
	$form['num_items'] = array(
		'#type' => 'textfield',
		'#title' => t("Number of blocks to show"),
		'#description' => t("Set the number of blocks to show every time this random block is displayed."),
		'#size' => 5,
		'#default_value' => 1,
	);
	$form['cycle'] = array(
		'#type' => 'checkbox',
		'#title' => t("Cycle blocks to the user"),
		'#description' => t("When this option is set, the end user won't see the same block twice in a row, and all available blocks will be cycled through"),
		'#default_value' => true,
	);
	if ($randomblock) {
		$form_state['randomblock'] = $randomblock;
		$form['machine_name']['#default_value'] = $randomblock->machine_name;
		$form['info']['#default_value'] = $randomblock->info;
		$form['num_items']['#default_value'] = $randomblock->config['num_items'];
		$form['cycle']['#default_value'] = $randomblock->config['cycle'];
	}
	$form['actions'] = array('#type' => 'actions');
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t("Submit"),
	);
	if ($randomblock) {
		$form['delete'] = array(
			'#type' => 'submit',
			'#value' => t("Delete"),
			'#submit' => array('randomblocks_random_block_delete_submit')
		);
	}
	return $form;
}

function randomblocks_random_block_delete_submit($form, &$form_state) {
	$destination = array();
  if (isset($_GET['destination'])) {
    $destination = drupal_get_destination();
    unset($_GET['destination']);
  }
  $rblock = $form_state['randomblock'];
  $form_state['redirect'] = array('admin/structure/block/randomblocks/'. $rblock->machine_name . '/delete', array('query' => $destination));
}

function randomblocks_random_block_edit_form_validate($form, &$form_state) {
	if (preg_match('/[^a-z0-9-_]/i', $form_state['values']['machine_name'])) {
    form_set_error('machine_name', t('Machine Name contains invalid characters.'));
  }
}

function randomblocks_random_block_edit_form_submit(&$form, &$form_state) {
	$values = $form_state['values'];
	if (isset($form_state['randomblock'])) {
		$rblock = $form_state['randomblock'];
	} else {
		$rblock = new Randomblocks;
	}
	$rblock->machine_name = $values['machine_name'];
	$rblock->info = $values['info'];
	$rblock->config['num_items'] = $values['num_items'];
	$rblock->config['cycle'] = $values['cycle'];
	$rblock->save();
	drupal_set_message("The options have been saved");
	$form_state['redirect'] = 'admin/structure/block/randomblocks';
}

function randomblocks_random_block_delete_form($form, &$form_state, $rblock) {
	$form_state['randomblock'] = $rblock;
	return confirm_form($form, t("Are you sure you want to delete the random block %name?", array('%name' => $rblock->info)), 'admin/structure/block/randomblocks', '', t("Delete"), t("Cancel"));
}

function randomblocks_random_block_delete_form_submit($form, &$form_state) {
	$rblock = $form_state['randomblock'];
	drupal_set_message(t("The random block %name has been removed.", array('%name' => $rblock->info)));
	$rblock->delete();
	cache_clear_all();
	$form_state['redirect'] = 'admin/structure/block/randomblocks';
}

/**
 * Form to specify which blocks to show in the random block
 */
function randomblocks_random_block_blocks_form($form, &$form_state, $rblock) {
	$form = array();
	$form_state['randomblock'] = $rblock;
	$default_blocks = $rblock->get_blocks();
	$blocks = $rblock->get_available_blocks();
	$header = array(
		'info' => t("Info"),
		'module' => t("Module"),
	);
	$options = array();
	foreach ($blocks as $block) {
		$slug = Randomblocks::get_slug($block);
		$options[$slug] = array(
			'info' => $block['info'],
			'module' => $block['module'],
		);
		$form_state['blocks'][$slug] = $block;
	}
	$form['blocks'] = array(
		'#type' => 'tableselect',
		'#header' => $header,
		'#options' => $options,
		'#empty' => t("No random blocks created yet."),
	);
	if (!empty($default_blocks)) {
		$form['blocks']['#default_value'] = array();
		foreach ($default_blocks as $slug => $block) {
			$form['blocks']['#default_value'][$slug] = 1;
		}
	}
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t("Submit"),
	);
	return $form;
}

function randomblocks_random_block_blocks_form_submit(&$form, &$form_state) {
	$blocks = array();
	$form_state['randomblock']->blocks = array();
	foreach ($form_state['values']['blocks'] as $key => $bid) {
		if ($bid) {
			$slug = Randomblocks::get_slug($form_state['blocks'][$bid]);
			$form_state['randomblock']->blocks[$slug] = array(
				'module' => $form_state['blocks'][$bid]['module'],
				'delta' => $form_state['blocks'][$bid]['delta'],
			);
		}
	}
	$form_state['randomblock']->save();
	drupal_set_message("The blocks have been saved.");
	$form_state['redirect'] = 'admin/structure/block/randomblocks';
}