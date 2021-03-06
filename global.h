#ifndef __GLOBAL_H__
#define __GLOBAL_H__

//dialogs and controls
#define DLG_MAIN  				1001
#define DLG_SAVE_AS				1002
#define DLG_ADJUST				1003
#define	DLG_CONTROL				1004
#define	DLG_HOT_KEY				1005
#define	DLG_COMBO				1007
#define	DLG_APPEARANCE			1008
#define	DLG_SCHEDULE			1009
#define	DLG_MISC				1010
#define	DLG_NOTE_APP			1011
#define	DLG_NOTE_SCHEDULE		1012
#define	DLG_GROUP				1013
#define	DLG_CHOOSE_BMP			1014
#define	DLG_FIND				1015
#define	DLG_SKINS				1016
#define	DLG_DOCKING				1017
#define	DLG_BEHAVIOR			1018
#define	DLG_FIND_SINGLE			1019
#define DNS_EVERYDAY  			1020
#define DNS_REPEATEVERY  		1021
#define DNS_WEEKLY  			1022
#define DNS_ONCE  				1006
#define	DNS_AFTER				1023
#define	DLG_TITLES_SEARCH		1024
#define	DLG_OVERDUE				1025
#define	DLG_CONTROL_TREE		1026
#define	DNS_MONTHLY_EXACT		1027
#define	DNS_MONTHLY_RELATIVE	1028
#define	DLG_PROTECTION			1029
#define	DLG_LOGIN_MAIN			1030
#define	DLG_LOGIN_CREATE		1031
#define	DLG_LOGIN_CHANGE		1032
#define	DLG_SMILIES				1033
#define	DLG_NETWORK				1034
#define	DLG_DIARY				1035
#define	DLG_TAGS				1036
#define	DLG_SEARCH_TAGS			1037
#define	DLG_SENGS				1038
#define	DLG_MISSING_HELP		1039
#define	DLG_PROGRESS			1040
#define	DLG_EXTERNALS			1041
#define	DLG_LINKS				1042
#define	DLG_HOSTS				1043
#define	DLG_SEND_SEVERAL		1044
#define	DLG_SEARCH_BY_DATE		1045
#define	DLG_WINDOWS				1046
#define	DLG_HOT					1047
#define	DLG_CONTGROUPS			1048
#define	DLG_GROUPS_SEND			1049
#define	DLG_LOCAL_SYNC			1050
#define	DLG_NEW_SYNC			1051
#define DLG_SPELLING			1052

//bitmaps
#define	IDB_TBR_ST				701
#define	IDB_TBR_ST_GRAY			702
#define	IDB_TBR_BIG				703
#define	IDB_TBR_BIG_GRAY		704
#define	IDB_MENU_ST				705
#define	IDB_MENU_ST_GRAY		706
#define	IDB_MENU_EDIT			707
#define	IDB_MENU_EDIT_GRAY		708
#define	IDB_COMMON_MISC			709
#define	IDB_CTRL_SMALL			710
#define	IDB_CTRL_LARGE			711
#define	IDB_CHECKS				712
#define	IDB_GROUPS				713
#define	IDB_SMALL_BARS			714
#define	IDB_SMALL_BARS_GRAY		715
#define	IDB_ARROW_LEFT			716
#define	IDB_ARROW_TOP			717
#define	IDB_ARROW_RIGHT			718
#define	IDB_ARROW_BOTTOM		719
#define	IDB_DEF_CHECK			720
#define	IDB_HOT_ICONS			721

//icons
#define	IDI_BELL_48				106
#define	IDI_BELL_32				107
#define	IDI_BELL_24				108
#define	IDI_BELL_16				109

#define	IDR_ICO_APPEARANCE		202
#define	IDR_ICO_SKINS			203
#define	IDR_ICO_SCHEDULE		204
#define	IDR_ICO_DOCK			205
#define	IDR_ICO_BEHAVIOR		206
#define	IDR_ICO_MISC			207
#define	IDR_ICO_PROTECTION		208
#define	IDR_ICO_DIARY			209
#define	IDR_ICO_NETWORK			210

#define	IDR_ICO_SEARCH			215
#define	IDR_ICO_SEARCH_DIS		216

#define	IDR_ICO_LOUDSPEAKER		220
#define	IDR_ICO_PROGRESS_1		221
#define	IDR_ICO_PROGRESS_2		222
#define	IDR_ICO_PROGRESS_3		223
#define	IDR_ICO_PROGRESS_4		224
#define	IDR_ICO_PROGRESS_5		225
#define	IDR_ICO_PROGRESS_6		226
#define	IDR_ICO_LOUDSPEAKER_GR	227

#define	IDR_CUR_V_SPLIT			302
#define	IDR_CUR_H_SPLIT			303

#define IDS_HIDE_SOUND			401
#define	IDS_NEW_MESSAGE_SOUND	402

//menus
#define	IDR_MAIN				10000
#define IDR_NOTE				10100
#define	IDR_CTRL_PANEL			10200
#define	IDR_TREE_MENU			10300
#define	IDR_NOTE_POPUP			10400
#define	IDR_RECYCLE_MENU		10500
#define IDR_DROP_MENU			10600
#define	IDR_OPTIONS_MENU		10700

