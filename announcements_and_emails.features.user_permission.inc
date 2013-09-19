<?php
/**
 * @file
 * announcements_and_emails.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function announcements_and_emails_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create announcement content'.
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create email content'.
  $permissions['create email content'] = array(
    'name' => 'create email content',
    'roles' => array(
      'Email Editor' => 'Email Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any announcement content'.
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any email content'.
  $permissions['delete any email content'] = array(
    'name' => 'delete any email content',
    'roles' => array(
      'Email Editor' => 'Email Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own announcement content'.
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own email content'.
  $permissions['delete own email content'] = array(
    'name' => 'delete own email content',
    'roles' => array(
      'Email Editor' => 'Email Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any announcement content'.
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any email content'.
  $permissions['edit any email content'] = array(
    'name' => 'edit any email content',
    'roles' => array(
      'Email Editor' => 'Email Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own announcement content'.
  $permissions['edit own announcement content'] = array(
    'name' => 'edit own announcement content',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own email content'.
  $permissions['edit own email content'] = array(
    'name' => 'edit own email content',
    'roles' => array(
      'Email Editor' => 'Email Editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
