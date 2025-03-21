#include "config.h"

/**
 * ==================== @par Section I : Init ====================
 * 
 */

static void Init_Log()
{
    litelog.init("CompoDec_Main");
    litelog.log.notice("========== Program Version ==========");
    litelog.log.notice("Git User: %s", __GIT_USER__);
    litelog.log.notice("Git Branch: %s", __GIT_BRANCH__);
    litelog.log.notice("Git Commit: %s", __GIT_COMMIT_ID__);
    litelog.log.notice("Git Worktree: %s", __GIT_CLEAN__);
    litelog.log.notice("Compile Host: %s", __COMPILE_HOST__);
    litelog.log.notice("Compile User: %s", __COMPILE_USER__);
    litelog.log.notice("Compile Time: %s", __COMPILE_TIME__);
    litelog.log.notice("=====================================");
}

/**
 * ==================== @par Section II : Exit ====================
 * 
 */

static void Exit_Log()
{
    litelog.exit();
}

/**
 * ==================== @par Section III : API ====================
 * 
 */

int Config_Init()
{
    Init_Log();

    return 0;
}

int Config_Exit()
{
    Exit_Log();

    return 0;
}