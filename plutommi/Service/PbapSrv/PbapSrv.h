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
 *  PhoneBookPBAP.h
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  phonebook access profile
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __SRV_PBAP_H__
#define __SRV_PBAP_H__

#include "MMI_features.h"
  
#ifdef __MMI_BT_SUPPORT__
#if defined(__MMI_PBAP_SUPPORT__) 

#include "MMIDataType.h"
#include "mmi_res_range_def.h"
#include "bluetooth_struct.h"
#include "fs_type.h"
#include "custom_phb_config.h"
#include "BtcmSrvGprot.h"
#include "PbapSrvGprot.h"
#include "MMI_conn_app_trc.h"
#include "DebugInitDef_Int.h"
#include "kal_general_types.h"
#define MMI_PBAP_INVALID_REQ_ID   0xFF
#define MMI_PBAP_INVALID_CONN_ID  0xFF

#define PBAP_BUILD_LIST_BUFFER 500
#define SRV_PBAP_MAX_HANDLE_NUM  2

#define PBAP_ADP_WORK_FOLDER  (L"Z:\\@pbap\\")
#define PBAP_ADP_FOLDER_FILE (L"Z:\\@pbap\\folder.tmp")
#define PBAP_ADP_LIST_FILE   (L"Z:\\@pbap\\list.tmp")
#define PBAP_ADP_ENTRY_FILE   (L"Z:\\@pbap\\entry.tmp")

#define BEGIN_XML_DECL      "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<!-- This Folder Object generated by MTK Blue SDK -->\r\n"
#define BEGIN_FOLDER_DECL   "<!DOCTYPE vcard-listing SYSTEM \"vcard-listing.dtd\">\r\n<vcard-listing version=\"1.0\">\r\n"
#define END_FOLDER_DECL     "</vcard-listing>\r\n"
#define BEGIN_HANDLE        " <card handle = \""
#define MIDDLE_HANDLE       ".vcf\" name = \""
#define END_HANDLE          "\"/>\r\n"

/*---------------------------------------------------------------------------
 * PbapVcardFilterBit type
 * 
 *     Describes the bit location pertaining to each filter value in 
 *     the 64-bit vCard filter.
 */
typedef U8 PbapVcardFilterBit;

#define PBAP_VCARD_FILTER_VER       0        /* Version (Bit 0) */
#define PBAP_VCARD_FILTER_FN        1        /* Formatted Name (Bit 1) */
#define PBAP_VCARD_FILTER_N         2        /* Structured Presentation of Name (Bit 2) */
#define PBAP_VCARD_FILTER_PHOTO     3        /* Associated Image or Photo (Bit 3) */
#define PBAP_VCARD_FILTER_BDAY      4        /* Birthday (Bit 4) */
#define PBAP_VCARD_FILTER_ADR       5        /* Delivery Address (Bit 5) */
#define PBAP_VCARD_FILTER_LABEL     6        /* Delivery (Bit 6) */
#define PBAP_VCARD_FILTER_TEL       7        /* Telephone (Bit 7) */
#define PBAP_VCARD_FILTER_EMAIL     8        /* Electronic Mail Address (Bit 8) */
#define PBAP_VCARD_FILTER_MAILER    9        /* Electronic Mail (Bit 9) */
#define PBAP_VCARD_FILTER_TZ        10       /* Time Zone (Bit 10) */
#define PBAP_VCARD_FILTER_GEO       11       /* Geographic Position (Bit 11) */
#define PBAP_VCARD_FILTER_TITLE     12       /* Job (Bit 12) */
#define PBAP_VCARD_FILTER_ROLE      13       /* Role within the Organization (Bit 13) */
#define PBAP_VCARD_FILTER_LOGO      14       /* Organization Logo (Bit 14) */
#define PBAP_VCARD_FILTER_AGENT     15       /* vCard of Person Representing (Bit 15) */
#define PBAP_VCARD_FILTER_ORG       16       /* Name of Organization (Bit 16) */
#define PBAP_VCARD_FILTER_NOTE      17       /* Comments (Bit 17) */
#define PBAP_VCARD_FILTER_REV       18       /* Revision (Bit 18) */
#define PBAP_VCARD_FILTER_SOUND     19       /* Pronunciation of Name (Bit 19) */
#define PBAP_VCARD_FILTER_URL       20       /* Uniform Resource Locator (Bit 20) */
#define PBAP_VCARD_FILTER_UID       21       /* Unique ID (Bit 21) */
#define PBAP_VCARD_FILTER_KEY       22       /* Public Encryption Key (Bit 22) */
#define PBAP_VCARD_FILTER_NICK      23       /* Nickname (Bit 23) */
#define PBAP_VCARD_FILTER_CAT       24       /* Categories (Bit 24) */
#define PBAP_VCARD_FILTER_PRODID    25       /* Product Id (Bit 25) */
#define PBAP_VCARD_FILTER_CLASS     26       /* Class Information (Bit 26) */
#define PBAP_VCARD_FILTER_SORT_STR  27       /* Sort string (Bit 27) */
#define PBAP_VCARD_FILTER_TIMESTAMP 28       /* Time stamp (Bit 28) */
/* Bits 29-38 Reserved for future use */
#define PBAP_VCARD_FILTER_PROP      39       /* Use of a proprietary filter (Bit 39) */
/* Bits 40-63 Reserved for proprietary filter usage */

