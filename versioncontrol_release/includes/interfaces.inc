<?php

/**
 * @file Interfaces for the Version Control Release integration module.
 */

/**
 * Map VCAPI labels (branches and tags) into project release versions.
 */
interface VersioncontrolReleaseLabelVersionMapperInterface {
  /**
   * Return an object with version fields for a given VCAPI tag.
   *
   * @param VersioncontrolTag $tag
   *   An object representing a version control tag.
   *
   * @param $project_node
   *   The full node object for the project we're doing the mapping for.
   *
   * @return object
   *   The specific elements of the version that a given VCAPI tag maps to.
   *   Can use any of the following fields: 'version_major', 'version_minor',
   *   'verion_patch', 'version_extra', or 'version_api_tid'. Returns FALSE if
   *   we can't parse the tag name and figure out the version fields.
   *
   * @see project_release_get_version()
   */
  function GetVersionFromTag($tag, $project_node);

  /**
   * Return an object with version fields for a given VCAPI branch.
   *
   * @param VersioncontrolBranch $branch
   *   An object representing a version control branch.
   *
   * @param $project_node
   *   The full node object for the project we're doing the mapping for.
   *
   * @return object
   *   The specific elements of the version that a given VCAPI branch maps to.
   *   Can use any of the following fields: 'version_major', 'version_minor',
   *   'verion_patch', 'version_extra', or 'version_api_tid'. Returns FALSE if
   *   we can't parse the branch name and figure out the version fields.
   *
   * @see project_release_get_version()
   */
  function GetVersionFromBranch($branch, $project_node);
}
