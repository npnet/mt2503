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
*  LAWS PRINCIPLES.	ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *  gdi_image_alpha_bmp_b2.h
 *
 * Project:
 * --------
 *  PlutoMMI
 *
 * Description:
 * ------------
 *  Alpha Bitmap v2 (AB2) external interface  
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *			   HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __GDI_IMAGE_ALPHA_BMP_V2_H__
#define __GDI_IMAGE_ALPHA_BMP_V2_H__

/***************************************************************************** 
 * Include 
 *****************************************************************************/
#include "MMIDataType.h"
#include "gdi_const.h"
#include "gdi_datatype.h"
#include "Gdi_image_alpha_bmp_v2_internal.h"

/***************************************************************************** 
 * Define
 *****************************************************************************/

/***************************************************************************** 
 * Typedef 
 *****************************************************************************/

/***************************************************************************** 
 * Global Function 
 *****************************************************************************/
extern void gdi_image_ab2_init(void);

extern GDI_RESULT gdi_image_ab2_draw_handler(
    U32     flag, 
    U32     frame_pos, 
    S32     x, 
    S32     y, 
    S32     w, 
    S32     h, 
    U8*     data_ptr, 
    U32     img_size);

extern GDI_RESULT gdi_image_ab2_draw_with_color(
    U8*     data_ptr, 
    U32     img_size,
    gdi_color     color,
    S32     x, 
    S32     y, 
    S32     w, 
    S32     h, 
    U32     flag);


extern GDI_RESULT gdi_image_ab2_get_dimension_handler(
    U32 flag, 
    U8 *data_ptr, 
    U32 img_size, 
    S32 *width, 
    S32 *height);

extern GDI_RESULT gdi_image_ab2_draw_id_nb_concurrent(
    gdi_handle dst_layer,
    S32 dst_layer_x, 
    S32 dst_layer_y, 
    gdi_handle src_layer,
    U16 ImageId);

extern U32 gdi_image_ab2_get_info(U8 *data_ptr, BOOL is_file);

extern GDI_RESULT gdi_image_ab2_draw_to_buf_decode_mode(
    gdi_image_ab2_img_buf_struct *dst_buf,
    S32 offset_x, 
    S32 offset_y, 
    const U8 *data_ptr,
    gdi_image_ab2_decode_mode_enum decode_mode);

extern GDI_RESULT gdi_image_ab2_check_alpha_mem(const U8 *data_ptr, kal_bool *with_alpha);

extern GDI_RESULT gdi_image_ab2_check_alpha_file(const U16 *filename, kal_bool *with_alpha);
 
extern GDI_RESULT gdi_image_is_ab2_file(U8 *file_name);


#endif /* __GDI_IMAGE_ALPHA_BMP_H__ */


