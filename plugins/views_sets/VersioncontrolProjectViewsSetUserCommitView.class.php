<?php

class VersioncontrolProjectViewsSetUserCommitView extends VersioncontrolViewsSetGlobalBase {
  protected $setName = 'project_user_commit_view';

  protected $baseView = 'vc_project_user_commits';

  protected $defaultViews = array(
    'git' => 'vc_git_project_user_commits',
  );
}