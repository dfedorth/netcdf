#!/bin/sh
# This shell script runs the GRIDSPEC make_topog tests.
# $Id: run_tests1.sh,v 1.1 2009/08/25 19:57:05 ed Exp $

set -e
echo ""
echo "*** Testing gridspec topog."

# echo "*** generating realistic topography..."
# ./make_topog --mosaic mosaic.nc --topog_type realistic \
#     --topog_file /archive/fms/mom4/input_data/OCCAM_p5degree.nc --topog_field TOPO \
#     --scale_factor -1 
# ./gs_make_topog --mosaic mosaic.nc --topog_type realistic \
#     --topog_file /archive/fms/mom4/input_data/OCCAM_p5degree.nc --topog_field TOPO \
#     --scale_factor -1 --grid_name gs_topog_grid
# ../../../../ncdump/ncdump topog.nc > topog.cdl
# ../../../../ncdump/ncdump -n topog gs_topog.nc > gs_topog.cdl
# #diff -w topog.cdl gs_topog.cdl 

echo "*** All gridspec topog tests passed!"
exit 0
