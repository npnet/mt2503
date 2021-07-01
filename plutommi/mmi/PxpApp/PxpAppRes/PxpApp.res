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
 * Dialer.res
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
 * Hongjian Zhao (mtk54439)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 11 05 2014 hongjian.zhao
 * [MAUI_03522425] BLE low power
 * .
 *
 * 06 17 2014 hongjian.zhao
 * [MAUI_03505629] [BLE][FMP] Clock screen should not come on FMP alert screen
 * FMP alert screen need to exist when clock screen come.
 *
 * 06 07 2014 hongjian.zhao
 * [MAUI_03502157] [BLE][FMP] Button not highlighted when pressed
 * modify "OK" button highlight performance and Line's color.
 *
 * 05 19 2014 hongjian.zhao
 * [MAUI_03494006] [Wear_0425Demo] There is no "Find me" function
 * modify for FMP and PXP .
 *
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

#if defined(__MMI_BLE_PXP_SUPPORT__)

<?xml version = "1.0" encoding = "UTF-8"?>

<APP id = "APP_PXPAPP"
    package_name = "native.mtk.pxpapp"
    //name = "STR_ID_DIALER_MENU"
    hidden_in_mainmenu="true"
    //launch = "mmi_pxpapp_launch"
>

    <!--Include Area-->
    <INCLUDE file = "mmi_rp_app_mainmenu_def.h"/>
    <INCLUDE file = "GlobalResDef.h"/> 
    <INCLUDE file="MainMenuDef.h"/> 
      
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--String Resource Area-->
    <!--String Resource Area-->

	<STRING id = "STR_ID_PXP_DISCONNECTED"/>  
 	<STRING id = "STR_ID_PXP_OUT_RANGE"/> 
 	<STRING id = "STR_ID_PXP_IN_RANGE"/> 
 	<STRING id = "STR_ID_PXP_OK"/> 
  	<STRING id = "STR_ID_ALERT_ID"/> 
 	
    <!--End String Resource Area-->
    <!--End String Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Image Resource Area-->
    <!--Image Resource Area-->
    
	<IMAGE id="IMG_PXPAPP_DISCONNECTED_ID">CUST_IMG_PATH"\\\\MainLCD\\\\BLE_APP\\\\ic_disconnected.png"</IMAGE>
	<IMAGE id="IMG_PXPAPP_RANGE_ALERT_ID">CUST_IMG_PATH"\\\\MainLCD\\\\BLE_APP\\\\ic_range_alert.png"</IMAGE> 
	<IMAGE id="IMG_PXPAPP_STATUS_ALERT_ID">CUST_IMG_PATH"\\\\MainLCD\\\\BLE_APP\\\\ic_status_alert.png"</IMAGE> 
	<IMAGE id="IMG_PXPAPP_ALERT_ID">CUST_IMG_PATH"\\\\MainLCD\\\\BLE_APP\\\\ic_missing_alert.png"</IMAGE>     

    
    <!--End Image Resource Area--> 
    <!--End Image Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Screen ID Area-->
    <!--Screen ID Area-->
    <SCREEN id = "GRP_ID_PXPAPP_MAIN"/>	
    <SCREEN id = "SCR_ID_PXPAPP_POPUP"/> 
    
    <!--End Screen Resource Area-->
    <!--End Screen Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Menu Item Area-->
    <!--Menu Item Area-->
    
    
    <!--End Menu Item Area-->
    <!--End Menu Item Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Event proc Area-->
    <!--Event proc Area-->
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
    <RECEIVER id="EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING" proc="mmi_pxp_notify_screen_lock_hdlr"/>
#endif

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
    <!--------------------------------------------------------------------------------------------------------------------->
    <TIMER id="PXPAPP_TARGET_ALERT_TIMER_ID"/>
    <TIMER id="PXPAPP_SET_ADV_INTERVAL_TIMER_ID"/>
    

</APP>

#endif /*__MMI_BLE_PXP_SUPPORT__*/
