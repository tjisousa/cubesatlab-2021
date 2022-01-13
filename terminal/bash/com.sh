#!/bin/bash
# A Bash script to get the COM telemetry, by Tiago De Jesus
for (( ; ; ))
do
   echo "Getting COM Telemetry"
   csp idset 8
   ft download 1 10 0 1 -out tiago-com.dat
   parser tiago-com.dat 1_COMMGeneralTelemetry.c tiago-com-output.csv
done