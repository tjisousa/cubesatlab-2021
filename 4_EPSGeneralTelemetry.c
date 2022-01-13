struct EPSGeneralTelemetry {
	double timestamp; 
	uint32_t uptimeInS; 
	uint32_t gs_wdt_time_left_s; 
	uint32_t counter_wdt_gs; 
	uint16_t mpptConverterVoltage[4]; 
	uint16_t curSolarPanels[8]; 
	uint16_t vBatt; 
	uint16_t curSolar; 
	uint16_t curBattIn; 
	uint16_t curBattOut; 
	uint16_t curOutput[18]; 
	uint16_t AOcurOutput[2]; 
	uint16_t outputConverterVoltage[8]; 
	uint8_t outputConverterState; 
	uint32_t outputStatus; 
	uint32_t outputFaultStatus; 
	uint16_t outputOnDelta[18]; 
	uint16_t outputOffDelta[18]; 
	uint8_t outputFaultCnt[18]; 
	int8_t temp[14]; 
	uint8_t battState; 
	uint8_t mpptMode; 
	uint8_t batHeaterMode;
	uint8_t batHeaterState;
};