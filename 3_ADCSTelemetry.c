
typedef struct _T_AdcsTelemetryUnnested {
  uint32_t Version;
  uint32_t VersionReserved;
  double UnixTime;

  double SunSensor_0_Vector[3];
  double SunSensor_0_Temperature;
  uint16_t SunSensor_0_DataValid;
  uint16_t SunSensor_0_TemperatureValid;
  uint32_t SunSensor_0_dT_Ms;
  double SunSensor_1_Vector[3];
  double SunSensor_1_Temperature;
  uint16_t SunSensor_1_DataValid;
  uint16_t SunSensor_1_TemperatureValid;
  uint32_t SunSensor_1_dT_Ms;
  double SunSensor_2_Vector[3];
  double SunSensor_2_Temperature;
  uint16_t SunSensor_2_DataValid;
  uint16_t SunSensor_2_TemperatureValid;
  uint32_t SunSensor_2_dT_Ms;
  double SunSensor_3_Vector[3];
  double SunSensor_3_Temperature;
  uint16_t SunSensor_3_DataValid;
  uint16_t SunSensor_3_TemperatureValid;
  uint32_t SunSensor_3_dT_Ms;
  double SunSensor_4_Vector[3];
  double SunSensor_4_Temperature;
  uint16_t SunSensor_4_DataValid;
  uint16_t SunSensor_4_TemperatureValid;
  uint32_t SunSensor_4_dT_Ms;
  double SunSensor_5_Vector[3];
  double SunSensor_5_Temperature;
  uint16_t SunSensor_5_DataValid;
  uint16_t SunSensor_5_TemperatureValid;
  uint32_t SunSensor_5_dT_Ms;
  double SunVector_United_Vector[3];
  double SunVector_United_Temperature;
  uint16_t SunSensor_United_DataValid;
  uint16_t SunSensor_United_TemperatureValid;
  uint32_t SunSensor_United_dT_Ms;
  double MField_0_Vector[3];
  double MField_0_Temperature;
  uint16_t MField_0_DataValid;
  uint16_t MField_0_TemperatureValid;
  uint32_t MField_0_dT_Ms;
  double MField_1_Vector[3];
  double MField_1_Temperature;
  uint16_t MField_1_DataValid;
  uint16_t MField_1_TemperatureValid;
  uint32_t MField_1_dT_Ms;
  double MField_2_Vector[3];
  double MField_2_Temperature;
  uint16_t MField_2_DataValid;
  uint16_t MField_2_TemperatureValid;
  uint32_t MField_2_dT_Ms;
  double MField_United_Vector[3];
  double MField_United_Temperature;
  uint16_t MField_United_DataValid;
  uint16_t MField_United_TemperatureValid;
  uint32_t MField_United_dT_Ms;
  double Gyro_0_Vector[3];
  double Gyro_0_Temperature;
  uint16_t Gyro_0_DataValid;
  uint16_t Gyro_0_TemperatureValid;
  uint32_t Gyro_0_dT_Ms;
  double Gyro_1_Vector[3];
  double Gyro_1_Temperature;
  uint16_t Gyro_1_DataValid;
  uint16_t Gyro_1_TemperatureValid;
  uint32_t Gyro_1_dT_Ms;
  double Gyro_2_Vector[3];
  double Gyro_2_Temperature;
  uint16_t Gyro_2_DataValid;
  uint16_t Gyro_2_TemperatureValid;
  uint32_t Gyro_2_dT_Ms;
  double Gyro_IMU_Vector[3];
  double Gyro_IMU_Temperature;
  uint16_t Gyro_IMU_DataValid;
  uint16_t Gyro_IMU_TemperatureValid;
  uint32_t Gyro_IMU_dT_Ms;
  double Gyro_United_Vector[3];
  double Gyro_United_Temperature;
  uint16_t Gyro_United_DataValid;
  uint16_t Gyro_United_TemperatureValid;
  uint32_t Gyro_United_dT_Ms;
  double Acc_IMU_Vector[3];
  double Acc_IMU_Temperature;
  uint16_t Acc_IMU_DataValid;
  uint16_t Acc_IMU_TemperatureValid;
  uint32_t Acc_IMU_dT_Ms;

  double RWs_Speed[4];
  uint16_t RWs_DataValid;
  uint16_t Rws_Reserved;
  uint32_t RWs_dT_Ms;

  std::uint8_t RW0_lastResetStatus;
  std::int32_t RW0_mcuTemperature;
  float RW0_pressureSensorTemperature;
  float RW0_pressure;
  std::uint8_t RW0_rwState;
  std::uint8_t RW0_rwClcMode;
  std::int32_t RW0_rwCurrSpeed;
  std::int32_t RW0_rwRefSpeed;
  /* Bin API */
  std::uint32_t RW0_numOfInvalidCrcPackets;
  std::uint32_t RW0_numOfInvalidLenPackets;
  std::uint32_t RW0_numOfInvalidCmdPackets;
  std::uint32_t RW0_numOfCmdExecutedRequests;
  std::uint32_t RW0_numOfCmdReplies;
  /* UART */
  /* Byte counters */
  std::uint32_t RW0_uartNumOfBytesWritten;
  std::uint32_t RW0_uartNumOfBytesRead;
  /* Errors */
  std::uint32_t RW0_uartNumOfParityErrors;
  std::uint32_t RW0_uartNumOfNoiseErrors;
  std::uint32_t RW0_uartNumOfFrameErrors;
  std::uint32_t RW0_uartNumOfRegisterOverrunErrors;
  std::uint32_t RW0_uartTotalNumOfErrors;
  /* SPI */
  /* Byte counters */
  std::uint32_t RW0_spiNumOfBytesWritten;
  std::uint32_t RW0_spiNumOfBytesRead;
  /* Errors */
  std::uint32_t RW0_spiNumOfRegisterOverrunErrors;
  std::uint32_t RW0_spiTotalNumOfErrors;
  std::uint8_t Reserved0;//byte allignment	

  std::uint8_t RW1_lastResetStatus;
  std::int32_t RW1_mcuTemperature;
  float RW1_pressureSensorTemperature;
  float RW1_pressure;
  std::uint8_t RW1_rwState;
  std::uint8_t RW1_rwClcMode;
  std::int32_t RW1_rwCurrSpeed;
  std::int32_t RW1_rwRefSpeed;
  /* Bin API */
  std::uint32_t RW1_numOfInvalidCrcPackets;
  std::uint32_t RW1_numOfInvalidLenPackets;
  std::uint32_t RW1_numOfInvalidCmdPackets;
  std::uint32_t RW1_numOfCmdExecutedRequests;
  std::uint32_t RW1_numOfCmdReplies;
  /* UART */
  /* Byte counters */
  std::uint32_t RW1_uartNumOfBytesWritten;
  std::uint32_t RW1_uartNumOfBytesRead;
  /* Errors */
  std::uint32_t RW1_uartNumOfParityErrors;
  std::uint32_t RW1_uartNumOfNoiseErrors;
  std::uint32_t RW1_uartNumOfFrameErrors;
  std::uint32_t RW1_uartNumOfRegisterOverrunErrors;
  std::uint32_t RW1_uartTotalNumOfErrors;
  /* SPI */
  /* Byte counters */
  std::uint32_t RW1_spiNumOfBytesWritten;
  std::uint32_t RW1_spiNumOfBytesRead;
  /* Errors */
  std::uint32_t RW1_spiNumOfRegisterOverrunErrors;
  std::uint32_t RW1_spiTotalNumOfErrors;
  std::uint8_t Reserved1;//byte allignment	


  std::uint8_t RW2_lastResetStatus;
  std::int32_t RW2_mcuTemperature;
  float RW2_pressureSensorTemperature;
  float RW2_pressure;
  std::uint8_t RW2_rwState;
  std::uint8_t RW2_rwClcMode;
  std::int32_t RW2_rwCurrSpeed;
  std::int32_t RW2_rwRefSpeed;
  /* Bin API */
  std::uint32_t RW2_numOfInvalidCrcPackets;
  std::uint32_t RW2_numOfInvalidLenPackets;
  std::uint32_t RW2_numOfInvalidCmdPackets;
  std::uint32_t RW2_numOfCmdExecutedRequests;
  std::uint32_t RW2_numOfCmdReplies;
  /* UART */
  /* Byte counters */
  std::uint32_t RW2_uartNumOfBytesWritten;
  std::uint32_t RW2_uartNumOfBytesRead;
  /* Errors */
  std::uint32_t RW2_uartNumOfParityErrors;
  std::uint32_t RW2_uartNumOfNoiseErrors;
  std::uint32_t RW2_uartNumOfFrameErrors;
  std::uint32_t RW2_uartNumOfRegisterOverrunErrors;
  std::uint32_t RW2_uartTotalNumOfErrors;
  /* SPI */
  /* Byte counters */
  std::uint32_t RW2_spiNumOfBytesWritten;
  std::uint32_t RW2_spiNumOfBytesRead;
  /* Errors */
  std::uint32_t RW2_spiNumOfRegisterOverrunErrors;
  std::uint32_t RW2_spiTotalNumOfErrors;
  std::uint8_t Reserved2;//byte allignment	



  std::uint8_t RW3_lastResetStatus;
  std::int32_t RW3_mcuTemperature;
  float RW3_pressureSensorTemperature;
  float RW3_pressure;
  std::uint8_t RW3_rwState;
  std::uint8_t RW3_rwClcMode;
  std::int32_t RW3_rwCurrSpeed;
  std::int32_t RW3_rwRefSpeed;
  /* Bin API */
  std::uint32_t RW3_numOfInvalidCrcPackets;
  std::uint32_t RW3_numOfInvalidLenPackets;
  std::uint32_t RW3_numOfInvalidCmdPackets;
  std::uint32_t RW3_numOfCmdExecutedRequests;
  std::uint32_t RW3_numOfCmdReplies;
  /* UART */
  /* Byte counters */
  std::uint32_t RW3_uartNumOfBytesWritten;
  std::uint32_t RW3_uartNumOfBytesRead;
  /* Errors */
  std::uint32_t RW3_uartNumOfParityErrors;
  std::uint32_t RW3_uartNumOfNoiseErrors;
  std::uint32_t RW3_uartNumOfFrameErrors;
  std::uint32_t RW3_uartNumOfRegisterOverrunErrors;
  std::uint32_t RW3_uartTotalNumOfErrors;
  /* SPI */
  /* Byte counters */
  std::uint32_t RW3_spiNumOfBytesWritten;
  std::uint32_t RW3_spiNumOfBytesRead;
  /* Errors */
  std::uint32_t RW3_spiNumOfRegisterOverrunErrors;
  std::uint32_t RW3_spiTotalNumOfErrors;
  std::uint8_t Reserved3;//byte allignment	

  double GPS_Meas_UnixTime;
  double GPS_Meas_ro_m[3];
  double GPS_Meas_vo_ms[3];

  double SatelitePosition_UnixTime;
  double SatelitePosition_ro_m[3];
  double SatelitePosition_vo_ms[3];

  std::uint32_t AttitudeDeterminationTypeRequested; 
  std::uint32_t AttitudeDeterminationTypeSelected;;
  double SateliteAttitude_Quat_SatBCF_In_ECI[4];
  double SateliteAttitude_w_BCF[3];
  double SateliteAttitude_SensorBias[18];

  std::uint32_t SatelliteControl_ADCS_State; 
  std::uint32_t SatelliteControl_ADCS_PointingMode;
  std::uint32_t SatelliteControl_ADCSExactPointing_TargetType;
  std::uint32_t SatelliteControl_Reserved1;
  double SatelliteControl_Magnetorquers_Activation[3];
  double SatelliteControl_ReactionWheels_VelocityDemand_RadSec[4];
  double SatelliteControl_TargetQuat[4];
  double ControlErrorDeg;
  double ControlErrorLpfDeg;
  uint32_t ControlErrorThresholdSurpassedCount;
  uint32_t SatelliteControl_Reserved2;

  double Debug[9];
  uint32_t EndMarker;
  uint32_t Allign;
} T_AdcsTelemetryUnnested;

