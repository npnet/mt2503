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
 *   mmi_rp_app_data.h
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


#ifndef MMI_RP_NATIVE_APP_PACKAGE_DATA_H
#define MMI_RP_NATIVE_APP_PACKAGE_DATA_H




/* srv_nativeappfactory_package_struct structure declaration */
typedef struct {
    mmi_app_package_name_struct    package_name;
    mmi_proc_func                  package_proc;
    mmi_app_launch_func            app_launch;

    U16 app_id;
    U16 app_str_id;
    U16 app_img_id;
    MMI_BOOL app_is_hidden_in_mainmenu;
} srv_nativeappfactory_package_struct;

/* extern declaration to use the srv_native_app_package_struct array */
extern const srv_nativeappfactory_package_struct native_app_package_table[];

/* extern declaration to get size of native_app_package_table[] array  */
extern U32 srv_nativeappfactory_get_table_size(void);

/* extern native app package proc and native app launch function */
extern MMI_ID mmi_bt_launch_bt(void* param, U32 param_size);
extern MMI_ID mmi_imgview_launch(void* param, U32 param_size);
extern MMI_ID mmi_sndrec_launch_function(void* param, U32 param_size);
extern MMI_ID mmi_audply_entry_main(void* param, U32 param_size);
extern MMI_ID mmi_bt_music_entry_main(void* param, U32 param_size);
extern MMI_ID mmi_world_clock_launch(void* param, U32 param_size);
extern MMI_ID mmi_wlan_app_launch_func(void* param, U32 param_size);
extern mmi_ret mmi_clog_appmgr_package_proc(mmi_event_struct *param);
extern MMI_ID mmi_clog_appmgr_launch(void* param, U32 param_size);
extern MMI_ID mmi_clog_appmgr_launch_bt(void* param, U32 param_size);
extern MMI_ID mmi_profiles_launch_function(void* param, U32 param_size);
extern MMI_ID mmi_fmgr_app_mgr_launch(void* param, U32 param_size);
extern MMI_ID EntryScrSettingMenu(void* param, U32 param_size);
extern MMI_ID mmi_service_sat_proc(void* param, U32 param_size);
extern MMI_ID CalcPreEntryApp(void* param, U32 param_size);
extern MMI_ID EntryAlmMenu(void* param, U32 param_size);
extern MMI_ID ClndrPreEntryApp(void* param, U32 param_size);
extern MMI_ID mmi_dialer_launch(void* param, U32 param_size);
extern MMI_ID mmi_btdialer_app_launch_func(void* param, U32 param_size);
extern MMI_ID mmi_vdoply_entry_app(void* param, U32 param_size);
extern mmi_ret mmi_um_package_proc(mmi_event_struct *param);
extern MMI_ID mmi_um_entry_main_message_menu(void* param, U32 param_size);
extern MMI_ID mmi_um_entry_main_message_enter_bt_msg(void* param, U32 param_size);
extern MMI_ID mmi_bt_notification_launch(void* param, U32 param_size);
extern mmi_ret mmi_bt_rmtcap_package_proc(mmi_event_struct *param);
extern MMI_ID mmi_btrmtcap_entry_main_message_menu(void* param, U32 param_size);
extern MMI_ID mmi_fmpapp_launch(void* param, U32 param_size);
extern MMI_ID mmi_phb_pre_entry_main_screen(void* param, U32 param_size);
extern MMI_ID mmi_phb_bt_pre_entry_main_screen(void* param, U32 param_size);
extern MMI_ID mmi_connectivity_app_launch_func(void* param, U32 param_size);
extern MMI_ID vapp_winguo_launch(void* param, U32 param_size);
extern MMI_ID GB_WG_Search_Net_Launch(void* param, U32 param_size);


#endif /* MMI_RP_NATIVE_APP_PACKAGE_DATA_H */