//menu items
#define	IDM_NEW					10001
#define	IDM_OPTIONS				10002
#define	IDM_SHOW_ALL			10003
#define	IDM_HIDE_ALL			10004
#define	IDM_ABOUT				10005
#define	IDM_HELP				10006
#define	IDM_EXIT				10007
#define IDM_CTRL				10008
#define IDM_SAVE				10009
#define IDM_ADJUST				10010
#define IDM_HIDE				10011
#define IDM_DEL					10012
#define	IDM_SAVE_AS				10013
#define	IDM_SHOW				10014
#define	IDM_SHOW_CENTER			10015
#define	IDM_V_ICONS				10016
#define	IDM_V_SMALL				10017
#define	IDM_V_LIST				10018
#define	IDM_V_REPORT			10019
#define	IDM_ON_TOP				10020
#define	IDM_LANGUAGES			10021
#define	IDM_L_EMPTY				10022
#define	IDM_EMAIL				10023
#define	IDM_ON_THE_WEB			10024
#define	IDM_SAVE_ALL			10025
#define	IDM_NOTE_GROUPS			10026
#define	IDM_UNDO				10027
#define	IDM_REDO				10028
#define	IDM_CUT					10029
#define	IDM_COPY				10030
#define	IDM_PASTE				10031
#define	IDM_SELECT_ALL			10032
#define	IDM_RESTORE_PLACEMENT	10033
#define	IDM_SEARCH_IN_NOTES		10034
#define	IDM_DOCK				10035
#define	IDM_DOCK_NONE			10036
#define	IDM_DOCK_LEFT			10037
#define	IDM_DOCK_TOP			10038
#define	IDM_DOCK_RIGHT			10039
#define	IDM_DOCK_BOTTOM			10040
#define	IDM_DOCK_ALL			10041
#define	IDM_SEARCH_NOTE			10042
#define	IDM_SEARCH_NOTE_NEXT	10043
#define	IDM_REPLACE_NOTE		10044
#define	IDM_DOCK_NONE_ALL		10045
#define	IDM_DOCK_LEFT_ALL		10046
#define	IDM_DOCK_TOP_ALL		10047
#define	IDM_DOCK_RIGHT_ALL		10048
#define	IDM_DOCK_BOTTOM_ALL		10050
#define	IDM_FORMAT_NOTE_TEXT	10051
#define	IDM_FAVORITES			10052
#define	IDM_ADD_TO_FAVORITES	10053
#define	IDM_REMOVE_FAVORITES	10054
#define	IDM_ATTACHMENT			10055
#define	IDM_LOAD_NOTE			10056
#define	IDM_EMPTY_BIN			10057
#define	IDM_RESTORE_ALL_BIN		10058
#define	IDM_RESTORE_NOTE		10059
#define	IDM_SHOW_GROUPS			10060
#define	IDM_HIDE_GROUPS			10061
#define	IDM_HIGH_PRIORITY		10062
#define	IDM_DROP_SHORTCUT		10063
#define	IDM_DROP_CONTENT		10064
#define	IDM_NOTE_FROM_CLIPBOARD	10065
#define	IDM_ALL_TO_FRONT		10066
#define	IDM_SEARCH_SUBMENU		10067
// #define	IDM_SEARCH_TITLE		10068
#define	IDM_V_VIEW				10069
#define	IDM_VISIBILITY			10070
#define	IDM_TOGGLE_PROTECTION	10071
#define	IDM_PRINT_NOTE			10072
#define	IDM_PREVIEW				10073
#define	IDM_ADJUST_APPEARANCE	10074
#define	IDM_ADJUST_SCHEDULE		10075
#define	IDM_NOTE_MARKS			10076
#define	IDM_MARK_AS_COMPLETED	10077
#define	IDM_PVW_COLOR_SET		10078
#define	IDM_PVW_USE_COLOR		10079
#define	IDM_PVW_COLOR_VALUE		10080
#define	IDM_ROLL_UNROLL			10081
#define	IDM_DUMMY_ID			10082
#define	IDM_SEARCH_TARGET		10083
#define	IDM_PLACE_VISIBILITY	10084
#define	IDM_CLEAR_QUICK_SEARCH	10085
#define	IDM_LOCK_PROGRAM		10086
#define	IDM_RESTORE_BACKUP		10087
#define	IDM_SIMPLE_BULLETS		10088
#define	IDM_NUMBERS_PERIOD		10089
#define	IDM_NUMBERS_PARENS		10090
#define	IDM_LC_PERIOD			10091
#define	IDM_LC_PARENS			10092
#define	IDM_UC_PERIOD			10093
#define	IDM_UC_PARENS			10094
#define	IDM_ROMAN_LC			10095
#define	IDM_ROMAN_UC			10096
#define	IDM_PAYPAL				10097
#define IDM_NO_BULLETS			10098
#define	IDM_SHOW_ALL_FAVORITES	10099
#define	IDM_SWITCH_ON_ALL		9100
#define	IDM_SWITCH_OFF_ALL		9101
#define	IDM_ALL_PRIORITY_ON		9102
#define	IDM_ALL_PROTECTION_ON	9103
#define	IDM_ALL_COMPLETE_ON		9104
#define	IDM_ALL_ROLL_ON			9105
#define	IDM_ALL_PRIORITY_OFF	9106
#define	IDM_ALL_PROTECTION_OFF	9107
#define	IDM_ALL_COMPLETE_OFF	9108
#define	IDM_ALL_ROLL_OFF		9109
#define	IDM_DUPLICATE_NOTE		9110
#define	IDM_INSERT				9111
#define	IDM_INSERT_PICTURE		9112
#define	IDM_INSERT_SMILIE		9113
#define	IDM_RELOAD_ALL			9114
// #define	IDM_SEARCH_EVERYWHERE	9115
#define	IDM_DIARY				9116
#define	IDM_TODAY_DIARY			9117
#define	IDM_TOGGLE_SHOW_HIDE	9118
#define	IDM_TAGS				9119
#define	IDM_SEARCH_BY_TAGS		9120
#define	IDM_SEARCH_WEB			9121
#define	IDM_INSERT_DATETIME		9122
#define	IDM_BACK_SYNC			9123
#define	IDM_BACKUP_FULL			9124
#define	IDM_RESTORE_FULL		9125
#define	IDM_SYNC_NOW			9126
#define	IDM_RUN_PROG			9127
#define	IDM_COPY_AS_TEXT		9128
#define	IDM_PASTE_AS_TEXT		9129
#define	IDM_ALL_ON_TOP_ON		9130
#define	IDM_ALL_ON_TOP_OFF		9131
#define	IDM_SAVE_AS_TEXT		9132
#define	IDM_LINKS				9133
#define	IDM_MANAGE_LINKS		9134
#define	IDM_SHOW_BY_TAG			9135
#define	IDM_HIDE_BY_TAG			9136
#define	IDM_MANAGE_TAGS			9137
#define	IDM_SEND_INTRANET		9138
#define	IDM_ADD_CONTACT			9139
#define	IDM_SEND_TO_SEVERAL		9140
#define	IDM_REPLY				9141
#define	IDM_SEARCH_BY_DATE		9142
#define IDM_SHOW_BY_DATE		9143
#define	IDM_SBD_1				9144
#define	IDM_SBD_2				9145
#define	IDM_SBD_3				9146
#define	IDM_SBD_4				9147
#define	IDM_SBD_5				9148
#define	IDM_SBD_6				9149
#define	IDM_SBD_7				9150
#define	IDM_SBD_0				9151
#define	IDM_SHOW_HIDE_ALL		9152
#define	IDM_LOCK_NOTE			9153
#define	IDM_UNLOCK_NOTE			9154
#define	IDM_OK					9155
#define	IDM_CANCEL				9156
#define	IDM_APPLY				9157
#define	IDM_SHOW_INCOMING		9158
#define	IDM_HIDE_INCOMING		9159
#define	IDM_PASSWORD			9160
#define	IDM_CREATE_PASSWORD		9161
#define	IDM_CHANGE_PASSWORD		9162
#define	IDM_REMOVE_PASSWORD		9163
#define	IDM_ADD_PIN				9164
#define	IDM_REMOVE_PIN			9165
#define	IDM_HOT_KEYS			9166
#define	IDM_ADD_CONT_GROUP		9167
#define	IDM_SELECT_CONT_GROUP	9168
#define	IDM_LOCAL_SYNC			9169
#define	IDM_SPELL_CHECK			9170
#define	IDM_SPELL_NOW			9171
#define	IDM_SPELL_AUTO			9172
#define	IDM_SPELL_DOWNLOAD		9173

