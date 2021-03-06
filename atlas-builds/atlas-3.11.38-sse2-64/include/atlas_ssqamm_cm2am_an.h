#ifndef ATLAS_SAMM_cm2am_an_H
   #define ATLAS_SAMM_cm2am_an_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 48
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 48
#endif
/*
 * mat2blk prototypes
 */
void ATL_scm2am_an_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_scm2am_an_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_scm2am_an_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_scm2am_an_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_scm2am_an_8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_8
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_scm2am_an_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_scm2am_an_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_scm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);
void ATL_srm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*);

static const cm2am_t ATL_AMM_A2BLK_an[48] =
{
   ATL_scm2am_an_4x4,  /* index 0 */
   ATL_scm2am_an_4x4,  /* index 1 */
   ATL_scm2am_an_12,  /* index 2 */
   ATL_scm2am_an_4x4,  /* index 3 */
   ATL_scm2am_an_8,  /* index 4 */
   ATL_scm2am_an_4x4,  /* index 5 */
   ATL_scm2am_an_32,  /* index 6 */
   ATL_scm2am_an_4x4,  /* index 7 */
   ATL_scm2am_an_4x4,  /* index 8 */
   ATL_scm2am_an_4x4,  /* index 9 */
   ATL_scm2am_an_4x4,  /* index 10 */
   ATL_scm2am_an_4x4,  /* index 11 */
   ATL_scm2am_an_4x4,  /* index 12 */
   ATL_scm2am_an_4x4,  /* index 13 */
   ATL_scm2am_an_4x4,  /* index 14 */
   ATL_scm2am_an_4x4,  /* index 15 */
   ATL_scm2am_an_4x4,  /* index 16 */
   ATL_scm2am_an_4x4,  /* index 17 */
   ATL_scm2am_an_4x4,  /* index 18 */
   ATL_scm2am_an_4x4,  /* index 19 */
   ATL_scm2am_an_4x4,  /* index 20 */
   ATL_scm2am_an_4x4,  /* index 21 */
   ATL_scm2am_an_4x4,  /* index 22 */
   ATL_scm2am_an_4x4,  /* index 23 */
   ATL_scm2am_an_4x4,  /* index 24 */
   ATL_scm2am_an_4x4,  /* index 25 */
   ATL_scm2am_an_4x4,  /* index 26 */
   ATL_scm2am_an_4x4,  /* index 27 */
   ATL_scm2am_an_4x4,  /* index 28 */
   ATL_scm2am_an_4x4,  /* index 29 */
   ATL_scm2am_an_4x4,  /* index 30 */
   ATL_scm2am_an_4x4,  /* index 31 */
   ATL_scm2am_an_4x4,  /* index 32 */
   ATL_scm2am_an_4x4,  /* index 33 */
   ATL_scm2am_an_4x4,  /* index 34 */
   ATL_scm2am_an_4x4,  /* index 35 */
   ATL_scm2am_an_4x4,  /* index 36 */
   ATL_scm2am_an_4x4,  /* index 37 */
   ATL_scm2am_an_4x4,  /* index 38 */
   ATL_scm2am_an_4x4,  /* index 39 */
   ATL_scm2am_an_4x4,  /* index 40 */
   ATL_scm2am_an_4x4,  /* index 41 */
   ATL_scm2am_an_4x4,  /* index 42 */
   ATL_scm2am_an_4x4,  /* index 43 */
   ATL_scm2am_an_4x4,  /* index 44 */
   ATL_scm2am_an_4x4,  /* index 45 */
   ATL_scm2am_an_4x4,  /* index 46 */
   ATL_scm2am_an_4x4   /* index 47 */
};

