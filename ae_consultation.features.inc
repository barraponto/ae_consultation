<?php
/**
 * @file
 * ae_consultation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ae_consultation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ae_consultation_node_info() {
  $items = array(
    'ae_consultation' => array(
      'name' => t('Consultation'),
      'base' => 'node_content',
      'description' => t('Display an online form to store public consultation data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
