#pragma once

/**
 * @file config.h
 * @author XJT
 * @brief Configure all details for program.
 * @version 0.1
 * @date 2025-03-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "../../others/version/version.h"
#include "../utils/log/litelog.h"

#ifdef __cplusplus
extern "C" {
#endif

int Config_Init();

int Config_Exit();

#ifdef __cplusplus
}
#endif