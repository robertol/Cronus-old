// Copyright (c) Cronus-Emulator Dev Team, licensed under GNU GPL.
// See the LICENSE file
// Portions Copyright (c) Athena Dev Teams
#ifndef _CONFIG_LANGUAGE_H_
#define _CONFIG_LANGUAGE_H_

/**
* Go to http://cronus-emulator.com for more information.
*/

/**
* Enable this for translate the emulador to English
*/
//#define ce_english
/**
* Enable this for translate the emulador to Portuguese
* NOTE: Default is active with Portuguese
*/
#define ce_portuguese
/**
* Enable this for translate the emulador to Spanish
*/
//#define ce_spanish

#if defined(ce_portuguese)
#define LANG_CONF_PATH "conf/portugues/"
#define LANG_DB_PATH "db/portugues/"
#else
#if defined(ce_english)
#define LANG_CONF_PATH "conf/english/"
#define LANG_DB_PATH "db/english/"
#else
#define LANG_CONF_PATH "conf/espanol/"
#define LANG_DB_PATH "db/espanol/"
#endif
#endif

#define pconcat(x,y) x ## y

#endif // _CONFIG_LANGUAGE_H_
