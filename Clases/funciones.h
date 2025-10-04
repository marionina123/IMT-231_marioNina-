#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <Arduino.h>
#include <EEPROM.h>

#define BTNUP 2
#define BTNDOWN 3
#define BTNMODE 4
#define BTNSAVE 5
#define LEDMIN 8
#define LEDSEG 9
#define CELDAMIN 0
#define CELDASEG 1
#define BAUDRATE 9600
#define minuMin 0
#define minuMax 59
#define segMin 0
#define segMax 59
#define STEP 1
//VARIABLES 
extern bool estadodeboton;
extern bool estadodeboton1;
extern bool estadodeboton2;
extern bool estadodeboton3;
extern uint8_t minu;
extern uint8_t seg;
extern uint8_t tito; //variable praa alternar modos min y seg
void conf();
void subir();
void bajar();
void mode();
void led();
void save();

#endif