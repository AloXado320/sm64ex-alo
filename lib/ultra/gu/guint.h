/**************************************************************************
 *                                      *
 *         Copyright (C) 1994, Silicon Graphics, Inc.          *
 *                                      *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright law.  They  may  not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *                                      *
 **************************************************************************/

#include "PR/mbi.h"
#include "PR/gu.h"
#include "PR/os_version.h"

typedef union
{
    struct
    {
        unsigned int hi;
        unsigned int lo;
    } word;

    double    d;
} du;

typedef union
{
    unsigned int    i;
    float            f;
} fu;

#ifndef __GL_GL_H__

typedef    float    Matrix[4][4];

#endif

#define ROUND(d)    (int)(((d) >= 0.0) ? ((d) + 0.5) : ((d) - 0.5))
#ifndef ABS
#define    ABS(d)        ((d) > 0) ? (d) : -(d)
#endif

extern const fu   __libm_qnan;
