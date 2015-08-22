<?php
/**
 * @file
 * announcements_and_emails.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function announcements_and_emails_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function announcements_and_emails_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function announcements_and_emails_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('An announcement, published on the home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'email' => array(
      'name' => t('Email'),
      'base' => 'node_content',
      'description' => t('Email communication from the organization.'),
      'has_title' => '1',
      'title_label' => t('Email Subject'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
