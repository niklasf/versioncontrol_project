<?php

class VersioncontrolProjectViewsSetProjectCommitView extends VersioncontrolViewsSetGlobalBase {
  protected $setName = 'project_commit_view';

  protected $baseView = 'vc_project_commit_view';

  protected $defaultViews = array(
    'git' => 'vc_git_project_commit_view',
  );
}
