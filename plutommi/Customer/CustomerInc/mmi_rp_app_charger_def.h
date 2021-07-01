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
 *   mmi_rp_app_charger_def.h
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


#ifndef _MMI_RP_APP_CHARGER_DEF_H
#define _MMI_RP_APP_CHARGER_DEF_H




/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_LOW_BATTERY = 11871 + 1, /* BASE_ID + 1 */
    STR_CHARGER_CONNECTED,
    STR_CHARGER_REMOVED,
    STR_USB_CHARGER_CONNECTED,
    STR_USB_CHARGER_REMOVED,
    STR_LOW_BATTERY_SHUTDOWN,
    STR_LOW_BATTERY_MT_PROHIBIT,
    STR_ID_CHARGER_CHARGING_ERROR,
    STR_ID_CHARGER_BATTERY_ERROR,
    MMI_RP_APP_CHARGER_STR_MAX
}mmi_rp_app_charger_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_CHARGER_ROOT = 11871 + 1, /* BASE_ID + 1 */
    SCR_CHARGER_POWER_ON,
    SCR_CHARGING_COMPLETE,
    SCR_ABNORMAL_CHARGING,
    SCR_LOW_POWEROFF_SCR,
    MMI_RP_APP_CHARGER_SCR_MAX
}mmi_rp_app_charger_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    LOW_BATTERY_SCR_TIMER = 11871 + 1, /* BASE_ID + 1 */
    BOOTUP_CHARGER_DETECT_TIMER,
    MMI_RP_APP_CHARGER_TIMER_MAX
}mmi_rp_app_charger_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/


/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_CHARGER_CHARGING = 11871 + 1, /* BASE_ID + 1 */
    IMG_ID_CHARGER_DONE,
    MMI_RP_APP_CHARGER_IMG_MAX
}mmi_rp_app_charger_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_CHARGER_DEF_H */
