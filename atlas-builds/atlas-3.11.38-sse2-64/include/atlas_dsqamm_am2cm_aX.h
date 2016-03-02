#ifndef ATLAS_DAMM_am2cm_aX_H
   #define ATLAS_DAMM_am2cm_aX_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 22
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 22
#endif
/*
 * mat2blk prototypes
 */
void ATL_dam2cm_aX_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_6
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_2x8
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_2x1
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_10
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_10
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_2x12
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_20
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_22
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2cm_aX_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);
void ATL_dam2rm_aX_28
   (ATL_CSZT,ATL_CSZT,const SCALAR,TYPE*,ATL_CSZT,const TYPE*);

static const am2cm_t ATL_AMM_BLK2A_aX[22] =
{
   ATL_dam2cm_aX_4,  /* index 0 */
   ATL_dam2cm_aX_6,  /* index 1 */
   ATL_dam2cm_aX_2x8,  /* index 2 */
   ATL_dam2cm_aX_10,  /* index 3 */
   ATL_dam2cm_aX_2x12,  /* index 4 */
   ATL_dam2cm_aX_20,  /* index 5 */
   ATL_dam2cm_aX_22,  /* index 6 */
   ATL_dam2cm_aX_28,  /* index 7 */
   ATL_dam2cm_aX_2x8,  /* index 8 */
   ATL_dam2cm_aX_2x12,  /* index 9 */
   ATL_dam2cm_aX_2x12,  /* index 10 */
   ATL_dam2cm_aX_2x12,  /* index 11 */
   ATL_dam2cm_aX_2x12,  /* index 12 */
   ATL_dam2cm_aX_2x12,  /* index 13 */
   ATL_dam2cm_aX_2x12,  /* index 14 */
   ATL_dam2cm_aX_2x12,  /* index 15 */
   ATL_dam2cm_aX_2x12,  /* index 16 */
   ATL_dam2cm_aX_2x12,  /* index 17 */
   ATL_dam2cm_aX_2x12,  /* index 18 */
   ATL_dam2cm_aX_2x12,  /* index 19 */
   ATL_dam2cm_aX_2x12,  /* index 20 */
   ATL_dam2cm_aX_2x12   /* index 21 */
};

static const am2cm_t ATL_AMM_BLK2AT_aX[22] =
{
   ATL_dam2rm_aX_4,  /* index 0 */
   ATL_dam2rm_aX_6,  /* index 1 */
   ATL_dam2rm_aX_2x8,  /* index 2 */
   ATL_dam2rm_aX_10,  /* index 3 */
   ATL_dam2rm_aX_2x12,  /* index 4 */
   ATL_dam2rm_aX_20,  /* index 5 */
   ATL_dam2rm_aX_22,  /* index 6 */
   ATL_dam2rm_aX_28,  /* index 7 */
   ATL_dam2rm_aX_2x8,  /* index 8 */
   ATL_dam2rm_aX_2x12,  /* index 9 */
   ATL_dam2rm_aX_2x12,  /* index 10 */
   ATL_dam2rm_aX_2x12,  /* index 11 */
   ATL_dam2rm_aX_2x12,  /* index 12 */
   ATL_dam2rm_aX_2x12,  /* index 13 */
   ATL_dam2rm_aX_2x12,  /* index 14 */
   ATL_dam2rm_aX_2x12,  /* index 15 */
   ATL_dam2rm_aX_2x12,  /* index 16 */
   ATL_dam2rm_aX_2x12,  /* index 17 */
   ATL_dam2rm_aX_2x12,  /* index 18 */
   ATL_dam2rm_aX_2x12,  /* index 19 */
   ATL_dam2rm_aX_2x12,  /* index 20 */
   ATL_dam2rm_aX_2x12   /* index 21 */
};

static const am2cm_t ATL_AMM_BLK2B_aX[22] =
{
   ATL_dam2cm_aX_1,  /* index 0 */
   ATL_dam2cm_aX_1,  /* index 1 */
   ATL_dam2cm_aX_2x1,  /* index 2 */
   ATL_dam2cm_aX_1,  /* index 3 */
   ATL_dam2cm_aX_2x1,  /* index 4 */
   ATL_dam2cm_aX_1,  /* index 5 */
   ATL_dam2cm_aX_1,  /* index 6 */
   ATL_dam2cm_aX_1,  /* index 7 */
   ATL_dam2cm_aX_2x1,  /* index 8 */
   ATL_dam2cm_aX_2x1,  /* index 9 */
   ATL_dam2cm_aX_2x1,  /* index 10 */
   ATL_dam2cm_aX_2x1,  /* index 11 */
   ATL_dam2cm_aX_2x1,  /* index 12 */
   ATL_dam2cm_aX_2x1,  /* index 13 */
   ATL_dam2cm_aX_2x1,  /* index 14 */
   ATL_dam2cm_aX_2x1,  /* index 15 */
   ATL_dam2cm_aX_2x1,  /* index 16 */
   ATL_dam2cm_aX_2x1,  /* index 17 */
   ATL_dam2cm_aX_2x1,  /* index 18 */
   ATL_dam2cm_aX_2x1,  /* index 19 */
   ATL_dam2cm_aX_2x1,  /* index 20 */
   ATL_dam2cm_aX_2x1   /* index 21 */
};

static const am2cm_t ATL_AMM_BLK2BT_aX[22] =
{
   ATL_dam2rm_aX_1,  /* index 0 */
   ATL_dam2rm_aX_1,  /* index 1 */
   ATL_dam2rm_aX_2x1,  /* index 2 */
   ATL_dam2rm_aX_1,  /* index 3 */
   ATL_dam2rm_aX_2x1,  /* index 4 */
   ATL_dam2rm_aX_1,  /* index 5 */
   ATL_dam2rm_aX_1,  /* index 6 */
   ATL_dam2rm_aX_1,  /* index 7 */
   ATL_dam2rm_aX_2x1,  /* index 8 */
   ATL_dam2rm_aX_2x1,  /* index 9 */
   ATL_dam2rm_aX_2x1,  /* index 10 */
   ATL_dam2rm_aX_2x1,  /* index 11 */
   ATL_dam2rm_aX_2x1,  /* index 12 */
   ATL_dam2rm_aX_2x1,  /* index 13 */
   ATL_dam2rm_aX_2x1,  /* index 14 */
   ATL_dam2rm_aX_2x1,  /* index 15 */
   ATL_dam2rm_aX_2x1,  /* index 16 */
   ATL_dam2rm_aX_2x1,  /* index 17 */
   ATL_dam2rm_aX_2x1,  /* index 18 */
   ATL_dam2rm_aX_2x1,  /* index 19 */
   ATL_dam2rm_aX_2x1,  /* index 20 */
   ATL_dam2rm_aX_2x1   /* index 21 */
};


#endif  /* end include file guard */
