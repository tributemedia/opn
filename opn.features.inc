<?php
/**
 * @file
 * opn.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opn_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opn_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opn_node_info() {
  $items = array(
    'opn_article' => array(
      'name' => t('OPN Article'),
      'base' => 'node_content',
      'description' => t('Articles imported from officeproductnews.net.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'opn_feed' => array(
      'name' => t('OPN Feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
