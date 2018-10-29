#include <LiquidCrystal.h>  //Librería LCD

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;  //Asignación de pines
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);  //Pines con los que se trabaja

int on=0; //Varaible entero on
int enc=0;  //Varaible entero enc
char dato;  //Varaible caracter dato
String palabra; //Varaible texto palabra
 
void setup() {
  Serial.begin(9600); //Inicia la Cx serial
  lcd.begin(16,2);  //Inicia la LCD
  attachInterrupt(0,on_off,FALLING);  //Interrupción pin 2
  attachInterrupt(1,encendido,FALLING);  //Interrupción pin 3
}

void loop() {
  palabras(); //Llama al método palabras
}

void on_off(){  //Método on y off
  on=1-on;  //Variable on prende o apaga
  delay(500); //Tiempo de espera
  if(on==1){  //Si on=1 hace:
    Serial.println("SISTEMA ON"); //Imprime en Serial 
    delay(500); //Tiempo de espera
    lcd.clear();  //Limpia LCD
    lcd.setCursor(0,0); //Selecciona la posición de LCD
    lcd.print("SISTEMA ON");  //Imprime en LCD
    delay(500); //Tiempo de espera
  }
  else{  //Caso contrario
    Serial.println("SISTEMA OFF");  //Imprime en Serial
    delay(500); //Tiempo de espera
    lcd.clear();  //Limpia LCD
    lcd.setCursor(0,0); //Selecciona la posición de LCD
    lcd.print("SISTEMA OFF"); //Imprime en LCD
    delay(500); //Tiempo de espera
  }
}

void encendido() {  //Método encendido
  enc=1-enc;  //Variable enc prende o apaga
  delay(500); //Tiempo de espera
  if(enc==1){  //Si enc=1 hace:
    Serial.println("Ingrese Palabra:"); //Imprime en Serial 
    delay(500); //Tiempo de espera
    lcd.clear();  //Limpia LCD
    lcd.setCursor(0,1); //Selecciona la posición de LCD
    lcd.print("Ingrese Palabra"); //Imprime en LCD
    delay(500); //Tiempo de espera
    palabra=""; //Variable palabra vacía
    dato="";  //Varaible dato vacía
  }
  else{  //Caso contrario
    lcd.clear();  //Limpia LCD
    lcd.setCursor(0,0); //Selecciona la posición de LCD
    lcd.print(palabra);  //Imprime en LCD
    delay(500); //Tiempo de espera
    enc=0;  //Variable enc igual a cero
  }
}
void palabras(){  //Método palabras
  if(Serial.available()>0){ //Verifica si existe un dato
    dato=Serial.read(); //Asigna dato a una variable
    palabra+=dato;  //Suma cada dato en otra variable
  } 
}
