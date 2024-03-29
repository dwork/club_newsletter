<?php
/**
 * @file
 * club_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_newsletter_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function club_newsletter_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function club_newsletter_node_info() {
  $items = array(
    'simplenews' => array(
      'name' => t('Simplenews newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
