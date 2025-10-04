#include "funciones.h"

uint8_t minu = 0;
uint8_t seg = 0;
uint8_t tito = 1;
bool estadodeboton = HIGH;
bool estadodeboton1 = HIGH;
bool estadodeboton2 = HIGH;
bool estadodeboton3 = HIGH;
void conf(){
  pinMode(BTNUP, INPUT);
  pinMode(BTNDOWN, INPUT);
  pinMode(BTNMODE, INPUT);
  pinMode(BTNSAVE, INPUT);
  pinMode(LEDMIN, OUTPUT);
  pinMode(LEDSEG, OUTPUT);

  Serial.begin(BAUDRATE);

  minu = EEPROM.read(CELDAMIN);
  seg = EEPROM.read(CELDASEG);

  // Validar rangos por si hay basura en EEPROM
  if (minu   < minuMin   || minu   > minuMax)   minu   = 0;
  if (seg < segMin || seg > segMax) seg = 0;

  Serial.print("minutos: ");
  Serial.println(minu);
  Serial.print("segundos: ");
  Serial.println(seg);
}
void subir(){
  estadodeboton= digitalRead(BTNUP);
  if(estadodeboton == LOW){
    if(tito % 2 == 0){
      if(seg < segMax){
        seg++;
        Serial.print("segundos : ");
        Serial.println(seg);
        delay(150);
      }
    
        }
      else{
        if(minu < minuMax){
          minu++;
          Serial.print("minutos : ");
          Serial.println(minu);
        delay(150);
        
        }
      }
    }
}

void bajar(){
estadodeboton2= digitalRead(BTNDOWN);
  if(estadodeboton2 == LOW){
    if(tito % 2 == 0){
      if(seg > segMin){
         seg -= STEP;
        Serial.print("segundos : ");
        Serial.println(seg);
        delay(150);
      }
       
        }
      else{
        if(minu > minuMin){
          minu -= STEP;
          Serial.print("minutos : ");
          Serial.println(minu);
        delay(150);
        }
      }
    }
}


void mode(){
  estadodeboton1 = digitalRead(BTNMODE);
  if(estadodeboton1 == LOW){
     tito++;
     delay(150);
  }
}

void led(){
    if(tito % 2 ==0){
      digitalWrite(LEDSEG, HIGH);
      digitalWrite(LEDMIN, LOW);
    }
    else{
        digitalWrite(LEDMIN, HIGH);
        digitalWrite(LEDSEG, LOW);
      }
  }

void save(){
   estadodeboton3 = digitalRead(BTNSAVE);
  if(estadodeboton3 == LOW){
  EEPROM.update(CELDAMIN, (uint8_t)minu);
  EEPROM.update(CELDASEG, (uint8_t)seg);
      delay(150);
        Serial.print("minuto guardado : ");
        Serial.println(minu);
        Serial.print("segundo guardado : ");
        Serial.println(seg);
}
}
