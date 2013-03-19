// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder
#ifndef _RRCONFIGS_CONST_
#define _RRCONFIGS_CONST_

/**
 * rAthena configuration file (http://rathena.org)
 * For detailed guidance on these check http://rathena.org/wiki/SRC/config/
 **/

/**
 * @INFO: This file holds constants that aims at making code smoother and more efficient
 */

/**
 * "Sane Checks" to save you from compiling with cool bugs 
 **/
#if SECURE_NPCTIMEOUT_INTERVAL <= 0
	#error SECURE_NPCTIMEOUT_INTERVAL should be at least 1 (1s)
#endif
#if SECURE_NPCTIMEOUT < 0
	#error SECURE_NPCTIMEOUT cannot be lower than 0
#endif

/**
 * Path within the /db folder to (non-)renewal specific db files
 **/
#ifdef RENEWAL
	#define DBPATH "re/"
#else
	#define DBPATH "pre-re/"
#endif

/**
 * DefType
 **/
#ifdef RENEWAL
	typedef short defType;
	#define DEFTYPE_MIN SHRT_MIN
	#define DEFTYPE_MAX SHRT_MAX
#else
	typedef signed char defType;
	#define DEFTYPE_MIN CHAR_MIN
	#define DEFTYPE_MAX CHAR_MAX
#endif

/* pointer size fix which fixes several gcc warnings */
#ifdef __64BIT__
	#define __64BPRTSIZE(y) (intptr)y
#else
	#define __64BPRTSIZE(y) y
#endif

/* ATCMD_FUNC(mobinfo) HIT and FLEE calculations */
#ifdef RENEWAL
	#define MOB_FLEE(mob) ( mob->lv + mob->status.agi + mob->status.luk/5 + 100 )
	#define MOB_HIT(mob)  ( mob->lv + mob->status.dex + mob->status.luk/3 + 175 )
#else
	#define MOB_FLEE(mob) ( mob->lv + mob->status.agi )
	#define MOB_HIT(mob)  ( mob->lv + mob->status.dex )
#endif

/* Renewal's dmg level modifier, used as a macro for a easy way to turn off. */
#ifdef RENEWAL_LVDMG
	#define RE_LVL_DMOD(val) \
		if( status_get_lv(src) > 100 && val > 0 ) \
			skillratio = skillratio * status_get_lv(src) / val;
	#define RE_LVL_MDMOD(val) \
		if( status_get_lv(src) > 100 && val > 0) \
			md.damage = md.damage * status_get_lv(src) / val;
	/* ranger traps special */
	#define RE_LVL_TMDMOD() \
		if( status_get_lv(src) > 100 ) \
			md.damage = md.damage * 150 / 100 + md.damage * status_get_lv(src) / 100;
#else
	#define RE_LVL_DMOD(val) 
	#define RE_LVL_MDMOD(val)
	#define RE_LVL_TMDMOD()
#endif

/* Feb 1st 2012 */
#if PACKETVER >= 20120201
	#define NEW_CARTS
	#define MAX_CARTS 9
#else
	#define MAX_CARTS 5
#endif

// Renewal variable cast time reduction
#ifdef RENEWAL_CAST
	#define VARCAST_REDUCTION(val){ \
		if( (varcast_r += val) != 0 && varcast_r >= 0 ) \
			time = time * (1 - (float)min(val, 100) / 100); \
	}
#endif

/* console_input doesn't go well with minicore */
#ifdef MINICORE
	#undef CONSOLE_INPUT
#endif

/**
 * End of File
 **/
#endif
