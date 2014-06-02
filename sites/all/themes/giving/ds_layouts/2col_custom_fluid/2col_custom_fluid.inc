<?php
function ds_2col_custom_fluid() {
  return array(
    'label' => t('Custom 2-Col Fluid using Bootstap Panel'),
    'regions' => array(
      'header' => t('Panel Heading'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
      'footer' => t('Panel Footer'),
    ),
    // Add this line if there is a default css file.
    'css' => TRUE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}