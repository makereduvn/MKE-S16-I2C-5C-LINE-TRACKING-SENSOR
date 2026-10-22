
#pragma once

#ifndef MKE_I2C_5C_LineTracking_H
#define MKE_I2C_5C_LineTracking_H

#include "kxnTask.h"
#include <Wire.h>
#include <Arduino.h>

#define MKE_I2C_5C_LINE_TRACKING_ADDRESS 0x2A
#define MKE_I2C_5C_LINE_TRACKING_BUFFER_SIZE 11

CREATE_TASK(MKE_I2C_5C_LineTracking)

void setup(uint8_t paAddress = MKE_I2C_5C_LINE_TRACKING_ADDRESS,
           uint8_t paCountSensor = 5);

void setBlack()
{
    isBlack = 1;
}

void setWhite()
{
    isBlack = 0;
}

void loop();
void getData();
uint8_t getValue(uint8_t index);
uint8_t getValue();
uint8_t getRawValue(uint8_t index);
uint8_t getThresHoldValue(uint8_t index);
void setI2C_Address(uint8_t paAdd);

private:
uint8_t readValue[MKE_I2C_5C_LINE_TRACKING_BUFFER_SIZE] = {0};
uint8_t countSensor;
uint8_t address;
uint8_t isBlack;

END

#endif
