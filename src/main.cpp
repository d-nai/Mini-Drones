/* Código principal */
#include "Drones/Comunicacion/comunicaciones.h"
#include "Drones/GestionErrores/errores.h"
#include "Drones/Motores/motores.h"
#include "Drones/Sensores/sensores.h"
#include <Arduino.h>
#include <Wire.h>

#define pinHelice1 3
#define pinHelice2 4
#define pinHelice3 5
#define pinHelice4 6



void setup(){
    Serial.begin(115200);

    iniciarMPU();
    iniciarMotores(pinHelice1, pinHelice2, pinHelice3, pinHelice4);
}

void loop(){
    leerMPU();
}