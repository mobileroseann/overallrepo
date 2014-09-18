<?php
/**
 * @file
 * test_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function test_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit own test_content_type content'.
  $permissions['edit own test_content_type content'] = array(
    'name' => 'edit own test_content_type content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
