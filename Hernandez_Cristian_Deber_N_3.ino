#include <LiquidCrystal.h>  //Librería LCD
#include <TimerOne.h> //Librería Timer one

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;  //Asignación de pines
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);  //Pines con los que se trabaja

byte led1=7; //Variable entero de led pin 7
byte led2=6;  //Variable entero de led pin 6
byte led3=5; //Variable entero de led pin 5
byte vector[3]={led1,led2,led3};  //Vector de Led
byte i=0; //Variable i
byte con=0; //Variable contador

void setup() {
  Serial.begin(9600); //Inicia la Cx serial
  lcd.begin(16,2);  //Inicia la LCD
  Timer1.initialize(1000000); //Inicia el timer one
  Timer1.attachInterrupt(leds); //El timer one funciona con el método leds
  for(;i<3;i++){  //Ciclo for para todos los pines
    pinMode(leds[i],OUTPUT);  //Pines de leds como salida
  }
}

void loop() {

}
void leds(){
  con++;
  lcd.clear();  //Limpia LCD
  lcd.setCursor(0,0); //Selecciona la posición de LCD
  lcd.print("Contador:");  //Imprime en LCD
  lcd.setCursor(0,1); //Selecciona la posición de LCD
  lcd.print(con);  //Imprime en LCD
  jue();
  
}
void jue(){
  if(con>19&&con<30){ //Si con es mayor que 19 y menor que 30
    digitalWrite(led1,HIGH);  //Led 1 se enciende
    lcd.setCursor(10,0);  //LCD posición
    lcd.print("LED ON:"); //LCD imprime LED ON:
    lcd.setCursor(10,1);  //LCD posición
    lcd.print("LED 1"); //LCD imprime el led encendido
  }
  else{
    digitalWrite(led1,LOW); //Led 1 se apaga
  }
  if(con>24&&con<40){
    digitalWrite(led2,HIGH);  //Led 2 se enciende
    lcd.setCursor(10,0);  //LCD posición
    lcd.print("LED ON:"); //LCD imprime LED ON:
    lcd.setCursor(10,1);  //LCD posición
    lcd.print("LED 2"); //LCD imprime el led encendido
  }
  else{
    digitalWrite(led2,LOW); //Led 2 se apaga
  }
  if(con>29&&con<35){
    digitalWrite(led3,HIGH);  //Led 3 se enciende
    lcd.setCursor(10,0);  //LCD posición
    lcd.print("LED ON:"); //LCD imprime LED ON:
    lcd.setCursor(10,1);  //LCD posición
    lcd.print("LED 3"); //LCD imprime el led encendido
  }
  else{
    digitalWrite(led3,LOW); //Led 3 se apaga
  }
  if(con==41){  //Si el contador llega a 40 
  con=0;  //Se reinicia el contador
  }
}
