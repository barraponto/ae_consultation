<?php
/**
 * @file
 * ae_consultation.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ae_consultation_defaultconfig_features() {
  return array(
    'ae_consultation' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ae_consultation_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ae_consultation content.
  $permissions['create ae_consultation content'] = array(
    'name' => 'create ae_consultation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ae_consultation content.
  $permissions['delete any ae_consultation content'] = array(
    'name' => 'delete any ae_consultation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ae_consultation content.
  $permissions['delete own ae_consultation content'] = array(
    'name' => 'delete own ae_consultation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ae_consultation content.
  $permissions['edit any ae_consultation content'] = array(
    'name' => 'edit any ae_consultation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ae_consultation content.
  $permissions['edit own ae_consultation content'] = array(
    'name' => 'edit own ae_consultation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
