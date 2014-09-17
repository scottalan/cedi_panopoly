<?php
/**
 * @file
 * cedi_panopoly.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cedi_panopoly_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.widget|module"] = 'media';
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.widget|type"] = 'media_generic';

 return $overrides;
}
