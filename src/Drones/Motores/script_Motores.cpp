/* Código del control de los motores */
#include "motores.h"
#include <Arduino.h>

void iniciarMotores(int pinMotor1,int pinMotor2,int pinMotor3,int pinMotor4){
    pinMode(pinMotor1,OUTPUT);
    pinMode(pinMotor2,OUTPUT);
    pinMode(pinMotor3,OUTPUT);
    pinMode(pinMotor4,OUTPUT);
}