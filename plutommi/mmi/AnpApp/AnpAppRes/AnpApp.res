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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * AnpAPp.res
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 *Hongjian Zhao (mtk54439)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 03 30 2015 yier.liao
 * [MAUI_03534579] AsterV2 patch to 11CW1418SP4
 * 	.waiting
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 /* Needed header files of the compile option in XML files, if you need others need to add here */
#include "mmi_features.h"
#include "CustResDef.h"

#if defined(__MMI_BLE_ANP_SUPPORT__)
<?xml version = "1.0" encoding = "UTF-8"?>

<APP id = "APP_ANPAPP"
    package_name = "native.mtk.anpapp"
    //name = "STR_ID_ANP_MAINMENU"  
    //img = "IMG_ANPAPP_ICON_ID"
    hidden_in_mainmenu="true"
    //launch = "mmi_anpapp_launch"
>
    
    <!--Include Area-->
    <INCLUDE file = "mmi_rp_app_mainmenu_def.h"/>
    <INCLUDE file = "GlobalResDef.h"/> 
    <INCLUDE file="MainMenuDef.h"/> 
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--String Resource Area-->
    <!--String Resource Area-->

	//<STRING id = "STR_ID_ANP_MAINMENU"/>
	<STRING id = "STR_ID_ANP_FROM"/>  
	<STRING id = "STR_ID_ANP_MESSAGE"/> 
	<STRING id = "STR_ID_ANP_MESSAGES"/> 
	<STRING id = "STR_ID_ANP_MISSED_CALL"/> 
	<STRING id = "STR_ID_ANP_MISSED_CALLS"/>
	<STRING id = "STR_ID_ANP_NOTIFICATION"/> 
	<STRING id = "STR_ID_ANP_NOTIFICATIONS"/>  
	<STRING id = "STR_ID_ANP_INCOMING_CALL"/> 
	<STRING id = "STR_ID_ANP_VIEW"/>
	<STRING id = "STR_ID_ANP_DISMISS"/>
	<STRING id = "STR_ID_ANP_INCOMING_CALL_EXT"/>
	<STRING id = "STR_ID_ANP_INCOMING_CALL_TRANCATE"/>
	
	
	 
    <!--End String Resource Area-->
    <!--End String Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Image Resource Area-->
    <!--Image Resource Area-->
    
  	//<IMAGE id="IMG_FMPAPP_ICON_ID">CUST_IMG_PATH"\\\\MainLCD\\\\BLE_APP\\\\BLE_mainmenu_icon.png"</IMAGE>
  	//<IMAGE id="IMG_FMPAPP_FINDING_DEVICE_ID">CUST_IMG_PATH"\\\\MainLCD\\\\BLE_APP\\\\Find_devieces.gif"</IMAGE>
	//<IMAGE id="IMG_FMPAPP_FIND_NORMAL_ID">CUST_IMG_PATH"\\\\MainLCD\\\\BLE_APP\\\\ic_find_devieces.png"</IMAGE> 

    
    <!--End Image Resource Area--> 
    <!--End Image Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Screen ID Area-->
    <!--Screen ID Area-->
    <SCREEN id = "GRP_ID_ANPAPP_MAIN"/>	
    <SCREEN id="SCR_ID_ANPAPP_SHOW"/>
    //<SCREEN id="SCR_ID_FMPAPP_STOP"/>	
    
    <!--End Screen Resource Area-->
    <!--End Screen Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Menu Item Area-->
    <!--Menu Item Area-->

    
    //<MENU id="MENU_ID_ANPAPP_MENUID" type="APP_MAIN" str="STR_ID_ANP_MAINMENU" img="IMG_FMPAPP_ICON_ID"
    //   shortcut="ON" shortcut_img="IMG_FMPAPP_ICON_ID" launch="mmi_fmpapp_launch">    	
    //</MENU>
    <!--End Menu Item Area-->
    <!--End Menu Item Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Event proc Area-->
    <!--Event proc Area-->
    <EVENT id="EVT_ID_BT_ANP_CALL_REFRESH" type="SENDER"/>
    <EVENT id="EVT_ID_BT_ANP_MSG_REFRESH" type="SENDER"/>
    <EVENT id="EVT_ID_BT_ANP_NOTI_REFRESH" type="SENDER"/>
#if 0
#ifdef  __OP01_FWPBW__ 
    <RECEIVER id="EVT_ID_PRE_KEY_EVT_ROUTING" proc="mmi_dialer_stop_tone_hdlr"/>
	<RECEIVER id="EVT_ID_PRE_KEY_EVT_ROUTING" proc="mmi_dialer_evt_hdlr"/>
	<RECEIVER id="EVT_ID_GPIO_TRANSMITTER_HOLD_ON" proc="mmi_dialer_evt_hdlr"/>
	<RECEIVER id="EVT_ID_GPIO_TRANSMITTER_PUT_DOWN" proc="mmi_dialer_evt_hdlr"/>
    <RECEIVER id="EVT_ID_IDLE_ENTER" proc="mmi_dialer_evt_hdlr"/>
	<RECEIVER id="EVT_ID_SRV_SHUTDOWN_DEINIT" proc="mmi_dialer_evt_hdlr"/>
#endif    
#endif


    <!--Event proc Area-->
    <!--Event proc Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!------------------------------------------------------Other Resource------------------------------------------------->

    //<TIMER id="FMPAPP_FINDING_DEVICE_STOP_TIMER_ID"/>
    //<TIMER id="FMPAPP_TARGET_ALERT_TIMER_ID"/>

</APP>

#endif /*__MMI_BLE_ANP_SUPPORT__*/