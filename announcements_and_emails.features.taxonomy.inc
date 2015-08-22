<?php
/**
 * @file
 * announcements_and_emails.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function announcements_and_emails_taxonomy_default_vocabularies() {
  return array(
    'topic' => array(
      'name' => 'Service Topic',
      'machine_name' => 'topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
