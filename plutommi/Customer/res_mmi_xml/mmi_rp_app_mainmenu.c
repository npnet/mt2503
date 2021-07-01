/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   mmi_rp_app_mainmenu.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Resource populate function generated by XML resgen
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#include "CustDataProts.h"
#include "mmi_rp_app_mainmenu_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "GlobalResDef.h"
#include "SettingResDef.h"
#include "Extraresdef.h"
#include "UcmResdef.h"
#include "GlobalMenuItems.h"
#include "CustMenuRes.h"
#include "mmi_rp_all_defs.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_mainmenu_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_mainmenu_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_mainmenu_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_FILE_MNGR_MENUID,
        IDLE_SCREEN_MENU_ID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        MAIN_MENU_FILE_MNGR_TEXT,
        MAIN_MENU_FILEMNGR_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_PHONEBOOK_MENUID,
        IDLE_SCREEN_MENU_ID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        MAIN_MENU_PHONEBOOK_TEXT,
        MAIN_MENU_PHONEBOOK_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_FUNANDGAMES_MENUID,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_FUNANDGAMES_TEXT,
        MAIN_MENU_FUNANDGAMES_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_EXTRA_MENUID,
        0,
        1,
        EXTRA_CALCULATOR_MENU,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_EXTRA_TEXT,
        MAIN_MENU_EXTRA_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_CALL_LOG,
        MAIN_MENU_CALL_CENTER,
        5,
        MENU_ID_CLOG_MISSED_CALL,
        MENU_ID_CLOG_DIALED_CALL,
        MENU_ID_CLOG_RECVED_CALL,
        MENU_ID_CLOG_ALL_CALL,
        MENU_ID_CLOG_DELETE_BOX,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_CALL_LOG_TEXT,
        IMG_ID_CLOG_MAIN_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_MULTIMEDIA_MENUID,
        IDLE_SCREEN_MENU_ID,
        5,
        MENU_ID_IMGVIEW_APP,
        MENU_ID_VDOPLY_APP,
        AUDIO_PLAYER_MAIN_MENUID,
        MAIN_MENU_BT_MUSIC_APP_MENUID,
        MENU_ID_SNDREC_MAIN,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_MMEDIA_TEXT,
        MAIN_MENU_MULTIMEDIA_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_SERVICES_MENUID,
        IDLE_SCREEN_MENU_ID,
        1,
        MENU_ID_SAT1_ENTRY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_SERVICES_TEXT,
        MAIN_MENU_SERVICES_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_ORGANIZER_MENUID,
        0,
        3,
        ORGANIZER_CALENDER_MENU,
        ORGANIZER_ALARM_MENU,
        ORGANIZER_WORLDCLOCK_MENU,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_ORGANIZER_TEXT,
        MAIN_MENU_ORGANIZER_ICON));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_UCM_CALL_SETTING,
        MAIN_MENU_SETTINGS_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CALL_SETTING,
        IMG_ID_CALLSET_CALL_SETTING));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_SETTINGS_MENUID,
        IDLE_SCREEN_MENU_ID,
        12,
        MENU_SETTING_CALIBRATION,
        MENU9102_INITIAL_SETUP,
        MENU_ID_GPS_SETTING,
        MENU_ID_SECSET_MAIN_MENU,
        MENU_ID_NETSET_MAIN,
        MENU_ID_CONNECTIVITY,
        MAIN_MENU_WLAN_WIZARD_MENUID,
        MENU_ID_UCM_CALL_SETTING,
        MAIN_MENU_PROF_SOUND_SETTING,
        MAIN_MENU_PROF_VOLUME_SETTING,
        MENU_SETTING_RESTORE,
        MENU_ID_SETTING_VERSION_INFO,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_SETTINGS_TEXT,
        MAIN_MENU_SETTINGS_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_SETTINGS_NO_SIM_MENUID,
        0,
        7,
        MENU_SETTING_CALIBRATION,
        MENU9102_INITIAL_SETUP,
        MENU_ID_GPS_SETTING,
        MENU_ID_SECSET_MAIN_MENU,
        MENU_ID_NETSET_MAIN,
        MENU_ID_CONNECTIVITY,
        MENU_SETTING_RESTORE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        MAIN_MENU_SETTINGS_TEXT,
        MAIN_MENU_SETTINGS_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_WLAN_WIZARD_MENUID,
        0,
        3,
        MENU_ID_WLAN_WIZARD_LIST_OPT_ON,
        MENU_ID_WLAN_WIZARD_LIST_OPT_STATUS,
        MENU_ID_WLAN_WIZARD_LIST_OPT_REFRESH,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_WLAN_TEXT,
        MAIN_MENU_WLAN_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_CALL_CENTER,
        IDLE_SCREEN_MENU_ID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CALL_CENTER,
        MAIN_MENU_CALL_LOG_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_TOOLSANDFUN_MENUID,
        IDLE_SCREEN_MENU_ID,
        4,
        ORGANIZER_CALENDER_MENU,
        ORGANIZER_ALARM_MENU,
        ORGANIZER_WORLDCLOCK_MENU,
        EXTRA_CALCULATOR_MENU,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        MAIN_MENU_TOOLSANDFUN_TEXT,
        MAIN_MENU_TOOLSANDFUN_ICON));

    ADD_APPLICATION_MENUITEM5((
        MAIN_MENU_BTDIALER_MENUID,
        IDLE_SCREEN_MENU_ID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        MAIN_MENU_BTDIALER_TEXT,
        MAIN_MENU_BTDIALER_ICON));

    ADD_APPLICATION_MENUITEM5((
        IDLE_SCREEN_MENU_ID,
        0,
        11,
        MAIN_MENU_BTDIALER_MENUID,
        MAIN_MENU_PHONEBOOK_MENUID,
        MAIN_MENU_CALL_CENTER,
        MAIN_MENU_BTNOTIFICATION_MENUID,
        MAIN_MENU_BTRMTCAP_MENUID,
        MAIN_MENU_MESSAGES_MENUID,
        MAIN_MENU_MULTIMEDIA_MENUID,
        MAIN_MENU_SERVICES_MENUID,
        MAIN_MENU_FILE_MNGR_MENUID,
        MAIN_MENU_SETTINGS_MENUID,
        MAIN_MENU_TOOLSANDFUN_MENUID,
        SHOW,
        NONMOVEABLE,
        MATRIX_MENU,
        MAIN_MENU_MENU_TEXT,
        MAIN_MENU_PHONEBOOK_ICON));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_FILE_MNGR_MENUID, highlight_mainmenu_filemngr);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_PHONEBOOK_MENUID, highlight_mainmenu_phonebook);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_FUNANDGAMES_MENUID, highlight_mainmenu_funandgames);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_EXTRA_MENUID, highlight_mainmenu_extra);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_CALL_LOG, highlight_mainmenu_calllog);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_MULTIMEDIA_MENUID, highlight_mainmenu_multimedia);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_SERVICES_MENUID, highlight_mainmenu_services);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_ORGANIZER_MENUID, highlight_mainmenu_organizer);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_UCM_CALL_SETTING, mmi_settings_highlight_general_call_setting);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_SETTINGS_MENUID, highlight_mainmenu_settings);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_SETTINGS_NO_SIM_MENUID, highlight_mainmenu_settings);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_WLAN_WIZARD_MENUID, highlight_mainmenu_WiFi_wizard);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_CALL_CENTER, highlight_mainmenu_callcenter);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_TOOLSANDFUN_MENUID, highlight_mainmenu_tools);
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MAIN_MENU_BTDIALER_MENUID, highlight_mainmenu_bt_dialer);
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
