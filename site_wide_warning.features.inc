<?php
/**
 * @file
 * site_wide_warning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_wide_warning_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function site_wide_warning_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_wide_warning_node_info() {
  $items = array(
    'warning' => array(
      'name' => t('Site Wide Warning'),
      'base' => 'node_content',
      'description' => t('Site wide warning message is displayed at the top of each page as a red error box.  The warning box will display the most recent site wide warning that is published.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
