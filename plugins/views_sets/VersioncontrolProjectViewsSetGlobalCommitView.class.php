<?php

class VersioncontrolProjectViewsSetGlobalCommitView extends VersioncontrolViewsSetGlobalBase {
  protected $setName = 'project_global_commit_view';

  protected $baseView = 'vc_project_global_commits';

  protected $defaultViews = array(
    'git' => 'vc_git_project_global_commits',
  );
}