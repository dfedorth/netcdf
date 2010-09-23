/*********************************************************************
 *   Copyright 2010, University Corporation for Atmospheric Research
 *   See netcdf/README file for copying and redistribution conditions.
 *   "$Id: ncgiter.h,v 1.4 2010/02/01 21:44:04 russ Exp $"
 *********************************************************************/

#ifndef _NCGITER_
#define _NCGITER_

#include <netcdf.h>

#if defined(__cplusplus)
extern "C" {
#endif

/* node in stack of group ids */
typedef struct grpnode {
    int grpid;
    struct grpnode *next;
} grpnode_t;

/* 
 * The opaque structure to hold state of iteration over groups.
 * (Just implemented as a stack of group ids.)
 */
typedef struct {
    int ngrps;			/* number of groups left to visit */
    grpnode_t *top;		/* group ids left to visit */
} ncgiter_t;

/*
 * The Interface
 */

/* 
 * Get group iterator for start group ncid and all its descendant groups.
 */
extern int
nc_get_giter(int ncid, ncgiter_t **iterp);

/* 
 * Get group id of next group.  On first call returns start group,
 * subsequently returns other subgroup ids in preorder.  Returns grpid
 * of 0 (never an actual group number) when no more groups.
 */
extern int
nc_next_giter(ncgiter_t *iterp, int *grpid);

/*
 * Release memory allocated for group iterator.
 */
void
nc_rel_giter(ncgiter_t *iterp);

#if defined(__cplusplus)
}
#endif

#endif /* _NCGITER_ */
