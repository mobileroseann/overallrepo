<?php
/**
 * @file
 * article_1_1.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function article_1_1_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_test_field'
  $field_instances['node-article-field_test_field'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_test_field',
    'label' => 'Test field',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Test field');

  return $field_instances;
}