static const cm2am_t ATL_AMM_AT2BLK_an[48] =
{
   ATL_srm2am_an_4x4,  /* index 0 */
   ATL_srm2am_an_4x4,  /* index 1 */
   ATL_srm2am_an_12,  /* index 2 */
   ATL_srm2am_an_4x4,  /* index 3 */
   ATL_srm2am_an_8,  /* index 4 */
   ATL_srm2am_an_4x4,  /* index 5 */
   ATL_srm2am_an_32,  /* index 6 */
   ATL_srm2am_an_4x4,  /* index 7 */
   ATL_srm2am_an_4x4,  /* index 8 */
   ATL_srm2am_an_4x4,  /* index 9 */
   ATL_srm2am_an_4x4,  /* index 10 */
   ATL_srm2am_an_4x4,  /* index 11 */
   ATL_srm2am_an_4x4,  /* index 12 */
   ATL_srm2am_an_4x4,  /* index 13 */
   ATL_srm2am_an_4x4,  /* index 14 */
   ATL_srm2am_an_4x4,  /* index 15 */
   ATL_srm2am_an_4x4,  /* index 16 */
   ATL_srm2am_an_4x4,  /* index 17 */
   ATL_srm2am_an_4x4,  /* index 18 */
   ATL_srm2am_an_4x4,  /* index 19 */
   ATL_srm2am_an_4x4,  /* index 20 */
   ATL_srm2am_an_4x4,  /* index 21 */
   ATL_srm2am_an_4x4,  /* index 22 */
   ATL_srm2am_an_4x4,  /* index 23 */
   ATL_srm2am_an_4x4,  /* index 24 */
   ATL_srm2am_an_4x4,  /* index 25 */
   ATL_srm2am_an_4x4,  /* index 26 */
   ATL_srm2am_an_4x4,  /* index 27 */
   ATL_srm2am_an_4x4,  /* index 28 */
   ATL_srm2am_an_4x4,  /* index 29 */
   ATL_srm2am_an_4x4,  /* index 30 */
   ATL_srm2am_an_4x4,  /* index 31 */
   ATL_srm2am_an_4x4,  /* index 32 */
   ATL_srm2am_an_4x4,  /* index 33 */
   ATL_srm2am_an_4x4,  /* index 34 */
   ATL_srm2am_an_4x4,  /* index 35 */
   ATL_srm2am_an_4x4,  /* index 36 */
   ATL_srm2am_an_4x4,  /* index 37 */
   ATL_srm2am_an_4x4,  /* index 38 */
   ATL_srm2am_an_4x4,  /* index 39 */
   ATL_srm2am_an_4x4,  /* index 40 */
   ATL_srm2am_an_4x4,  /* index 41 */
   ATL_srm2am_an_4x4,  /* index 42 */
   ATL_srm2am_an_4x4,  /* index 43 */
   ATL_srm2am_an_4x4,  /* index 44 */
   ATL_srm2am_an_4x4,  /* index 45 */
   ATL_srm2am_an_4x4,  /* index 46 */
   ATL_srm2am_an_4x4   /* index 47 */
};

static const cm2am_t ATL_AMM_B2BLK_an[48] =
{
   ATL_scm2am_an_4x2,  /* index 0 */
   ATL_scm2am_an_4x2,  /* index 1 */
   ATL_scm2am_an_3,  /* index 2 */
   ATL_scm2am_an_4x2,  /* index 3 */
   ATL_scm2am_an_4,  /* index 4 */
   ATL_scm2am_an_4x2,  /* index 5 */
   ATL_scm2am_an_1,  /* index 6 */
   ATL_scm2am_an_4x2,  /* index 7 */
   ATL_scm2am_an_4x2,  /* index 8 */
   ATL_scm2am_an_4x2,  /* index 9 */
   ATL_scm2am_an_4x2,  /* index 10 */
   ATL_scm2am_an_4x2,  /* index 11 */
   ATL_scm2am_an_4x2,  /* index 12 */
   ATL_scm2am_an_4x2,  /* index 13 */
   ATL_scm2am_an_4x2,  /* index 14 */
   ATL_scm2am_an_4x2,  /* index 15 */
   ATL_scm2am_an_4x2,  /* index 16 */
   ATL_scm2am_an_4x2,  /* index 17 */
   ATL_scm2am_an_4x2,  /* index 18 */
   ATL_scm2am_an_4x2,  /* index 19 */
   ATL_scm2am_an_4x2,  /* index 20 */
   ATL_scm2am_an_4x2,  /* index 21 */
   ATL_scm2am_an_4x2,  /* index 22 */
   ATL_scm2am_an_4x2,  /* index 23 */
   ATL_scm2am_an_4x2,  /* index 24 */
   ATL_scm2am_an_4x2,  /* index 25 */
   ATL_scm2am_an_4x2,  /* index 26 */
   ATL_scm2am_an_4x2,  /* index 27 */
   ATL_scm2am_an_4x2,  /* index 28 */
   ATL_scm2am_an_4x2,  /* index 29 */
   ATL_scm2am_an_4x2,  /* index 30 */
   ATL_scm2am_an_4x2,  /* index 31 */
   ATL_scm2am_an_4x2,  /* index 32 */
   ATL_scm2am_an_4x2,  /* index 33 */
   ATL_scm2am_an_4x2,  /* index 34 */
   ATL_scm2am_an_4x2,  /* index 35 */
   ATL_scm2am_an_4x2,  /* index 36 */
   ATL_scm2am_an_4x2,  /* index 37 */
   ATL_scm2am_an_4x2,  /* index 38 */
   ATL_scm2am_an_4x2,  /* index 39 */
   ATL_scm2am_an_4x2,  /* index 40 */
   ATL_scm2am_an_4x2,  /* index 41 */
   ATL_scm2am_an_4x2,  /* index 42 */
   ATL_scm2am_an_4x2,  /* index 43 */
   ATL_scm2am_an_4x2,  /* index 44 */
   ATL_scm2am_an_4x2,  /* index 45 */
   ATL_scm2am_an_4x2,  /* index 46 */
   ATL_scm2am_an_4x2   /* index 47 */
};

