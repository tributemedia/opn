<?php
/**
 * @file
 * opn.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function opn_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
      1 => 'career',
      2 => 'opn_article',
      3 => 'page',
      4 => 'testimonials',
    ),
    'options' => 'a:0:{}',
    'pages' => '<front>
technology-news',
    'roles' => array(),
    'themes' => array(
      'material_custom' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'material_custom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
