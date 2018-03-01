<?php
/**
 * @file
 * en_user_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function en_user_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_en_site_specific_field_1'.
  $field_bases['field_en_site_specific_field_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_en_site_specific_field_1',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_en_site_specific_field_2'.
  $field_bases['field_en_site_specific_field_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_en_site_specific_field_2',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
