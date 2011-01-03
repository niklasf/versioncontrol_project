<?php

$plugin = array (
  'title' => t('Per-user commit log (Project)'),
  'description' => t('A Project*-suite of modules-friendly version of the per-user commit log. Shows a log of all commits made by a specific user in all repositories known to the system. As with the global commit view, note that the backend-specific version will only be used if operating in single-backend mode.'),
  'handler' => array(
    'class' => 'VersioncontrolProjectViewsSetUserCommitView',
  ),
);