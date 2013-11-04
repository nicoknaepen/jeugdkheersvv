<?php
/**
 * @file
 * jeugdkheersvv_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jeugdkheersvv_team_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jeugdkheersvv_team_node_info() {
  $items = array(
    'age_group' => array(
      'name' => t('Leeftijdscategorie'),
      'base' => 'node_content',
      'description' => t('Geef hier de leeftijdscategorieën aan en vul de omschrijving per leeftijdscategorie aan (vb. U6, U7, ...).'),
      'has_title' => '1',
      'title_label' => t('Leeftijdscategorie'),
      'help' => '',
    ),
    'competition' => array(
      'name' => t('Competitie'),
      'base' => 'node_content',
      'description' => t('Maak een toernooi en klassement en geef de data aan wanneer deze competitie zal plaatsvinden (vb. jaarklassement, paastoernooi, ...).'),
      'has_title' => '1',
      'title_label' => t('Competienaam'),
      'help' => '',
    ),
    'serie' => array(
      'name' => t('Reeks'),
      'base' => 'node_content',
      'description' => t('Creër een reeksnaam binnen het voetbalklassement (vb. U6, U15, ...)'),
      'has_title' => '1',
      'title_label' => t('Reeksnaam'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('Creër een team binnen de club (vb. U15 reserven, U7, U6/U7, ...).'),
      'has_title' => '1',
      'title_label' => t('Naam van het team'),
      'help' => '',
    ),
  );
  return $items;
}
