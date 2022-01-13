get_daffodil_telemetry_data();
getCDHTelemetryVars;
getCOMTelemetryVars;

function get_daffodil_telemetry_data()
    fprintf('Getting CDH data...');
    system('C:\Users\Public\Documents\nanoMCS4.16\nanoMCS.exe -cfile cdh.ps1');
    fprintf('Getting COM data...');
    system('C:\Users\Public\Documents\nanoMCS4.16\nanoMCS.exe -cfile com.ps1');
end
