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
 *   mmi_rp_app_worldclock_def.h
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


#ifndef _MMI_RP_APP_WORLDCLOCK_DEF_H
#define _MMI_RP_APP_WORLDCLOCK_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    ORGANIZER_WORLDCLOCK_MENU = 37530 + 1, /* BASE_ID + 1 */
    MITEM_WORLDCLOCK_BROWSECITY,
    MENU_ID_WC_DST_OPT,
    MENU_ID_WC_DST_SETTING,
    MENU_ID_WC_DST_CFG_OPT,
    MENU_ID_WC_DST_CFG_ON,
    MENU_ID_WC_DST_CFG_OFF,
    MMI_RP_APP_WORLDCLOCK_MENU_MAX
}mmi_rp_app_worldclock_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_WORLD_CLOCK_TITLE = 37530 + 1, /* BASE_ID + 1 */
    STR_WCLOCK_CITY_NONE,
    STR_WCLOCK_CITY1,
    STR_WCLOCK_CITY2,
    STR_WCLOCK_CITY3,
    STR_WCLOCK_CITY4,
    STR_WCLOCK_CITY5,
    STR_WCLOCK_CITY6,
    STR_WCLOCK_CITY7,
    STR_WCLOCK_CITY8,
    STR_WCLOCK_CITY9,
    STR_WCLOCK_CITY10,
    STR_WCLOCK_CITY11,
    STR_WCLOCK_CITY12,
    STR_WCLOCK_CITY13,
    STR_WCLOCK_CITY14,
    STR_WCLOCK_CITY15,
    STR_WCLOCK_CITY16,
    STR_WCLOCK_CITY17,
    STR_WCLOCK_CITY18,
    STR_WCLOCK_CITY19,
    STR_WCLOCK_CITY20,
    STR_WCLOCK_CITY21,
    STR_WCLOCK_CITY22,
    STR_WCLOCK_CITY23,
    STR_WCLOCK_CITY24,
    STR_WCLOCK_CITY25,
    STR_WCLOCK_CITY26,
    STR_WCLOCK_CITY27,
    STR_WCLOCK_CITY28,
    STR_WCLOCK_CITY29,
    STR_WCLOCK_CITY30,
    STR_WCLOCK_CITY31,
    STR_WCLOCK_CITY32,
    STR_WCLOCK_CITY33,
    STR_WCLOCK_CITY34,
    STR_WCLOCK_CITY35,
    STR_WCLOCK_CITY36,
    STR_WCLOCK_CITY37,
    STR_WCLOCK_CITY38,
    STR_WCLOCK_CITY39,
    STR_WCLOCK_CITY40,
    STR_WCLOCK_CITY41,
    STR_WCLOCK_CITY42,
    STR_WCLOCK_CITY43,
    STR_WCLOCK_CITY44,
    STR_WCLOCK_CITY45,
    STR_WCLOCK_CITY46,
    STR_WCLOCK_CITY47,
    STR_WCLOCK_CITY48,
    STR_WCLOCK_CITY49,
    STR_WCLOCK_CITY50,
    STR_WCLOCK_CITY51,
    STR_WCLOCK_CITY52,
    STR_WCLOCK_CITY53,
    STR_WCLOCK_CITY54,
    STR_WCLOCK_CITY55,
    STR_WCLOCK_CITY56,
    STR_WCLOCK_CITY57,
    STR_WCLOCK_CITY58,
    STR_WCLOCK_CITY59,
    STR_WCLOCK_CITY60,
    STR_WCLOCK_CITY61,
    STR_WCLOCK_CITY62,
    STR_WCLOCK_CITY63,
    STR_WCLOCK_CITY64,
    STR_WCLOCK_CITY65,
    STR_WCLOCK_CITY66,
    STR_WCLOCK_CITY67,
    STR_WCLOCK_CITY68,
    STR_WCLOCK_CITY69,
    STR_WCLOCK_CITY70,
    STR_WCLOCK_CITY71,
    STR_WCLOCK_CITY72,
    STR_WCLOCK_CITY73,
    STR_WCLOCK_CITY74,
    STR_WCLOCK_CITY75,
    STR_WCLOCK_CITY76,
    STR_WCLOCK_CITY77,
    STR_WCLOCK_CITY78,
    STR_TOTAL_NUM_CITY,
    STR_WCLOCK_CITY_ABBRE_NONE,
    STR_WCLOCK_CITY_ABBRE1,
    STR_WCLOCK_CITY_ABBRE2,
    STR_WCLOCK_CITY_ABBRE3,
    STR_WCLOCK_CITY_ABBRE4,
    STR_WCLOCK_CITY_ABBRE5,
    STR_WCLOCK_CITY_ABBRE6,
    STR_WCLOCK_CITY_ABBRE7,
    STR_WCLOCK_CITY_ABBRE8,
    STR_WCLOCK_CITY_ABBRE9,
    STR_WCLOCK_CITY_ABBRE10,
    STR_WCLOCK_CITY_ABBRE11,
    STR_WCLOCK_CITY_ABBRE12,
    STR_WCLOCK_CITY_ABBRE13,
    STR_WCLOCK_CITY_ABBRE14,
    STR_WCLOCK_CITY_ABBRE15,
    STR_WCLOCK_CITY_ABBRE16,
    STR_WCLOCK_CITY_ABBRE17,
    STR_WCLOCK_CITY_ABBRE18,
    STR_WCLOCK_CITY_ABBRE19,
    STR_WCLOCK_CITY_ABBRE20,
    STR_WCLOCK_CITY_ABBRE21,
    STR_WCLOCK_CITY_ABBRE22,
    STR_WCLOCK_CITY_ABBRE23,
    STR_WCLOCK_CITY_ABBRE24,
    STR_WCLOCK_CITY_ABBRE25,
    STR_WCLOCK_CITY_ABBRE26,
    STR_WCLOCK_CITY_ABBRE27,
    STR_WCLOCK_CITY_ABBRE28,
    STR_WCLOCK_CITY_ABBRE29,
    STR_WCLOCK_CITY_ABBRE30,
    STR_WCLOCK_CITY_ABBRE31,
    STR_WCLOCK_CITY_ABBRE32,
    STR_WCLOCK_CITY_ABBRE33,
    STR_WCLOCK_CITY_ABBRE34,
    STR_WCLOCK_CITY_ABBRE35,
    STR_WCLOCK_CITY_ABBRE36,
    STR_WCLOCK_CITY_ABBRE37,
    STR_WCLOCK_CITY_ABBRE38,
    STR_WCLOCK_CITY_ABBRE39,
    STR_WCLOCK_CITY_ABBRE40,
    STR_WCLOCK_CITY_ABBRE41,
    STR_WCLOCK_CITY_ABBRE42,
    STR_WCLOCK_CITY_ABBRE43,
    STR_WCLOCK_CITY_ABBRE44,
    STR_WCLOCK_CITY_ABBRE45,
    STR_WCLOCK_CITY_ABBRE46,
    STR_WCLOCK_CITY_ABBRE47,
    STR_WCLOCK_CITY_ABBRE48,
    STR_WCLOCK_CITY_ABBRE49,
    STR_WCLOCK_CITY_ABBRE50,
    STR_WCLOCK_CITY_ABBRE51,
    STR_WCLOCK_CITY_ABBRE52,
    STR_WCLOCK_CITY_ABBRE53,
    STR_WCLOCK_CITY_ABBRE54,
    STR_WCLOCK_CITY_ABBRE55,
    STR_WCLOCK_CITY_ABBRE56,
    STR_WCLOCK_CITY_ABBRE57,
    STR_WCLOCK_CITY_ABBRE58,
    STR_WCLOCK_CITY_ABBRE59,
    STR_WCLOCK_CITY_ABBRE60,
    STR_WCLOCK_CITY_ABBRE61,
    STR_WCLOCK_CITY_ABBRE62,
    STR_WCLOCK_CITY_ABBRE63,
    STR_WCLOCK_CITY_ABBRE64,
    STR_WCLOCK_CITY_ABBRE65,
    STR_WCLOCK_CITY_ABBRE66,
    STR_WCLOCK_CITY_ABBRE67,
    STR_WCLOCK_CITY_ABBRE68,
    STR_WCLOCK_CITY_ABBRE69,
    STR_WCLOCK_CITY_ABBRE70,
    STR_WCLOCK_CITY_ABBRE71,
    STR_WCLOCK_CITY_ABBRE72,
    STR_WCLOCK_CITY_ABBRE73,
    STR_WCLOCK_CITY_ABBRE74,
    STR_WCLOCK_CITY_ABBRE75,
    STR_WCLOCK_CITY_ABBRE76,
    STR_WCLOCK_CITY_ABBRE77,
    STR_WCLOCK_CITY_ABBRE78,
    STR_WORLD_CLOCK_DST_FOREIGN,
    STR_WORLD_CLOCK_LOCAL,
    STR_WORLD_CLOCK_GMT,
    ORGANIZER_MENU_WORLDCLOCK_STRINGID,
    MMI_RP_APP_WORLDCLOCK_STR_MAX
}mmi_rp_app_worldclock_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_WC = 37530 + 1, /* BASE_ID + 1 */
    GRP_ID_WC_SUB_LCD,
    GRP_ID_WC_SELECT,
    GRP_ID_WC_DST,
    SCR_ID_WC_BROWSE_CITY,
    SCR_ID_WC_APP,
    SCR_ID_WC_OPTIONS,
    SCR_ID_WC_DST,
    SCR_ID_WC_TOTAL,
    MMI_RP_APP_WORLDCLOCK_SCR_MAX
}mmi_rp_app_worldclock_scr_enum;
/******************** Screen resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/


/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    CURRENT_CITY = 37530 + 1, /* BASE_ID + 1 */                 /*         BYTE */ 
    FOREIGN_CITY,                                               /*         BYTE */ 
    NVRAM_SETTING_DT_DST,                                       /*         BYTE */ 
    NVRAM_TIMEZONE,                                             /*        SHORT */ 
    NVRAM_WC_DST,                                               /*         BYTE */ 
    NVRAM_FRN_TIMEZONE,                                         /*        SHORT */ 
    NVRAM_DOWNLOAD_CITY1,                                       /*         BYTE */ 
    NVRAM_DOWNLOAD_CITY2,                                       /*         BYTE */ 
    MMI_RP_APP_WORLDCLOCK_MMI_CACHE_MAX
} mmi_rp_app_worldclock_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


/******************** Image resource IDs - begin ********************/
typedef enum
{
    WORLD_CLOCK_IMAGE1 = 37530 + 1, /* BASE_ID + 1 */
    MMI_RP_APP_WORLDCLOCK_IMG_MAX
}mmi_rp_app_worldclock_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_WORLDCLOCK_DEF_H */