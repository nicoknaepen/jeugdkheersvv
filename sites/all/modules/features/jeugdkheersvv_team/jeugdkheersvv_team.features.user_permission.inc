<?php
/**
 * @file
 * jeugdkheersvv_team.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jeugdkheersvv_team_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create age_group content'.
  $permissions['create age_group content'] = array(
    'name' => 'create age_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create competition content'.
  $permissions['create competition content'] = array(
    'name' => 'create competition content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create serie content'.
  $permissions['create serie content'] = array(
    'name' => 'create serie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create team content'.
  $permissions['create team content'] = array(
    'name' => 'create team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any age_group content'.
  $permissions['delete any age_group content'] = array(
    'name' => 'delete any age_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any competition content'.
  $permissions['delete any competition content'] = array(
    'name' => 'delete any competition content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any serie content'.
  $permissions['delete any serie content'] = array(
    'name' => 'delete any serie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any team content'.
  $permissions['delete any team content'] = array(
    'name' => 'delete any team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own age_group content'.
  $permissions['delete own age_group content'] = array(
    'name' => 'delete own age_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own competition content'.
  $permissions['delete own competition content'] = array(
    'name' => 'delete own competition content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own serie content'.
  $permissions['delete own serie content'] = array(
    'name' => 'delete own serie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own team content'.
  $permissions['delete own team content'] = array(
    'name' => 'delete own team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any age_group content'.
  $permissions['edit any age_group content'] = array(
    'name' => 'edit any age_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any competition content'.
  $permissions['edit any competition content'] = array(
    'name' => 'edit any competition content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any serie content'.
  $permissions['edit any serie content'] = array(
    'name' => 'edit any serie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any team content'.
  $permissions['edit any team content'] = array(
    'name' => 'edit any team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own age_group content'.
  $permissions['edit own age_group content'] = array(
    'name' => 'edit own age_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own competition content'.
  $permissions['edit own competition content'] = array(
    'name' => 'edit own competition content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own serie content'.
  $permissions['edit own serie content'] = array(
    'name' => 'edit own serie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own team content'.
  $permissions['edit own team content'] = array(
    'name' => 'edit own team content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
