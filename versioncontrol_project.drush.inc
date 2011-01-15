<?php
// $Id$

/**
 * @file
 *
 * Provides drush commands to retrieve repository permissions.
 */

/**
 * Implementation of hook_drush_command().
 */
function versioncontrol_project_drush_command() {
  return array(
    'vcs-auth-data' => array(
      'aliases' => array('vad'),
      'description' => 'Retrieve a json encoded string of authorization data for a given project\'s repository.',
      'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
      'arguments' => array(
        'project uri' => 'The uri of the project for which to retrieve auth data.',
      ),
    ),
  );
}

/**
 * Returns a json encoded string of authorization data.
 */
function drush_versioncontrol_project_vcs_auth_data($project_uri = '') {
  drush_print(json_encode(versioncontrol_project_get_auth_data($project_uri)));
}
