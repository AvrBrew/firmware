/*
 * File:   OneWireSwitch.cpp
 * Author: Elco
 *
 * Created on 15 december 2014, 21:38
 */

#include "../inc/OneWireDevice.h"
#include "string.h" // for memcpy

/*
 * Initializes this OneWire slave.
 * /param oneWire The oneWire bus the device is connected to
 * /param address The oneWire address of the device to use.
 */
void OneWireDevice::init(OneWire *     oneWire,
                         DeviceAddress address)
{
    this -> oneWire = oneWire;

    memcpy(this -> address, address, sizeof(DeviceAddress));
}

DeviceAddress & OneWireDevice::getDeviceAddress()
{
    return address;
}

bool OneWireDevice::validAddress(OneWire *     oneWire,
                                 DeviceAddress deviceAddress)
{
    return deviceAddress[0] && (oneWire -> crc8(deviceAddress, 7) == deviceAddress[7]);
}

