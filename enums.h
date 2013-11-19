#ifndef __ENUMS_H__
#define __ENUMS_H__
//memory offsets for storing data
typedef enum _offsets 
{
	OFFSET_MNOTE = 0, 
	OFFSET_COMMANDS = 4, 
	OFFSET_DH = 8, 
	OFFSET_SYS = 12
} offsets;

//schedule types
typedef enum _schedules 
{
	SCH_NO, 
	SCH_ONCE, 
	SCH_ED, 
	SCH_REP, 
	SCH_PER_WD, 
	SCH_AFTER, 
	SCH_MONTHLY_EXACT, 
	SCH_MONTHLY_RELATIVE, 
	SCH_COMP_START, 
	SCH_PROG_START
} schedules;

//command line arguments
typedef enum _clargs 
{
	ARG_EXIT = 0x1, 
	ARG_SILENT = 0x2,
	ARG_NO_SAVE = 0x4, 
	ARG_INI_PATH = 0x8, 
	ARG_DATA_PATH = 0x10, 
	ARG_PROG_PATH = 0x20, 
	ARG_DB_PATH = 0x40, 
	ARG_CREATE_NEW = 0x80, 
	ARG_NEW_FROM_CLIPBOARD = 0x100,
	ARG_DIARY_TODAY = 0x200,
	ARG_SKINS_PATH = 0x400,
	ARG_BACKUP_PATH = 0x800,
	ARG_LANG_PATH = 0x1000,
	ARG_SOUND_PATH = 0x2000,
	ARG_FONTS_PATH = 0x4000,
	ARG_BACKUP = 0x8000,
	ARG_NONETWORK = 0x10000,
	ARG_SHOW_SWITCHES = 0x20000,
	ARG_DICT_PATH = 0x40000
} clargs;

typedef enum _note_flags 
{
	F_TEXT = 1, 
	F_SKIN = 2, 
	F_RTFONT = 4, 
	F_SCHEDULE = 8, 
	F_C_FONT = 16, 
	F_C_COLOR = 32, 
	F_B_COLOR = 64, 
	F_PRIORITY = 128
} note_flags;

typedef enum _tbr_buttons 
{
	CMD_FONT = 0, 
	CMD_SIZE, 
	CMD_COLOR, 
	CMD_BOLD, 
	CMD_ITALIC, 
	CMD_UNDERLINE, 
	CMD_STRIKETHROUGH, 
	CMD_HIGHLIGHT, 
	CMD_A_LEFT, 
	CMD_A_CENTER, 
	CMD_A_RIGHT, 
	CMD_BULLETS
} tbr_buttons;

typedef enum _dock_type 
{
	DOCK_NONE = 0, 
	DOCK_LEFT, 
	DOCK_TOP, 
	DOCK_RIGHT, 
	DOCK_BOTTOM
} dock_type;

typedef enum _bool_settings_1 {
	SB1_RANDCOLOR, 
	SB1_HIDETOOLBAR, 
	SB1_RELPOSITION, 
	SB1_CUST_FONTS, 
	SB1_SHOW_CP, 
	SB1_TRACK_OVERDUE, 
	SB1_INVERT_TEXT, 
	SB1_HIDE_WO_PROMPT, 
	SB1_FREE_1, 
	SB1_FREE_2, 
	SB1_STORE_ENCRYPTED, 
	SB1_USE_BACKUP, 
	SB1_HIDE_TRAY, 
	SB1_FIT_TO_CAPTION, 
	SB1_ROLL_ON_LEAVE_ENTER, 
	SB1_NO_ALT_TAB, 
	SB1_DONOT_CENTER, 
	SB1_HIDE_FLUENTLY, 
	SB1_PLAY_HIDE_SOUND, 
	SB1_CUST_DIARY_SETTINGS, 
	SB1_ADD_WEEKDAY_DIARY,
	SB1_FULL_WEEKDAY_NAME, 
	SB1_WEEKDAY_DIARY_END, 
	SB1_NO_DIARY_PAGES, 
	SB1_DIARY_SORT_ASC, 
	SB1_HIDE_DELETE, 
	SB1_SILENT_BACKUP, 
	SB1_SYNC_ON_START, 
	SB1_INC_DEL_IN_SYNC, 
	SB1_SAVE_BEFORE_SYNC, 
	SB1_CROSS_INST_TRNGL, 
	SB1_DWM_REM_FROM_PEEK
} bool_settings_1;

