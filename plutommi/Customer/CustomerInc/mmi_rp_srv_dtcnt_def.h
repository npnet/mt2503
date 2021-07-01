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
 *   mmi_rp_srv_dtcnt_def.h
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


#ifndef _MMI_RP_SRV_DTCNT_DEF_H
#define _MMI_RP_SRV_DTCNT_DEF_H




/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_SRV_DTCNT_WLAN = 9320 + 1, /* BASE_ID + 1 */
    MMI_RP_SRV_DTCNT_STR_MAX
}mmi_rp_srv_dtcnt_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Events resource IDs - begin ********************/
typedef enum
{
    EVT_ID_SRV_DTCNT_WLAN_ACTIVE = 9320 + 1, /* BASE_ID + 1 */
    EVT_ID_SRV_DTCNT_WLAN_CONNECTED,
    EVT_ID_SRV_DTCNT_WLAN_INACTIVE,
    EVT_ID_SRV_DTCNT_WLAN_SCAN,
    EVT_ID_SRV_DTCNT_WLAN_CONNECT,
    EVT_ID_SRV_DTCNT_WLAN_BEARER_STATUS,
    EVT_ID_SRV_DTCNT_WLAN_CONN_IND,
    EVT_ID_SRV_DTCNT_WLAN_DISC_IND,
    EVT_ID_SRV_DTCNT_WLAN_IPADDR_UPDATE,
    EVT_ID_SRV_DTCNT_WLAN_IPADDR_CONFLICT_IND,
    EVT_ID_SRV_DTCNT_WLAN_CURR_AP_INFO,
    EVT_ID_SRV_DTCNT_WLAN_WPS_INFO,
    EVT_ID_SRV_DTCNT_WLAN_CHANGE_BEARER_TO_WLAN,
    EVT_ID_SRV_DTCNT_WLAN_CHANGE_BEARER_TO_CELLULAR_NETWORK,
    EVT_ID_SRV_DTCNT_PROV_IND,
    EVT_ID_SRV_DTCNT_PROV_INSTALL_RES_IND,
    EVT_ID_SRV_DTCNT_PROV_DONE_IND,
    EVT_ID_SRV_DTCNT_ACCT_UPDATE_IND,
    EVT_ID_SRV_DTCNT_ACCT_DELETE_IND,
    EVT_ID_SRV_DTCNT_SIM_PREFERENCE_UPDATE_IND,
    EVT_ID_SRV_DTCNT_CHANGE_REAL_ACCT_IND,
    EVT_ID_SRV_DTCNT_WLAN_INIT_RES_IND,
    EVT_ID_SRV_DTCNT_WLAN_DEINIT_RES_IND,
    EVT_ID_SRV_DTCNT_WLAN_CONN_RES_IND,
    EVT_ID_SRV_DTCNT_WLAN_DISC_RES_IND,
    EVT_ID_SRV_DTCNT_WLAN_SCAN_RES_IND,
    EVT_ID_SRV_DTCNT_WLAN_IPADDR_CHANGE_QRY,
    EVT_ID_SRV_DTCNT_WIFI_CHIP_INVALID,
    EVT_ID_SRV_DTCNT_WLAN_SEARCH_AP_OPEN_IND,
    EVT_ID_SRV_DTCNT_WLAN_SEARCH_AP_CLOSE_IND,
    EVT_ID_SRV_DTCNT_BEARER_INIT_WLAN_AP_QUERY_IND,
    EVT_ID_SRV_DTCNT_BEARER_DEINIT_WLAN_AP_QUERY_IND,
    EVT_ID_SRV_DTCNT_WLAN_AP_LIST_QUERY_IND,
    EVT_ID_SRV_DTCNT_WLAN_LOGOUT_IND,
    EVT_ID_SRV_DTCNT_WLAN_IPADDR_CHANGE_CNF,
    EVT_ID_SRV_DTCNT_WLAN_SWITCH_SAME_SSID_IND,
    EVT_ID_SRV_DTCNT_NET_STATUS_IND,
    EVT_ID_SRV_DTCNT_WLAN_CONN_PROF,
    EVT_ID_SRV_DTCNT_WLAN_SLEEP,
    MMI_RP_SRV_DTCNT_EVENT_MAX
}mmi_rp_srv_dtcnt_event_enum;
/******************** Events resource IDs - begin ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/


#endif /* _MMI_RP_SRV_DTCNT_DEF_H */
