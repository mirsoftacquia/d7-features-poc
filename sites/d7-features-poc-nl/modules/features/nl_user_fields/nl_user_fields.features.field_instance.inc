<?php
/**
 * @file
 * nl_user_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nl_user_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_nl_site_specific_field'.
  $field_instances['user-user-field_nl_site_specific_field'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_nl_site_specific_field',
    'label' => 'NL site specific field',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('NL site specific field');

  return $field_instances;
}
