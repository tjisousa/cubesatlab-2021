#!/bin/bash
# A Bash script to get the CDH telemetry, by Tiago De Jesus
for (( ; ; ))
do
   echo "Getting CDH Telemetry"
   csp idset 8
   ft download 3 3 0 1 -out tiago-cdh.dat
   parser tiago-cdh.dat 3_FCGeneralTelemetry.c tiago-cdh-output.csv
done