<?php
/**
 * @file
 * jeugdkheersvv_game.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jeugdkheersvv_game_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jeugdkheersvv_game_node_info() {
  $items = array(
    'game' => array(
      'name' => t('Wedstrijd'),
      'base' => 'node_content',
      'description' => t('Bevat het wedstrijdverslag en de score.'),
      'has_title' => '1',
      'title_label' => t('Titel van de wedstrijd'),
      'help' => '',
    ),
  );
  return $items;
}
