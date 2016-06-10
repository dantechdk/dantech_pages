<?php
/**
 * @file
 * dantech_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dantech_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dantech_pages_node_info() {
  $items = array(
    'dantech_pages' => array(
      'name' => t('Pages'),
      'base' => 'node_content',
      'description' => t('Used for the regular pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
