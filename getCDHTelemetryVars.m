%% Set up the Import Options and import the data
opts = delimitedTextImportOptions("NumVariables", 58);

% Specify range and delimiter
opts.DataLines = [2, Inf];
opts.Delimiter = ",";

% Specify column names and types
opts.VariableNames = ["timestamp", "uptimeInS", "bootCount", "lastResetCause", "templ4cuInDeciC", "sunSensorsIsPowerOn", "sunSensorsNum0fOvercurrentChecks", "sunSensorsNum0fOvercurrentsDetected", "gpsIsPowerOn", "gpsNum0fOvercurrentChecks", "gpsNum0fOvercurrentsDetected", "extTempAndMagneticSensorsIsPowerOn", "extTempAndMagneticSensorsNum0fOvercurrentChecks", "extTempAndMagneticSensorsNum0fOvercurrentsDetected", "mtqVoltageMV", "mtqCurrentMA", "sunSensorsCurrenthiA", "gpsCurrentMA", "extTempAndMagneticSensorsTempMA", "solarPanelTempl", "solarPanelTemp2", "solarPanelTemp3", "solarPanelTemp4", "solarPanelTemp5", "solarPanelTemp6", "Var26", "Var27", "Var28", "Var29", "Var30", "Var31", "Var32", "Var33", "Var34", "Var35", "Var36", "Var37", "Var38", "Var39", "Var40", "Var41", "Var42", "Var43", "Var44", "Var45", "Var46", "Var47", "Var48", "Var49", "Var50", "Var51", "Var52", "Var53", "Var54", "Var55", "Var56", "Var57", "Var58"];
opts.SelectedVariableNames = ["timestamp", "uptimeInS", "bootCount", "lastResetCause", "templ4cuInDeciC", "sunSensorsIsPowerOn", "sunSensorsNum0fOvercurrentChecks", "sunSensorsNum0fOvercurrentsDetected", "gpsIsPowerOn", "gpsNum0fOvercurrentChecks", "gpsNum0fOvercurrentsDetected", "extTempAndMagneticSensorsIsPowerOn", "extTempAndMagneticSensorsNum0fOvercurrentChecks", "extTempAndMagneticSensorsNum0fOvercurrentsDetected", "mtqVoltageMV", "mtqCurrentMA", "sunSensorsCurrenthiA", "gpsCurrentMA", "extTempAndMagneticSensorsTempMA", "solarPanelTempl", "solarPanelTemp2", "solarPanelTemp3", "solarPanelTemp4", "solarPanelTemp5", "solarPanelTemp6"];
opts.VariableTypes = ["double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string", "string"];

% Specify file level properties
opts.MissingRule = "omitvar";
opts.ExtraColumnsRule = "ignore";
opts.EmptyLineRule = "read";

% Specify variable properties
opts = setvaropts(opts, ["Var26", "Var27", "Var28", "Var29", "Var30", "Var31", "Var32", "Var33", "Var34", "Var35", "Var36", "Var37", "Var38", "Var39", "Var40", "Var41", "Var42", "Var43", "Var44", "Var45", "Var46", "Var47", "Var48", "Var49", "Var50", "Var51", "Var52", "Var53", "Var54", "Var55", "Var56", "Var57", "Var58"], "WhitespaceRule", "preserve");
opts = setvaropts(opts, ["Var26", "Var27", "Var28", "Var29", "Var30", "Var31", "Var32", "Var33", "Var34", "Var35", "Var36", "Var37", "Var38", "Var39", "Var40", "Var41", "Var42", "Var43", "Var44", "Var45", "Var46", "Var47", "Var48", "Var49", "Var50", "Var51", "Var52", "Var53", "Var54", "Var55", "Var56", "Var57", "Var58"], "EmptyFieldRule", "auto");

% Import the data
cdh = readtable("C:\Users\0170469501\Desktop\Cubesat-TemperatureTween\tiago-cdh-output.csv", opts);


%% Convert to output type
timestamp_cdh = cdh.timestamp;
uptimeInS = [timestamp_cdh cdh.uptimeInS];
templ4cuInDeciC = [timestamp_cdh cdh.templ4cuInDeciC];
sunSensorsIsPowerOn = [timestamp_cdh cdh.sunSensorsIsPowerOn];
extTempAndMagneticSensorsTempMA = [timestamp_cdh cdh.extTempAndMagneticSensorsTempMA];
solarPanelTempl = [timestamp_cdh cdh.solarPanelTempl];
solarPanelTemp2 = [timestamp_cdh cdh.solarPanelTemp2];
solarPanelTemp3 = [timestamp_cdh cdh.solarPanelTemp3];
solarPanelTemp4 = [timestamp_cdh cdh.solarPanelTemp4];
solarPanelTemp5 = [timestamp_cdh cdh.solarPanelTemp5];
solarPanelTemp6 = [timestamp_cdh cdh.solarPanelTemp6];
