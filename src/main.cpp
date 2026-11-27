/* Código principal */
#include "Drones/Comunicacion/comunicaciones.h"
#include "Drones/GestionErrores/errores.h"
#include "Drones/Motores/motores.h"
#include "Drones/Sensores/sensores.h"
#include <Arduino.h>
#include <Wire.h>

int pinHelice1; int pinHelice2; int pinHelice3; int pinHelice4;



void setup(){
    Serial.begin(115200);

    iniciarMPU();
    iniciarMotores(pinHelice1, pinHelice2, pinHelice3, pinHelice4);
}

void loop(){

}