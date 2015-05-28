<?php
/**
 * @file
 * gpol_noticia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gpol_noticia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gpol_noticia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gpol_noticia_image_default_styles() {
  $styles = array();

  // Exported image style: newa.
  $styles['newa'] = array(
    'label' => 'news',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 370,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 370,
          'height' => 220,
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
function gpol_noticia_node_info() {
  $items = array(
    'noticias' => array(
      'name' => t('Noticias'),
      'base' => 'node_content',
      'description' => t('Permite agregar noticias relacionadas a los políticos'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
