<?php
/**
 * @file
 * simplesaml_authentication_for_cul.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function simplesaml_authentication_for_cul_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['simplesamlphp_auth-0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 0,
    'module' => 'simplesamlphp_auth',
    'node_types' => array(),
    'pages' => 'user',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -8,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
