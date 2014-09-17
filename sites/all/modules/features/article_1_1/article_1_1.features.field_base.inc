<?php
/**
 * @file
 * article_1_1.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function article_1_1_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_test_field'
  $field_bases['field_test_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_test_field',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'phone',
    'settings' => array(
      'country' => 'fr',
    ),
    'translatable' => 0,
    'type' => 'phone',
  );

  return $field_bases;
}
