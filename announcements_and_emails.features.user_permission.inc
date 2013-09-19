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

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create announcement content'.
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create catalog_entry content'.
  $permissions['create catalog_entry content'] = array(
    'name' => 'create catalog_entry content',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