#define	IDM_FORMAT_FONT_FAMILY	5000
#define	IDM_FORMAT_FONT_SIZE	5001
#define	IDM_FORMAT_FONT_COLOR	5002
#define	IDM_FORMAT_FONT_BOLD	5003
#define	IDM_FORMAT_FONT_ITALIC	5004
#define	IDM_FORMAT_FONT_UNDER	5005
#define	IDM_FORMAT_FONT_STRIKE	5006
#define	IDM_FORMAT_FONT_HILIT	5007
#define	IDM_FORMAT_ALIGN_LEFT	5008
#define	IDM_FORMAT_ALIGN_CENTER	5009
#define	IDM_FORMAT_ALIGN_RIGHT	5010
#define	IDM_FORMAT_BULLETS		5011

#define	IDM_NEW_GROUP			10126
#define	IDM_EDIT_GROUP			10127
#define	IDM_DELETE_GROUP		10128
#define	IDM_SHOW_GROUP			10129
#define	IDM_HIDE_GROUP			10130
#define	IDM_NEW_SUBGROUP		10131
#define	IDM_SHOW_INCLUDE_SG		10132
#define	IDM_HIDE_INCLUDE_SG		10133
// #define	IDM_GROUP_HOTKEYS		10134
// #define	IDM_GROUP_HK_SHOW		10135
// #define	IDM_GROUP_HK_HIDE		10136
// #define	IDM_GR_SHOW_SET			10137
// #define	IDM_GR_SHOW_REMOVE		10138
// #define	IDM_GR_HIDE_SET			10139
// #define	IDM_GR_HIDE_REMOVE		10140
#define	IDM_CUSTOMIZE_ICONS		10141
#define	IDM_LOCK_GROUP			10142
#define	IDM_UNLOCK_GROUP		10143

