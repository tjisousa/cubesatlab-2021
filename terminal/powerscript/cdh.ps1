while($true) {
    Write-Host “Getting CDH telemetry every second”
    csp idset 8
    ft download 3 3 0 1 -out tiago-cdh.dat
    parser tiago-cdh.dat 3_FCGeneralTelemetry.c tiago-cdh-output.csv
    Start-Sleep -Seconds 1  
}