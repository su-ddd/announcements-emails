<?php
/**
 * @file
 * announcements_and_emails.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function announcements_and_emails_user_default_roles() {
  $roles = array();

  // Exported role: Announcements Editor.
  $roles['Announcements Editor'] = array(
    'name' => 'Announcements Editor',
    'weight' => 99,
  );

  // Exported role: Email Editor.
  $roles['Email Editor'] = array(
    'name' => 'Email Editor',
    'weight' => 116,
  );

  return $roles;
}
