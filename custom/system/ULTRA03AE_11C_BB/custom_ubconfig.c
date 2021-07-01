/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
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
 *   custom_ubconfig.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides the custom configurable APIs for Boot Loader
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/



#if defined (__MTK_TARGET__) && !defined (__UPDATE_BINARY_FILE_DUMMY_BUILD__)

#if defined(__UPDATE_BINARY_FILE__)

#include "custom_ubconfig.h"
[AUTOGEN_SCAT_C_Gen_UB_REGION_SYMBOL]

/*************************************************************************
* FUNCTION
*  custom_query_ubin_dump_region
*
* DESCRIPTION
*  This function builds up the table of DUMP REGIONs of update bin
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_uint32 custom_query_ubin_dump_region_internal(EXTSRAM_REGION_INFO_T* region)
{
[AUTOGEN_SCAT_C_Gen_UB_TEMPLATE_DUMP_REGION_Internal_ASSIGN]
    return UB_DUMP_REGION_COUNT*2;
}

/*************************************************************************
* FUNCTION
*  custom_query_dynamic_DC_ZI_MMIPOOL_region_internal
*
* DESCRIPTION
*  This function Retrieve UB_DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE_ZI_MMIPOOL base and length for zimage decompress 
*  used as working memory
*  
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_uint32 custom_query_dynamic_DC_ZI_MMIPOOL_region_internal(EXTSRAM_REGION_INFO_T* region)
{
[AUTOGEN_SCAT_C_Gen_Get_dynamic_DC_ZI_MMIPOOL]
}

#else

#include "custom_ubconfig.h"

/*************************************************************************
* FUNCTION
*  custom_query_ubin_dump_region
*
* DESCRIPTION
*  This function builds up the table of DUMP REGIONs of update bin
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_uint32 custom_query_ubin_dump_region_internal(EXTSRAM_REGION_INFO_T* region)
{
    return 0;
}

/*************************************************************************
* FUNCTION
*  custom_query_dynamic_DC_ZI_MMIPOOL_region_internal
*
* DESCRIPTION
*  This function Retrieve UB_DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE_ZI_MMIPOOL base and length for zimage decompress 
*  used as working memory
*  
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_uint32 custom_query_dynamic_DC_ZI_MMIPOOL_region_internal(EXTSRAM_REGION_INFO_T* region)
{
    return 0;
}

#endif /* defined(__UPDATE_BINARY_FILE__) */


#endif /* (__MTK_TARGET__) && !defined (__UPDATE_BINARY_FILE_DUMMY_BUILD__) */