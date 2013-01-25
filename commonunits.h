#ifndef COMMONUNITS_H
#define COMMONUNITS_H

#include <stdint.h>

enum SpeedUnits
{
    MPH = 0,
    FPS = 1,
    KPH = 2
};

enum TemperatureUnits
{
    Fahrenheit = 0,
    Celcius    = 1
};

enum SampleType
{
    SampleType_EngineTemperature,
    SampleType_RoadSpeed,
    SampleType_EngineRPM,
    SampleType_FuelTemperature,
    SampleType_MAF,
    SampleType_Throttle,
    SampleType_IdleBypassPosition,
    SampleType_TargetIdleRPM,
    SampleType_GearSelection,
    SampleType_MainVoltage,
    SampleType_LambdaTrim,
    SampleType_FuelMap,
    SampleType_FuelPumpRelay
};

typedef struct
{
    uint8_t roadSpeed;
    uint8_t airConLoad;
    uint16_t maf;
    uint16_t mafTrim;
    uint16_t throttle;
    uint8_t coolantTemp;
    uint8_t fuelTemp;
    uint8_t o2SensorReference;
    uint8_t mainRelay;
    uint8_t inertiaSwitch;
    uint8_t neutralSwitch;
    uint8_t heatedScreen;
    uint8_t diagnosticPlug;
    uint8_t tuneResistor;
    uint8_t o2LeftDutyCycle;
    uint8_t o2RightDutyCycle;

} SimulationInputValues;

#endif // COMMONUNITS_H
