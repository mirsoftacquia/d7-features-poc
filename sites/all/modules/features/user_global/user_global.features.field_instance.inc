<?php
/**
 * @file
 * user_global.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function user_global_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_global_user_field'.
  $field_instances['user-user-field_global_user_field'] = array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_global_user_field',
    'label' => 'Global user field',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Global user field');

  return $field_instances;
}
