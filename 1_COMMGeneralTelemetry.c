struct COMMGeneralTelemetry {
    std::uint32_t timestamp = 0;
    std::uint32_t uptimeInS = 0;
    std::uint32_t bootCount = 0;
    std::uint32_t lastResetCause = 0;
    std::int32_t powerAmplifierTemperature = 0;
    std::int32_t quartzTemperature = 0;
    bool isTxOn = false;

    std::int32_t lastSyncRssi = 0;
    std::int32_t averageSyncRssi = 0;
    std::int32_t lastPacketRssi = 0;
    std::int32_t averagePacketRssi = 0;
    std::int32_t environmentRssi = 0;

    std::uint32_t txPacketCounter = 0;
    std::uint32_t txByteCounter = 0;
    std::uint32_t rxPacketCounter = 0;
    std::uint32_t rxByteCounter = 0;
    std::uint32_t badCrcCounter = 0;
    std::uint32_t beaconTxCounter = 0;

    std::uint32_t gsWdtTimeLeftInS = 0;
};
