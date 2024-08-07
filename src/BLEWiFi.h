#ifndef BLEWIFI_H
#define BLEWIFI_H

#include <BLEDevice.h>
#include <BLEServer.h>
#include <WiFi.h>

#define SERVICE_UUID        "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"

class MyServerCallbacks : public BLEServerCallbacks {
  void onConnect(BLEServer* pServer);
  void onDisconnect(BLEServer* pServer);
};

class MyCallbacks : public BLECharacteristicCallbacks {
  void onWrite(BLECharacteristic *pCharacteristic);
};

extern BLECharacteristic *pCharacteristic;
extern bool deviceConnected;
extern bool newData;
extern String receivedData;

void setupBLE();
bool setupWiFi();



#endif // !BLEWIFI_H


