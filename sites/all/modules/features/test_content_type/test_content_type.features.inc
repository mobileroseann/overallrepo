<?php
/**
 * @file
 * test_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function test_content_type_node_info() {
  $items = array(
    'test_content_type' => array(
      'name' => t('Test content type'),
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
