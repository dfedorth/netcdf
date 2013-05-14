#!/bin/sh
# This shell script runs the GRIDSPEC make_vgrid tests.
# $Id: run_tests.sh,v 1.2 2009/08/25 19:57:05 ed Exp $

set -e
echo ""
echo "*** Testing gridspec vgrids."

echo "*** generating regular lon-lat grid (supergrid size 60x20)..."
./make_vgrid --nbnds 3 --bnds 10,200,1000 --nz 10,20
./gs_make_vgrid --nbnds 3 --bnds 10,200,1000 --nz 10,20 --grid_name gs_vertical_grid
../../../../ncdump/ncdump vertical_grid.nc > vertical_grid.cdl
../../../../ncdump/ncdump -n vertical_grid gs_vertical_grid.nc > gs_vertical_grid.cdl
#diff -w vertical_grid.cdl gs_vertical_grid.cdl 

echo "*** All gridspec vgrid tests passed!"
exit 0
