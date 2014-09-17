<?php
/**
 * @file
 * cedi_panopoly.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cedi_panopoly_field_default_field_instances_alter(&$data) {
  if (isset($data['fieldable_panels_pane-image-field_basic_image_image'])) {
    $data['fieldable_panels_pane-image-field_basic_image_image']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['fieldable_panels_pane-image-field_basic_image_image']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
  }
}