static const cm2am_t ATL_AMM_BT2BLK_an[48] =
{
   ATL_srm2am_an_4x2,  /* index 0 */
   ATL_srm2am_an_4x2,  /* index 1 */
   ATL_srm2am_an_3,  /* index 2 */
   ATL_srm2am_an_4x2,  /* index 3 */
   ATL_srm2am_an_4,  /* index 4 */
   ATL_srm2am_an_4x2,  /* index 5 */
   ATL_srm2am_an_1,  /* index 6 */
   ATL_srm2am_an_4x2,  /* index 7 */
   ATL_srm2am_an_4x2,  /* index 8 */
   ATL_srm2am_an_4x2,  /* index 9 */
   ATL_srm2am_an_4x2,  /* index 10 */
   ATL_srm2am_an_4x2,  /* index 11 */
   ATL_srm2am_an_4x2,  /* index 12 */
   ATL_srm2am_an_4x2,  /* index 13 */
   ATL_srm2am_an_4x2,  /* index 14 */
   ATL_srm2am_an_4x2,  /* index 15 */
   ATL_srm2am_an_4x2,  /* index 16 */
   ATL_srm2am_an_4x2,  /* index 17 */
   ATL_srm2am_an_4x2,  /* index 18 */
   ATL_srm2am_an_4x2,  /* index 19 */
   ATL_srm2am_an_4x2,  /* index 20 */
   ATL_srm2am_an_4x2,  /* index 21 */
   ATL_srm2am_an_4x2,  /* index 22 */
   ATL_srm2am_an_4x2,  /* index 23 */
   ATL_srm2am_an_4x2,  /* index 24 */
   ATL_srm2am_an_4x2,  /* index 25 */
   ATL_srm2am_an_4x2,  /* index 26 */
   ATL_srm2am_an_4x2,  /* index 27 */
   ATL_srm2am_an_4x2,  /* index 28 */
   ATL_srm2am_an_4x2,  /* index 29 */
   ATL_srm2am_an_4x2,  /* index 30 */
   ATL_srm2am_an_4x2,  /* index 31 */
   ATL_srm2am_an_4x2,  /* index 32 */
   ATL_srm2am_an_4x2,  /* index 33 */
   ATL_srm2am_an_4x2,  /* index 34 */
   ATL_srm2am_an_4x2,  /* index 35 */
   ATL_srm2am_an_4x2,  /* index 36 */
   ATL_srm2am_an_4x2,  /* index 37 */
   ATL_srm2am_an_4x2,  /* index 38 */
   ATL_srm2am_an_4x2,  /* index 39 */
   ATL_srm2am_an_4x2,  /* index 40 */
   ATL_srm2am_an_4x2,  /* index 41 */
   ATL_srm2am_an_4x2,  /* index 42 */
   ATL_srm2am_an_4x2,  /* index 43 */
   ATL_srm2am_an_4x2,  /* index 44 */
   ATL_srm2am_an_4x2,  /* index 45 */
   ATL_srm2am_an_4x2,  /* index 46 */
   ATL_srm2am_an_4x2   /* index 47 */
};


#endif  /* end include file guard */
