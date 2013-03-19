// Copyright (c) Hercules Dev Team, licensed under GNU GPL.
// See the LICENSE file
// Portions Copyright (c) Athena Dev Teams
#ifndef _CONFIG_CORE_H_
#define _CONFIG_CORE_H_

/// Max number of items on @autolootid list
#define AUTOLOOTITEM_SIZE 10

/// The maximum number of atcommand suggestions
#define MAX_SUGGESTIONS 10

/// Comment to disable the official walk path
/// The official walkpath disables users from taking non-clear walk paths,
/// e.g. if they want to get around an obstacle they have to walk around it,
/// while with OFFICIAL_WALKPATH disabled if they click to walk around a obstacle the server will do it automatically
#define OFFICIAL_WALKPATH

/// leave this line uncommented to enable callfunc checks when processing scripts.
/// while allowed, the script engine will attempt to match user-defined functions
/// in scripts allowing direct function callback (without the use of callfunc.)
/// this CAN affect performance, so if you find scripts running slower or find
/// your map-server using more resources while this is active, comment the line
#define SCRIPT_CALLFUNC_CHECK

/// Comment to disable Hercules' console_parse
/// CONSOLE_INPUT allows you to type commands into the server's console,
/// Disabling it saves one thread.
#define CONSOLE_INPUT
/// Maximum number of caracters 'CONSOLE_INPUT' will support per line.
#define MAX_CONSOLE_INPUT 150

/// Uncomment to disable Hercules' anonymous stat report
/// We kindly ask you to consider keeping it enabled, it helps us improve Hercules.
//#define STATS_OPT_OUT

/// uncomment to enable query_sql script command and mysql logs to function on it's own thread
/// be aware this feature is under tests and you should use at your own risk, we however
/// welcome any feedback you may have regarding this feature, please send us all bug reports.
//#define BETA_THREAD_TEST

/// Uncomment to enable the Cell Stack Limit mod.
/// It's only config is the battle_config cell_stack_limit.
/// Only chars affected are those defined in BL_CHAR (mobs and players currently)
//#define CELL_NOSTACK

/// Uncomment to enable circular area checks.
/// By default, all range checks in Aegis are of Square shapes, so a weapon range
/// - of 10 allows you to attack from anywhere within a 21x21 area.
/// Enabling this changes such checks to circular checks, which is more realistic,
/// - but is not the official behaviour.
//#define CIRCULAR_AREA

/// Uncomment to enable Non Stackable items unique ID
/// By enabling it, the system will create an unique id for each new non stackable item created
//#define NSI_UNIQUE_ID

/**
 * No settings past this point
 **/
#include "./renewal.h"
#include "./secure.h"
#include "./classes/general.h"

/**
 * Constants come last; so they process anything that could've been modified in early includes
 **/
#include "./const.h"

#endif // _CONFIG_CORE_H_
