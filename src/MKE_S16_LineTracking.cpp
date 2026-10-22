
#include "MKE_S16_LineTracking.h"

void MKE_I2C_5C_LineTracking::setup(uint8_t paAddress, uint8_t paCountSensor)
{
    countSensor = paCountSensor;
    address = paAddress;

    Wire.begin();
    kxnTaskManager.add(this);
    setState(KXN_TASK_STATE_START);
    setBlack();
}

void MKE_I2C_5C_LineTracking::loop()
{
    Wire.requestFrom(
        this->address,
        MKE_I2C_5C_LINE_TRACKING_BUFFER_SIZE
    );

    for (int i = 0; i < MKE_I2C_5C_LINE_TRACKING_BUFFER_SIZE; i++)
    {
        if (Wire.available())
        {
            readValue[i] = Wire.read();
        }
        else
        {
            readValue[i] = 0;
        }
    }

    if (!isBlack)
    {
        readValue[countSensor] =
            (readValue[countSensor] ^ 0b11111) & 0b11111;
    }

    kDelay(10);
}

void MKE_I2C_5C_LineTracking::getData()
{
    run(millis());
}

uint8_t MKE_I2C_5C_LineTracking::getValue()
{
    return readValue[countSensor];
}

uint8_t MKE_I2C_5C_LineTracking::getValue(uint8_t index)
{
    return (readValue[countSensor] >> index) & 0x01;
}

uint8_t MKE_I2C_5C_LineTracking::getRawValue(uint8_t index)
{
    return readValue[index];
}

uint8_t MKE_I2C_5C_LineTracking::getThresHoldValue(uint8_t index)
{
    return readValue[countSensor + index + 1];
}

void MKE_I2C_5C_LineTracking::setI2C_Address(uint8_t paAdd)
{
    if (paAdd >= 127)
    {
        return;
    }

    delay(5);

    Wire.beginTransmission(this->address);
    Wire.write(1);
    Wire.write(0);
    Wire.write(0);
    Wire.write(paAdd);
    Wire.endTransmission();

    this->address = paAdd;
    Wire.begin(paAdd);
}
