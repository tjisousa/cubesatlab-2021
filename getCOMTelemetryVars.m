%% Set up the Import Options and import the data
opts = delimitedTextImportOptions("NumVariables", 20);

% Specify range and delimiter
opts.DataLines = [2, Inf];
opts.Delimiter = ",";

% Specify column names and types
opts.VariableNames = ["timestamp", "uptimeInS", "powerAmplifierTemperature", "quartzTemperature"];
opts.VariableTypes = ["double", "double", "double", "double"];

% Specify file level properties
opts.ExtraColumnsRule = "ignore";
opts.EmptyLineRule = "read";

% Import the data
com = readtable("C:\Users\0170469501\Desktop\Cubesat-TemperatureTween\tiago-com-output.csv", opts);

%% Convert to output type
timestamp = com.timestamp;
uptimeInS = [timestamp com.uptimeInS];
powerAmplifierTemperature = [timestamp com.powerAmplifierTemperature];
quartzTemperature = [timestamp com.quartzTemperature];