typedef enum
{
    SRV_PBAP_STATE_IDLE,                                /*0*/
    SRV_PBAP_STATE_REGISTERING,                  /*1*/
    SRV_PBAP_STATE_DEREGISTERING,              /*2*/
    SRV_PBAP_STATE_ACTIVE,                            /*3*/
    SRV_PBAP_STATE_AUTHORIZING,                 /*4*/
    SRV_PBAP_STATE_AUTHORIZED,                   /*5*/
    SRV_PBAP_STATE_CONNECTED,                     /*6*/
    SRV_PBAP_STATE_BUILDING_FOLDER,          /*7*/
    SRV_PBAP_STATE_BUILDING_ENTRY,            /*8*/
    SRV_PBAP_STATE_BUILDING_LIST,               /*9*/
    SRV_PBAP_STATE_DISCONNECTING,             /*10*/
    SRV_PBAP_STATE_DEACTIVATING,                /*11*/
    SRV_PBPA_STATE_TATOL
} srv_pbap_state_enum;

/****************************************************************************
 *
 * Constants
 *
 ****************************************************************************/

 /****************************************************************************
 *
 * Types
 *
 ****************************************************************************/

/*---------------------------------------------------------------------------
 * PbNameType type
 *
 *     This type is used to identify the portion of path information that
 *     is provided in the Phonebook Name.  For example, a Pull Phonebook
 *     operation supplies the entire absolute path name for the phonebook,
 *     while Pull Vcard Listing and Pull Vcard Entry provide only the name
 *     of the phonebook and the name of the vCard, respectively.
 */
typedef U8 PbNameType;

#define PB_NAME_TYPE_ABSOLUTE           0       /* Absolute path information */
#define PB_NAME_TYPE_LOCAL              1       /* Local path information */
/* End of PbNameType */

/*---------------------------------------------------------------------------
 * PbPathFlags type
 *
 *     This type is used to identify the portion of path information that
 */
typedef U16 PbPathFlags;

#define PB_PATH_TELECOM                 0x0001  /* Telecom path is used */
#define PB_PATH_SIM                     0x0002  /* SIM path is used */
#define PB_PATH_PHONEBOOK               0x0004  /* Phonebook path is used */
#define PB_PATH_INCOMING                0x0008  /* Incoming call path is used */
#define PB_PATH_OUTGOING                0x0010  /* Outgoing call path is used */
#define PB_PATH_MISSED                  0x0020  /* Missed call path is used */
#define PB_PATH_COMBINED                0x0040  /* Combined call path is used */
/* End of PbPathFlags */


typedef enum
{
    SRV_PBAP_EVENT_REG = PBAP_BASE + 1,
    SRV_PBAP_EVENT_DEREG,
    SRV_PBAP_EVENT_MAX
}srv_pbap_event_enum;

/*---------------------------------------------------------------------------
 * PbUid type
 */
typedef U32 PbUid;

/*--------------------------------------------------------------------------
 * PbPullPhonebookOp structure
 *
 *     Description
 */
typedef struct _PbPullPhonebookOp
{
    U8 folderName[PBAP_MAX_NAME_LEN + 1];    /*ASCII encoding*/
    PbapVcardFilter filter;
    PbapVcardFormat format;
    U16 maxListCount;
    U16 listStartOffset;

    U16 new_index;
 } PbPullPhonebookOp;

/*--------------------------------------------------------------------------
 * PbPullVcardListingOp structure
 *
 *     Description
 */
typedef struct _PbPullVcardListingOp
{
    U8 folderName[PBAP_MAX_NAME_LEN/ENCODING_LENGTH + 1];//ASCII encoding
    U8 searchAttribute;
    U8 searchValue[(MAX_PBAP_SEARCH_VALUE_LENGTH + 1) *ENCODING_LENGTH]; //ucs encoding
    U8 searchValueLength;
    U8 order;
    U16 maxListCount;
    U16 listStartOffset;

    U16 list_size;
    FS_HANDLE listing_fh;
    U16 curr_index;
} PbPullVcardListingOp;