typedef enum _bool_settings_2 
{
	SB2_NEW_NOTE, 
	SB2_CONTROL_PANEL, 
	SB2_PREFS, 
	SB2_SEARCH_NOTES, 
	SB2_LOAD_NOTE, 
	SB2_FROM_CLIPBOARD, 
	SB2_ALL_TO_FRONT, 
	SB2_SAVE_ALL, 
	SB2_SHOW_HIDE, 
	SB2_SEARCH_TAGS,
	SB2_SEARCH_BY_DATES
} bool_settings_2;

typedef enum _bool_settings_3 
{
	SB3_CLEAN_BIN_WITH_WARNING,
	SB3_SAVE_BEFORE_SEND,
	SB3_RECEIVE_HIDE_BALOON,
	SB3_RECEIVE_NOT_PLAY_SOUND,
	SB3_CLICK_BALOON_SHOW_NOTE,
	SB3_CLICK_BALOON_SHOW_CP,
	SB3_SEND_HIDE_BALOON,
	SB3_HIDE_AFTER_SEND,
	SB3_DONOT_SHOW_CONT_MENU,
	SB3_SHOW_AFTER_RECEIVING,
	SB3_HIDE_COMPLETED,
	SB3_BIG_ICONS,
	SB3_HIDE_HIDE,
	SB3_DONOT_SHOW_CONTENT,
	SB3_ENABLE_NETWORK,
	SB3_LOCAL_SYNC_RECYCLE
} bool_settings_3;

typedef enum _small_settings {
	SMS_BACKUP_COUNT, 
	SMS_TAB_WIDTH, 
	SMS_BULLET_INDENT, 
	SMS_MARGIN_SIZE, 
	SMS_DIARY_PAGES, 
	SMS_DEF_SAVE_CHARACTERS, 
	SMS_CONTENT_LENGTH, 
	SMS_DEF_NAMING
} small_settings;

typedef enum _note_bool_settings 
{
	NB_PREV_VISIBLE, 
	NB_HIGH_PRIORITY, 
	NB_PROTECTED, 
	NB_NOT_TRACK, 
	NB_COMPLETED, 
	NB_DUPLICATED
} note_bool_settings;

typedef enum _darrow_type 
{
	DA_LEFT_UP, 
	DA_LEFT_DOWN, 
	DA_TOP_LEFT, 
	DA_TOP_RIGHT, 
	DA_RIGHT_UP, 
	DA_RIGHT_DOWN, 
	DA_BOTTOM_LEFT, 
	DA_BOTTOM_RIGHT
} darrow_type;

typedef enum tagScheduleParams 
{
	SP_SOUND_IN_LOOP, 
	SP_IN_ALARM, 
	SP_USE_TTS
} schedule_params;

typedef enum tagWinVersion 
{
	WV_PRE_XP = 4,
	WV_2003 = 5, 
	WV_XP = 6, 
	WV_VISTA_AND_MORE = 7
} win_version;

typedef enum tagSyncStatusFTP 
{
	SS_DO_NOT_COPY_FTP, 
	SS_COPY_TO_SERVER_FTP, 
	SS_COPY_FROM_SERVER_FTP
} sync_status_ftp;

typedef enum tagSyncStatusLocal 
{
	SS_DO_NOT_COPY_LOCAL, 
	SS_COPY_TO_SERVER_LOCAL, 
	SS_COPY_FROM_SERVER_LOCALP
} sync_status_local;

typedef enum tagLoginDialogType
{
	LDT_MAIN,
	LDT_GROUP,
	LDT_NOTE,
	LDT_DIARY
} login_dialog_type;

typedef enum tagLocalSyncResults
{
	LSR_OK_SIMPLE,
	LSR_OK_RELOAD,
	LSR_FAILED
} local_sync_results;

#endif
