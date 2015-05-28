<?php
/**
 * @file
 * gpol_politico.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gpol_politico_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'politico_node_full';
  $context->description = '';
  $context->tag = 'politico';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'politico' => 'politico',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-noticias-block' => array(
          'module' => 'views',
          'delta' => 'noticias-block',
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('politico');
  $export['politico_node_full'] = $context;

  return $export;
}