/*--------------------------------------------------------------------------
 * PbPullVcardEntryOp structure
 *
 *     Description
 */
typedef struct _PbPullVcardEntryOp
{
    U16 entry_index;
    PbapVcardFilter filter;                 /* Filter of the required vCard fields */
    U8 format;                              /* Format of vCard (2.1 or 3.0) */
} PbPullVcardEntryOp;


typedef struct
{
    MMI_EVT_PARAM_HEADER
    S32 event_id;
    void *data;
}srv_pbap_event_struct;
/*---------------------------------------------------------------------------
 * PBAP_IsSetFilterBit()
 *
 *     Returns the status of the appropriate filter bit in the 64-bit 
 *     vCard filter.
 *
 * Parameters:
 *     Bit - Bit to check in the vCard filter.
 *
 *     Filter - vCard filter structure.
 *
 * Returns:
 *     TRUE or FALSE
 */

typedef struct
{
    srv_pbap_state_enum state;
    
    U16 g_index_list[MMI_PHB_PHONE_ENTRIES]; 
    S8 currentPath[PBAP_MAX_NAME_LEN + 1];   /*ASCII encoding, Indicate the current path that client set*/

    S8 pb_storage; /*Indicate the object type*/
    U16 pb_size;//record the pb size in pullphonebook or pullvcardlisting
    MMI_BOOL index_array_got;

    PbPullVcardListingOp vcard_listing;
    PbPullPhonebookOp vcard_folder;
    PbPullVcardEntryOp vcard_entry;

    U16 completed_count;

    U32 cm_conn_id;
    U32 conn_id;
    srv_bt_cm_bt_addr bt_device;
    //U8 pbap_dev_name[BT_PBAP_MAX_DEV_NAME_LEN];

    MMI_BOOL disconnect_from_cm;
}srv_pbap_cntx_struct;


typedef struct
{
    S32 srv_hd;
    U32 event_mask;
    bt_notify notifier;
    srv_pbap_cntx_struct *pbap_cntx;
} srv_pbap_handle_struct;


typedef struct
{
    U8 to_self;         /* folder: 0x01, list: 0x02 */
    srv_pbap_handle_struct app_hd[SRV_PBAP_MAX_HANDLE_NUM];
    srv_pbap_cntx_struct pbap_cntx;    
}srv_pbap_context_struct;


extern srv_pbap_context_struct *srv_pbap_p;


#define SRV_PBAP_LOG(x)                                                             \
   {                                                                                \
      MMI_TRACE(MMI_CONN_TRC_G7_BT, x);                                             \
   }
#define SRV_PBAP_LOG1(x, x1)                                                        \
   {                                                                                \
      MMI_TRACE(MMI_CONN_TRC_G7_BT, x, x1);                                         \
   }
#define SRV_PBAP_LOG2(x, x1, x2)                                                    \
   {                                                                                \
      MMI_TRACE(MMI_CONN_TRC_G7_BT, x, x1, x2);                                     \
   }
#define SRV_PBAP_LOG3(x, x1, x2, x3)                                                \
   {                                                                                \
      MMI_TRACE(MMI_CONN_TRC_G7_BT, x, x1, x2, x3);                                 \
   }
#define SRV_PBAP_LOG4(x, x1, x2, x3, x4)                                            \
   {                                                                                \
      MMI_TRACE(MMI_CONN_TRC_G7_BT, x, x1, x2, x3, x4);                             \
   }
#define SRV_PBAP_LOG6(x, x1, x2, x3, x4, x5, x6)                                    \
   {                                                                                \
      MMI_TRACE(MMI_CONN_TRC_G7_BT, x, x1, x2, x3, x4, x5, x6);                     \
   }
#define SRV_PBAP_LOG7(x, x1, x2, x3, x4, x5, x6, x7)                                \
   {                                                                                \
      MMI_TRACE(MMI_CONN_TRC_G7_BT, x, x1, x2, x3, x4, x5, x6, x7);                 \
   }

#define SRV_PBAP_STATE_TRANS(x)                                                     \
{                                                                                   \
    SRV_PBAP_LOG2(SRV_PBAP_SERVER_STATE_TRAN, srv_pbap_p->pbap_cntx.state, x);     \
    srv_pbap_p->pbap_cntx.state = (x);                                                                                           \
}

#define SRV_PBAP_LOG_STATE()                                                        \
{                                                                                   \
    SRV_PBAP_LOG1(SRV_PBAP_SERVER_LOG_STATE, srv_pbap_p->pbap_cntx.state);         \
}


#endif /* defined(__MMI_PBAP_NEW_SUPPORT__) */
#endif /* __MMI_BT_SUPPORT__ */

#endif /* __BT_MMI_PBAP_H__ */ 

