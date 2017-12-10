<?php

/**
* Get the Config Data
* returns the query to get the config data in table mri_sticky_conf
*
* @return
*/
function mri_sticky_control_get_config_query() {
  $query = db_select('mri_sticky_conf', 'mrisconf')
  ->fields('mrisconf', array('scct','scemtype','scnid','scinfotype' ))
  ->condition('mrisconf.scid', 1)
  ->range(0, 1)
  ->execute();
  return $query;
}
function mri_sticky_control_get_observed_contenttypes() {
  $result = NULL;
  $default_content_type = NULL;
  $query = db_select('mri_sticky_conf', 'mrisconf')
  ->fields('mrisconf', array('scct'))
  ->condition('mrisconf.scid', 1)
  ->range(0, 1)
  ->execute();

  if ($query->rowCount() != NULL) {
    $result               = $query->fetchObject();
    $default_content_type = $result->scct;
  }
  return $default_content_type;
}

/**
* Write Config Data from the module config Form into DB
* @param undefined $form_state
*
* @return
*/
function mri_sticky_control_write_conf_data($form_state) {
  $query                    = mri_sticky_control_get_config_query();
  //checkboxes contains several values as string, comma sperated. We put every value in an array field
  $checkboxOptions_infoType = implode(',' , array_filter($form_state['values']['scinfotype'])); 
  $observedContentTypes     = $form_state['values']['content_types'];
  if ($query->rowCount() > 0) {
  	//action to update an custom form value.
    db_update('mri_sticky_conf')
    ->fields(array(
        'scct'      => $observedContentTypes,
        'scemtype'  => $form_state['values']['emergency_settings'],
        'scnid'     => $form_state['values']['scnid'],
        'scinfotype'=> $checkboxOptions_infoType,

      ))
    ->execute();
    drupal_set_message("Config Params are successfully saved.");
  }
  else {
    //Action to insert an custom form value.
    db_insert('mri_sticky_conf')
    ->fields(array(
        'scct'      => $observedContentTypes,
        'scemtype'  => $form_state['values']['emergency_settings'],
        'scnid'     => $form_state['values']['scnid'],
        'scinfotype'=> $checkboxOptions_infoType,
      ))->execute();
    drupal_set_message("Config Params are successfully saved.");
  }
}

function mri_sticky_control_config_form_validate() {

}
