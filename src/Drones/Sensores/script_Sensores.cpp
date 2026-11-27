/* Código aquí */
#include "sensores.h"
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_MPU6050.h>

#define SDA_PIN 8
#define SCL_PIN 9

Adafruit_MPU6050 mpu;

void iniciarMPU(){
    Wire.begin(SDA_PIN,SCL_PIN);

    if (!mpu.begin(0x68)){
        Serial.println("MPU6050 no encontrado");
        while (1);
    } else {
        Serial.println("MPU6050 encontrado");
    }
}