#define	IDAPPLY					8002
#define IDR_ICO_MAIN  			1
#define IDC_ST_BMP				8004
// #define	IDC_GRP_SKIN			8006
#define IDC_LST_SKIN			8007
#define IDC_CMD_FONT			8011
#define	IDC_CHK_TRANS			8014
#define IDC_GRP_TRANS			8015
// #define IDC_CHK_SHOW			8017
#define IDC_ALWAYS_SAVE			8018
#define IDC_ASK_B_SAVE			8019
#define	IDC_TAB_ADJUST			8021
#define IDC_ST_TAB				8022
#define	IDC_OPT_NO_SCH			8023
#define	IDC_OPT_EV_DAY			8024
#define	IDC_OPT_ONCE			8025
#define	IDC_DTP_EV_DAY			8026
#define	IDC_DTP_ONCE			8027
#define	IDC_GRP_SHARED			8028
#define	IDC_EDT_SAVE_AS			8029
#define	IDC_ST_SAVE_AS			8031
#define	IDC_LVW_CONTROL			8032
#define	IDC_EDT_PWRD_MAIN		8033
#define	IDC_CMD_DEF				8034
#define	IDC_CHK_AUTORUN			8035
#define	IDC_ST_DATE_FMTS		8039
#define	IDC_ST_TIME_FMTS		8040
#define	IDC_EDT_DATE_FMTS		8041
#define	IDC_EDT_TIME_FMTS		8042
#define	IDC_EDT_PWRD_SECOND		8043
#define	IDC_ST_PWRD_MAIN		8044
#define	IDC_DATE_SAMPLE			8045
#define	IDC_TIME_SAMPLE			8046
#define	IDC_DATE_HELP			8047
#define	IDC_TIME_HELP			8048
#define	IDC_SINGLE_ALARM		8049
#define	IDC_REPEATED_ALARM		8050
#define	IDC_GRP_SOUND			8051
#define	IDC_CHK_ALLOW_SOUND		8052
#define IDC_GRP_FORMATS			8054
#define	IDC_GRP_HOTKEYS			8055
#define	IDC_CBO_COMMANDS		8056
// #define	IDC_CMD_HOTKEY			8057
#define	IDC_ST_HOTKEY_MAIN		8058
#define	IDC_ST_CHNGE_HK			8059
#define	IDC_EDT_HOT				8060
// #define	IDC_CMD_DEL_HOT			8061
#define	IDC_CMD_ADD_SOUND		8062
#define	IDC_CMD_DEL_SOUND		8063
#define	IDC_CMD_LISTEN			8064
#define	IDC_LST_SOUND			8065
#define	IDC_OPT_REPEAT			8066
#define	IDC_ST_PWRD_SECOND		8067
#define	IDC_CMD_STD_VIEW		8069
#define	IDC_CHK_DEL_CONFIRM		8072
#define	IDC_CHK_SCROLLBAR		8073
#define	IDC_COMBO_FONT			8074
// #define	IDC_GRP_AUTOSAVE		8075
#define	IDC_CHK_AUTOSAVE		8076
#define	IDC_ST_AUTOSAVE			8078
// #define	IDC_CMD_PREV_VERSION	8079
#define	IDC_GRP_DEF_SIZE		8080
#define	IDC_ST_DEF_SIZE_W		8081
#define	IDC_ST_DEF_SIZE_H		8082
#define	IDC_EDT_DEF_SIZE_W		8083
#define	IDC_EDT_DEF_SIZE_H		8084
#define	IDC_PLACEHOLDER_1		8085
#define	IDC_LBL_MORE_SKINS		8086
#define	IDC_GRP_START_OPT		8087
#define	IDC_GRP_SAVE_OPT		8088
// #define	IDC_ST_RELOAD_WARNING	8089
#define	IDC_EDT_PWRD_NEW		8090
#define	IDC_CTRL_TREEVIEW		8091
#define	IDC_ST_GROUP_NAME		8092
#define	IDC_EDT_GROUP_NAME		8093
#define	IDC_ST_GROUP_BMP		8094
#define	IDC_CMD_GROUP_BMP		8095
#define	IDC_LST_CHOOSE_BMP		8096
#define	IDC_ST_PWRD_NEW			8097
// #define	IDC_CBO_PROTECT_ACTIVE	8098
#define	IDC_VISUAL_NOTIFY		8100
#define	IDC_REDUCE_TO_CAPTION	8101
#define	IDC_GRP_SKINLESS_PROPS	8102
#define	IDC_ST_SEARCH			8103
#define	IDC_CBO_SEARCH			8104
#define	IDC_ST_RESULTS			8105
#define	IDC_LST_RESULTS			8106
#define	IDC_CHK_MATCH_CASE		8107
#define	IDC_CMD_FIND			8108
#define	IDC_CHK_WHOLE_WORD		8109
#define	IDC_CMD_SKNLESS_BCOLOR	8110
#define	IDC_CMD_SKNLESS_CFONT	8111
#define	IDC_TRANS_TRACK_BAR		8112
#define	IDC_TRANS_LEFT_ST		8113
#define	IDC_TRANS_RIGHT_ST		8114
#define	IDC_TRANS_WARNING		8115
#define	IDC_TRANS_VALUE			8116
#define	IDC_GRP_APPEARANCE		8117
// #define	IDC_GRP_SCHEDULE		8118
#define	IDC_GRP_SEARCH			8119
// #define	IDC_GRP_BEHAVIOR		8120
// #define	IDC_GRP_DOCKING			8121
// #define	IDC_GRP_MISC			8122
#define	IDC_SRCH_IN_HIDDEN		8123
#define	IDC_SRCH_HIST_CLEAR		8124
#define	IDC_GRP_UPDATE			8125
#define	IDC_CHK_NEW_V			8126
#define	IDC_CMD_NEW_V			8127
#define	IDC_CHK_NEW_ONTOP		8128
#define	IDC_CHK_RANDOM_COLOR	8129
#define	IDC_GRP_DOCK_SKINS		8130
#define	IDC_GRP_DOCK_SKINLESS	8131
// #define	IDC_OPT_DOCK_DEF_SKIN	8132
#define	IDC_OPT_DOCK_RND_SKIN	8133
#define	IDC_DOCK_SLIDER			8134
#define	IDC_DOCK_ST_DISTANCE	8135
#define	IDC_DOCK_ST_SLIDER_FROM	8136
#define	IDC_DOCK_ST_SLIDER_END	8137
#define	IDC_LEFT_PANE			8138
#define	IDC_ST_ADJUST_DISABLE	8139
#define	IDC_OPT_DOCK_RND_SIZE	8140
// #define	IDC_CBO_SKINS			8141
#define	IDC_INV_DOCK_ORDER		8142
#define	IDC_HIDE_TOOLBAR		8143
#define	IDC_CBO_REPLACE			8144
#define	IDC_ST_REPLACE			8145
#define	IDC_CMD_REPLACE_ALL		8146
#define	IDC_CMD_REPLACE			8147
#define	IDC_CMD_FIND_NEXT		8148
#define	IDC_OPT_FIND_UP			8149
#define	IDC_OPT_FIND_DOWN		8150
#define	IDC_UPD_AUTOSAVE		8151
#define	IDC_EDT_AUTOSAVE		8152
#define	IDC_ST_DAYS				8153
#define	IDC_ST_HOURS			8154
#define	IDC_ST_MINS				8155
#define	IDC_ST_SECS				8156
#define	IDC_EDT_DAYS			8157
#define	IDC_EDT_HOURS			8158
#define	IDC_EDT_MINS			8159
#define	IDC_EDT_SECS			8160
#define	IDC_UPD_DAYS			8161
#define	IDC_UPD_HOURS			8162
#define	IDC_UPD_MINS			8163
#define	IDC_UPD_SECS			8164
// #define	IDC_GRP_DOCK_SZ			8165
// #define	IDC_GRP_DOCK_FC			8166
#define	IDC_CHK_DOCK_C			8167
#define	IDC_CHK_DOCK_F			8168
#define	IDC_ST_DOCK_SKIN		8171
#define	IDC_ST_DOCK_SKINLESS	8172
#define	IDC_ST_DEF_BROWSER		8173
#define	IDC_EDT_DEF_BROWSER		8174
#define	IDC_CMD_DEF_BROWSER		8175
#define	IDC_CHK_REL_POSITION	8176
#define	IDC_USE_CUST_FONTS		8177
#define	IDC_OPT_EVERY_WD		8178
#define	IDC_ST_TIME_EVERY_WD	8180
#define	IDC_DTP_TIME_EVERY_WD	8181
#define	IDC_PLACEHOLDER			8182
#define	IDC_CHK_SHOW_CP			8183
#define	IDC_CHK_WD_0			8184
#define	IDC_CHK_WD_1			8185
#define	IDC_CHK_WD_2			8186
#define	IDC_CHK_WD_3			8187
#define	IDC_CHK_WD_4			8188
#define	IDC_CHK_WD_5			8189
#define	IDC_CHK_WD_6			8190
#define	IDC_CBO_NOTE_SCHEDULE	8191
#define	IDC_OPT_AFTER			8192
#define	IDC_ST_YEARS			8193
#define	IDC_ST_MONTHS			8194
#define	IDC_ST_WEEKS			8195
#define	IDC_EDT_YEARS			8196
#define	IDC_EDT_MONTHS			8197
#define	IDC_EDT_WEEKS			8198
#define	IDC_UPD_YEARS			8199
#define	IDC_UPD_MONTHS			8200
#define	IDC_UPD_WEEKS			8201
#define	IDC_ST_STARTING			8202
#define	IDC_DTP_AFTER			8203
#define IDC_CBO_DBL_CLICK		8204
#define	IDC_ST_DBL_CLICK		8205
#define	IDC_ST_TITLE_SEARCH		8206
#define	IDC_EDI_TITLE_SEARCH	8207
#define	IDC_ST_HK_MAIN_MENU		8208
#define	IDC_ST_HK_SINGLE_NOTE	8209
#define	IDC_CBO_SINGLE_NOTE		8210
#define	IDC_CHK_OVERDUE			8211
#define	IDC_LST_OVERDUE			8212
#define	IDC_EDT_OVERDUE			8213
#define	IDC_CHK_NO_TRACK		8214
#define	IDC_CHK_INVERT_COLOR	8215
#define	IDC_MONTH_ST_DAY		8216
#define	IDC_MONTH_ST_TIME		8217
#define	IDC_MONTH_ST_DOFWEEK	8218
#define	IDC_OPT_MONTH_EXACT		8219
#define	IDC_OPT_MONTH_RELATIVE	8220
#define	IDC_MONTH_ST_ORDINAL	8221
#define	IDC_ST_WARN_MONTH_EX	8222
#define	IDC_CBO_MONTH_EXACT		8224
#define	IDC_DTP_MONTH_EXACT		8225
#define	IDC_CBO_ORDINAL			8226
#define	IDC_CBO_WEEKDAYS		8227
#define	IDC_CHK_NO_PRMPT_HIDING	8228
// #define	IDC_CMD_REMOVE_PWRD		8229
// #define	IDC_CMD_SET_PWRD		8230
#define	IDC_CHK_HIDE_TRAY		8231
// #define	IDC_CMD_CHANGE_PWRD		8232
// #define	IDC_CHK_PROTECT_STARTUP	8233
#define	IDC_CHK_NO_ALT_TAB		8234
#define	IDC_DTP_REPEAT_START	8235
#define	IDC_CHK_DECRYPT_NOTES	8236
// #define	IDC_ST_DECRYPT_NOTES	8237
#define	IDC_GRP_COMMON_SKNLESS	8238
#define	IDC_GRP_SCHEDULE_BHV	8239
#define	IDC_GRP_DOCK_MISC		8240
#define	IDC_GRP_BEH_MISC		8241
// #define IDC_GRP_PWRD			8242
#define	IDC_GRP_ENCRYPTION		8243
#define	IDC_ST_TOTAL_ENCRYPT	8244
#define	IDC_GRP_BACKUP			8245
#define	IDC_CHK_BACKUP			8246
#define	IDC_ST_BACKUP_LEVELS	8247
#define	IDC_EDT_BACKUP_COUNT	8248
#define	IDC_UPD_BACKUP			8249
#define	IDC_GRP_LOCK			8250
#define	IDC_CHK_FIT_TO_CAPTION	8251
#define	IDC_ST_RELOAD_ALL		8252
#define	IDC_GRP_CUST_SOUND		8253
#define	IDC_CBO_CUST_SOUND		8254
#define	IDC_CMD_PVW_CUST_SOUND	8255
#define	IDC_CHK_DONOT_CENTER	8256
#define	IDC_GRP_EFFECTS			8257
#define	IDC_CHK_HIDE_FLUENTLY	8258
#define	IDC_CHK_PLAY_HIDE_SOUND	8259
#define IDC_PL_1				8260
#define IDC_ST_BCKG_COLOR		8261
#define	IDC_CHOOSE_COLOR		8262
#define	IDC_OPT_COMP_START		8263
#define	IDC_OPT_PROG_START		8264
#define	IDC_OPT_TIME_START		8265
#define	IDC_TBR_SMILIES			8266
#define	IDC_CHK_LOOP_SOUND		8267
#define	IDC_GRP_TEXT_SETTINGS	8268
#define	IDC_ST_BINDENT_TEXT		8269
#define	IDC_CBO_BINDENT			8270
#define	IDC_ST_MARGIN_TEXT		8271
#define	IDC_CBO_MARGIN			8272
#define	IDC_ST_NEW_NOTES_ONLY	8273
#define	IDC_ST_GR_ICONS_TEXT	8274
#define	IDC_TVW_CHK_BEHAVIOR	8275
#define	IDC_TVW_CHK_SKINLESS	8276
#define	IDC_TVW_CHK_MISC		8277
#define IDC_TVW_CHK_APP			8278
#define	IDC_TVW_CHK_SCHEDULE	8279
#define	IDC_TVW_CHK_PROTECTION	8280
#define	IDC_DUMMY_GROUP			8281
#define	IDC_DUMMY_GROUP1		8282
#define	IDC_TBR_SCHEDULE		8283
#define	IDC_CMD_MODIFY			8284
#define	IDC_TBR_HK_MAIN			8285
#define	IDC_TBR_HK_NOTE			8286
#define	IDC_ST_HOTKEY_NOTE		8287
#define	IDC_TEMP_1				8288
#define	IDC_FONT_SAMPLE			8289
#define	IDC_ST_SEARCH_RESULT_B	8290
#define	IDC_ST_SEARCH_RESULT_T	8291
#define	IDC_LST_SEARCH_RESULT_B	8292
#define	IDC_LST_SEARCH_RESULT_T	8293
#define	IDC_ST_DIARY_FORMATS	8294
#define	IDC_CBO_DIARY_FORMATS	8295
#define	IDC_ST_DF_SAMPLE		8296
#define	IDC_GRP_CUST_DIARY		8297
#define	IDC_CHK_CUST_DIARY		8298
#define	IDC_TVW_CHK_DIARY		8299
#define	IDC_DUMMY_GROUP2		8300
#define	IDC_CHK_DIARY_WEEKDAY	8301
#define	IDC_CHK_DR_WEEKDAY_END	8302
#define	IDC_CHK_FULL_WD_NAME	8303
#define	IDC_TVW_CHK_DOCKING		8304
#define	IDC_ST_DIARY_COUNT		8305
#define	IDC_CBO_DIARY_COUNT		8306
#define	IDC_CHK_NO_DIARY_PAGES	8307
#define	IDC_ST_DEF_SAVE_CHARS	8308
#define	IDC_CBO_DEF_SAVE_CHARS	8309
#define	IDC_CHK_DIARY_SORT_ASC	8310
#define	IDC_ST_TAGS				8311
#define	IDC_EDT_TAGS			8312
#define	IDC_ST_HK_EDIT			8313
#define	IDC_CBO_HK_EDIT			8314
#define	IDC_ST_HOTKEY_EDIT		8315
#define	IDC_TBR_HK_EDIT			8316
#define	IDC_GRP_TAGS			8317
#define	IDC_LST_PRE_TAGS		8318
#define	IDC_ST_NEW_TAG			8319
#define	IDC_EDT_NEW_TAG			8320
#define	IDC_TBR_TAGS			8321
#define	IDC_ST_PRE_TAGS			8322
#define	IDC_ST_CURR_TAGS		8323
#define	IDC_LST_CURR_TAGS		8324
#define	IDC_CMD_TAGS_PRETOCURR	8325
#define	IDC_CMD_TAGS_CURRTOPRE	8326
#define IDC_GRP_SEARCH_WEB		8327
#define IDC_LST_SEARCH_WEB		8328
#define IDC_TBR_SEARCH_WEB		8329
#define	IDC_ST_SENG_NAME		8330
#define	IDC_ST_SENG_QUERY		8331
#define	IDC_EDT_SENG_NAME		8332
#define	IDC_EDT_SENG_QUERY		8333
#define	IDC_ST_SENG_Q_SAMPLE	8334
#define	IDC_ST_SAVE_IN_GROUP	8335
#define	IDC_CBO_SAVE_IN_GROUP	8336
#define	IDC_HIDE_DELETE			8337
#define	IDC_ST_MISSING_HELP		8338
#define	IDC_OPT_HELP_ONLINE		8339
#define	IDC_OPT_HELP_CHM		8340
#define	IDC_OPT_HELP_PDF		8341
#define	IDC_CHK_NOT_SHOW		8342
#define	IDC_ST_DOWNLOAD_PERC	8343
#define	IDC_ST_PROGRESS			8344
#define	IDC_ST_SRCH_CRITERIA	8345
#define	IDC_CBO_SRCH_CRITERIA	8346
#define	IDC_TVW_SEARCH			8347
#define	IDC_ST_SRCH_SCOPE		8348
#define	IDC_CBO_SRCH_SCOPE		8349
#define	IDC_GRP_SYNC			8350
#define	IDC_CHK_SYNC_ON_START	8351
#define	IDC_FTP_ST_SERVER		8352
#define	IDC_FTP_EDT_SERVER		8353
#define	IDC_FTP_ST_DIRECTORY	8354
#define	IDC_FTP_EDT_DIRECTORY	8355
#define	IDC_FTP_ST_USER			8356
#define	IDC_FTP_EDT_USER		8357
#define	IDC_FTP_ST_PASSWORD		8358
#define	IDC_FTP_EDT_PASSWORD	8359
#define IDC_FTP_ST_PORT			8360
#define	IDC_FTP_EDT_PORT		8361
#define	IDC_FTP_CMD_SYNC		8362
#define	IDC_CHK_SILENT_BACKUP	8363
#define	IDC_CHK_INC_DEL_SYNC	8364
#define	IDC_CHK_SAVE_BFR_SYNC	8365
#define	IDC_GRP_EXT_PROGS		8366
#define	IDC_LST_EXT_PROGS		8367
#define	IDC_TBR_EXT_PROGS		8368
#define	IDC_ST_EXT_NAME			8369
#define	IDC_ST_EXT_QUERY		8370
#define	IDC_EDT_EXT_NAME		8371
#define	IDC_EDT_EXT_QUERY		8372
#define	IDC_CMD_EXT_QUERY		8373
#define	IDC_ST_EXT_COMMAND		8374
#define	IDC_EDT_EXT_COMMAND		8375
#define	IDC_CHK_CROSS_INST_TR	8376
#define	IDC_ST_CONTENT_LENGHT	8377
#define	IDC_CBO_CONTENT_LENGTH	8378
#define	IDC_OPT_USE_TTS			8379
#define	IDC_OPT_USE_WAV_FILE	8380
#define	IDC_ST_DEF_NAME_OPT		8381
#define	IDC_CBO_DEF_NAME_OPT	8382
#define	IDC_CMD_PVW_CUST_VOICE	8383
#define	IDC_TBR_SOUND_FILE		8384
#define	IDC_TBR_SOUND_TEXT		8385
#define	IDC_GRP_VOICES			8386
#define	IDC_LST_VOICES			8387
#define	IDC_CMD_SET_DEF_VOICE	8388
#define	IDC_EDT_SAMPLE_VOICE	8389
#define	IDC_CMD_LISTEN_VOICE	8390
#define	IDC_ST_SAMPLE_VOICE		8391
#define	IDC_GRP_TTS_SETTINGS	8392
#define	IDC_CBO_NOTE_VOICES		8393
#define	IDC_CHK_DWM_EXCLUDE		8394
#define	IDC_ST_ABOVE_VISTA		8395
#define	IDC_CHK_SILENT_CLEAN	8396
#define	IDC_ST_CLEAN_BIN		8397
#define	IDC_CBO_CLEAN_BIN		8398
#define	IDC_ST_LINKS_AV			8399
#define	IDC_ST_LINKS_CURR		8400
#define	IDC_TVW_CHK_NETWORK		8401
#define	IDC_EDT_CONTACT_NAME	8402
#define	IDC_OPT_HOST_NAME		8403
#define	IDC_OPT_HOST_IP			8404
#define	IDC_EDT_HOST_NAME		8405
#define	IDC_ST_CONTACT_NAME		8406
#define	IDC_GRP_EXCHANGE		8407
#define	IDC_CHK_SAVE_EXCHANGE	8408
#define	IDC_LST_CONTACTS		8409
#define	IDC_TBR_CONTACTS		8410
#define	IDC_ST_CONTACTS			8411
#define	IDC_IP_ADDRESS			8412
#define	IDC_CHK_SEND_NOW		8413
#define	IDC_ST_SOCKET_PORT		8414
#define	IDC_EDT_SOCKET_PORT		8415
//do not use 8416
#define	IDC_CHK_NOT_EXC_NOTIFY	8417
#define	IDC_CHK_NOT_EXC_SOUND	8418
#define	IDC_CHK_BALOON_SHOW_N	8419
#define	IDC_CHK_BALOON_SHOW_CP	8420
#define	IDC_CHK_NOT_SEND_BALOON	8421
#define	IDC_CHK_HIDE_AFTER_SEND	8422
#define	IDC_LST_SEVERAL_CONT	8423
#define	IDC_CHK_HIDE_CONT_MENU	8424
#define	IDC_CHK_SHOW_IMMED		8425
#define	IDC_CHK_BIG_ICONS		8426
#define	IDC_CHK_HIDE_HIDE		8427
#define	IDC_CAL_SEARCH_FROM		8428
#define	IDC_CAL_SEARCH_TO		8429
#define	IDC_ST_SEARCH_FROM		8430
#define	IDC_ST_SEARCH_TO		8431
#define	IDC_CHK_DN_SHOW_CONT	8432
#define	IDC_CHK_ENABLE_NETWORK	8433
#define	IDC_CHK_HIDE_COMPLETED	8434
#define	IDC_TVW_SEARCH_DATES	8435
#define	IDC_CHK_SEARCH_DELETED	8436
#define	IDC_CHK_SEARCH_SENT		8437
#define	IDC_CHK_SEARCH_RECEIVED	8438
#define	IDC_ST_AV_WINDOWS		8439
#define	IDC_LST_WINDOWS			8440
#define	IDC_TAB_HOT				8441
#define	IDC_TVW_H_MAIN			8442
#define	IDC_TVW_H_NOTE			8443
#define	IDC_TVW_H_EDIT			8444
#define	IDC_ST_HK_GROUPS		8445
#define	IDC_TVW_H_GROUPS		8446
#define	IDC_ST_HOTKEY_GROUPS	8447
#define	IDC_TBR_HK_GROUPS		8448
#define	IDC_ST_CONT_GROUPS		8449
#define	IDC_TVW_CONT_GROUPS		8450
#define	IDC_TBR_CONT_GROUPS		8451
#define	IDC_CBO_CONT_GROUPS		8452
#define	IDC_ST_SYNC_LOCAL_DIR_1	8453
#define	IDC_ST_SYNC_LOCAL_DIR_2	8454
#define	IDC_EDT_SYNC_LOCAL_1	8455
#define	IDC_EDT_SYNC_LOCAL_2	8456
#define	IDC_CMD_SYNC_LOCAL_1	8457
#define	IDC_CMD_SYNC_LOCAL_2	8458
#define	IDC_CHK_SYNC_LOCAL		8459
#define	IDC_CMD_SYNC_LOCAL_3	8460
#define	IDC_CMD_SYNC_LOCAL_NOW	8461
#define	IDC_CHK_SYNC_SAME_DIR	8462
#define	IDC_ST_SYNC_COMP_NAME	8463
#define	IDC_EDT_SYNC_COMP_NAME	8464
#define	IDC_CHK_LOCAL_SYNC_REC	8465
#define	IDC_CHK_LOCAL_SYNC_ROOT	8466
#define	IDC_GRP_LOCAL_SYNC		8467
#define	IDC_LST_LOCAL_SYNC		8468
#define	IDC_TBR_LOCAL_SYNC		8469
#define	IDC_CBO_AVAILABLE_TAGS	8470
#define	IDC_GRP_SPELL			8471
#define	IDC_ST_SPELL_COLOR		8472
#define IDC_LST_MISPRINTS  		8473
#define IDC_LST_SUGGESTIONS  	8474
#define	IDC_ST_NOT_IN_DICT		8475
#define	IDC_ST_SUGGESTIONS		8476
#define	IDC_CMD_IGNORE_ONCE		8477
#define	IDC_CMD_IGNORE_ALL		8478
#define	IDC_CMD_ADD_TO_DICT		8479
#define	IDC_CMD_CHANGE_ONCE		8480
#define	IDC_CMD_CHANGE_ALL		8481
#define	IDC_CMD_CF_COLOR		8482
#define	IDC_CMD_FN_COLOR		8483
#define	IDC_CBO_CF_COLOR		8484
#define	IDC_CBO_FN_COLOR		8485
#define	IDC_GRP_SKINS			8486
#define	IDC_CBO_SKINS			8487
#define	IDC_ST_VOLUME			8488
#define	IDC_ST_RATE				8489
#define	IDC_TRACK_VOLUME		8490
#define	IDC_TRACK_RATE			8491
#define	IDC_ST_RATE_LEFT		8492
#define	IDC_ST_RATE_RIGHT		8493
#define	IDC_ST_PITCH			8494
#define	IDC_TRACK_PITCH			8495
#define	IDC_ST_PITCH_LEFT		8496
#define	IDC_ST_PITCH_RIGHT		8497
#define	IDC_ST_STOP_LOOP		8498
#define	IDC_CBO_STOP_LOOP		8499
#define	IDC_ST_SINGLE_CLICK		8500
#define	IDC_CBO_SINGLE_CLICK	8501
#endif

