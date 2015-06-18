<?php

class Randomblocks {

	public $machine_name;

	public $info = '';

	public $config = array(
		'num_items' => 1,
		'cycle' => 1,
	);

	public $blocks = array();

	/**
	 * Setup a random block instance
	 * Configuration is stored in the variables table
	 * under "randomblocks_{machine_name}"
	 */
	public function __construct($machine_name = NULL) {
		if ($machine_name) {
			$rblocks = variable_get('randomblocks', array());
			if (isset($rblocks[$machine_name])) {
				$this->machine_name = $machine_name;
				$this->info = $rblocks[$machine_name]['info'];
				$config = $this->get_config();
				$this->config = array_merge($this->config, $config['config']);
				$this->blocks = $this->get_blocks();
			}
		}
	}

	/**
	 * Delete this random block
	 * @return void
	 */
	public function delete() {
		$rblocks = variable_get('randomblocks', array());
		unset($rblocks[$this->machine_name]);
		variable_set('randomblocks', $rblocks);
		variable_del($this->get_variable_name());
	}

	/**
	 * Get available blocks that can be added to this random block
	 * @return array $blocks
	 */
	public function get_available_blocks() {
		$return = array();
		$blocks = _block_rehash();
		// Don't allow this block to be added to itself
		foreach ($blocks as $block) {
			if ($block['module'] == 'randomblocks' && $block['delta'] == $this->machine_name) {
				continue;
			}
			$return[] = $blocks;
		}
		return $blocks;
	}

	/**
	 * Get the child blocks set on this random block
	 * @return array $blocks
	 */
	public function get_blocks() {
		$config = $this->get_config();
		return $config['blocks'];
	}

	/**
	 * Get any config options set
	 * @return array $config
	 */
	public function get_config() {
		return variable_get($this->get_variable_name(), array('blocks' => array()));
	}

	/**
	 * Get the display of the block
	 * @return string $html
	 */
	public function get_display() {
		$blocks = $this->get_blocks();
		if ($blocks) {
			$config = $this->get_config();
			if ($config['config']['cycle']) {
				if ( ! isset($_SESSION['randomblocks_shown'])) {
					$_SESSION['randomblocks_shown'] = array();
				}
				// Don't show the same block twice in a row
				$use_blocks = array();
				foreach ($blocks as $block) {
					$slug = self::get_slug($block);
					if ( ! isset($_SESSION['randomblocks_shown'][$slug])) {
						$use_blocks[$slug] = $block;
					}
				}
				if (empty($use_blocks)) {
					// Get the last block shown and disallow it
					$last_block = array_pop($blocks);
					foreach ($blocks as $key => $block) {
						if ($block['module'] == $last_block['module'] && $block['delta'] == $last_block['delta']) {
							unset($blocks[$key]);
						}
					}
					// Clear the cycle to start over again
					$_SESSION['randomblocks_shown'] = array();
				} else {
					$blocks = $use_blocks;
				}
			}
			$block = $blocks[array_rand($blocks, 1)];
			$block_display = module_invoke($block['module'], 'block_view', $block['delta']);
			// Store a reference that this block has been displayed to the user
			if ($config['config']['cycle']) {
				$_SESSION['randomblocks_shown'][self::get_slug($block)] = self::get_slug($block);
			}
			return $block_display;
		}
	}

	/**
	 * Get all random blocks
	 * Stored in the variables table under "randomblocks"
	 * @return array $rblocks
	 */
	public static function get_randomblocks() {
		$rblocks = variable_get('randomblocks', array());
		$return = array();
		foreach ($rblocks as $rblock) {
			$return[$rblock['machine_name']] = new Randomblocks($rblock['machine_name']);
		}
		return $return;
	}

	/**
	 * Get a unique slug for existing blocks
	 * @param array $block
	 * @return string $slug
	 */
	public static function get_slug($block) {
		return $block['module'] .':'. $block['delta'];
	}

	/**
	 * Get the variable name this rblock is stored under
	 * @return string $variable_name
	 */
	public function get_variable_name() {
		return 'randomblocks_'. $this->machine_name;
	}

	/**
	 * Save this random block
	 * @return $this
	 */
	public function save() {
		$save = array(
			'machine_name' => $this->machine_name,
			'info' => $this->info,
			'config' => $this->config,
			'blocks' => $this->blocks,
		);
		variable_set($this->get_variable_name(), $save);
		$rblocks = variable_get('randomblocks', array());
		$rblocks[$this->machine_name] = array(
			'machine_name' => $this->machine_name,
			'info' => $this->info,
		);
		variable_set('randomblocks', $rblocks);
		return $this;
	}

}