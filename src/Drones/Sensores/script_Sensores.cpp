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

void leerMPU(){
    sensors_event_t a,g, temp;
    mpu.getEvent(&a,&g,&temp);

    Serial.print("Acceleration X: ");
    Serial.print(a.acceleration.x);
    Serial.print(", Y: ");
    Serial.print(a.acceleration.y);
    Serial.print(", Z: ");
    Serial.print(a.acceleration.z);
    Serial.println(" m/s^2");

    Serial.print("Rotation X: ");
    Serial.print(g.gyro.x);
    Serial.print(", Y: ");
    Serial.print(g.gyro.y);
    Serial.print(", Z: ");
    Serial.print(g.gyro.z);
    Serial.println(" rad/s");
}