<?php
/**
 * @file
 * gpol_politico.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gpol_politico_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gpol_politico_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gpol_politico_image_default_styles() {
  $styles = array();

  // Exported image style: bio-pic.
  $styles['bio-pic'] = array(
    'label' => 'bio-pic',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 360,
          'height' => 500,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gpol_politico_node_info() {
  $items = array(
    'politico' => array(
      'name' => t('Politico'),
      'base' => 'node_content',
      'description' => t('Permite agregar politicos'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
