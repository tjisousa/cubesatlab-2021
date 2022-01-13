while($true) {
    Write-Host “Getting COM telemetry every second”
    csp idset 8
    ft download 1 10 0 1 -out tiago-com.dat
    parser tiago-com.dat 1_COMMGeneralTelemetry.c tiago-com-output.csv
    Start-Sleep -Seconds 1  
}