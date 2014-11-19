/******************************************************************************
 ** File Name:      driver_export.h                                                *
 ** Author:         Benjamin.Wang                                             *
 ** DATE:           29/11/2004                                                *
 ** Copyright:      2003 Spreatrum, Incoporated. All Rights Reserved.         *
 ** Description:    This file defines the prototypes of driver_export.c .                                *
 ******************************************************************************

 ******************************************************************************
 **                        Edit History                                       *
 ** ------------------------------------------------------------------------- *
 ** DATE           NAME             DESCRIPTION                               *
 ** 29/11/2004     Benjamin.Wang     Create.                                  *
 ******************************************************************************/

#ifndef _DRIVER_EXPORT_H
#define _DRIVER_EXPORT_H

/**---------------------------------------------------------------------------*
 **                         Dependencies                                      *
 **---------------------------------------------------------------------------*/
#include "tb_drv.h"
#include "iram_mgr.h"

#ifdef __cplusplus
extern   "C"
{
#endif

/**---------------------------------------------------------------------------*
 **                         MACRO Definations                                     *
 **---------------------------------------------------------------------------*/

/**---------------------------------------------------------------------------*
 **                         Data Structures                                   *
 **---------------------------------------------------------------------------*/


/**---------------------------------------------------------------------------*
 **                         Global Variables                                  *
 **---------------------------------------------------------------------------*/

/**---------------------------------------------------------------------------*
 **                         Constant Variables                                *
 **---------------------------------------------------------------------------*/

/**---------------------------------------------------------------------------*
 **                         Function Prototypes                               *
 **---------------------------------------------------------------------------*/

/*****************************************************************************/
//  Description:    Get IRAM information used by ARM
//  Global resource dependence:
//  Author:
//  Note:           return num by input param and return the const array pointer
/*****************************************************************************/
IRAM_AREA *GetIRAMSet (uint32 *count);

#ifdef __cplusplus
}
#endif

#endif  // _DRIVER_EXPORT_H
