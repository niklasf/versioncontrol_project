<?php

$plugin = array (
  'title' => t('Global commit log (Project)'),
  'description' => t('A Project*-suite of modules-friendly version of the global commit log. A log of all commits made in all repositories known to the system. Note that the backend-specific versions of this view will be used only if a single backend is enabled.'),
  'handler' => array(
    'class' => 'VersioncontrolProjectViewsSetGlobalCommitView',
  ),
);