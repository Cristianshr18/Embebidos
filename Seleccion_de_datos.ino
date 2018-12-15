#include "datos_entrenamiento.h"

byte i=0;                            // Variable entera
byte j=0;                            // Variable entera
byte total=0;                        // Variable entera 
byte etiq=0;                         // Variable entera
byte col=0;                          // Variable entera
byte fil=0;                          // Variable entera
float mat_prom [3][5];               // Matriz promedios columnas
float mat_nor [120];                 // Matriz normalizada 
float mat_nor_may [3];               // Matriz normalizada con número mayor
float mat_red [17][5];               // Matriz base de datos
float prom;                          // Variable flotante 
float suma;                          // Variable flotante
float suma2;                         // Variable flotante
float distancia;                     // Variable flotante
float distancia_mayor=0;             // Variable flotante

void setup() {
  Serial.begin(9600);
  knn(0.3,0.34);
  }

void loop() {
}
   
float knn(float rmin, float rmax){
  for(;etiq<4;etiq++){ 
    for(;col<4;col++){
      for(fil=i;fil<40*etiq;fil++){
      suma=suma + matriz[fil][col];
      }
      prom=suma/40; 
      mat_prom[etiq-1][col]=prom; 
      fil=0;
      suma=0; 
    }
    col=0; 
    i=40*etiq;
  }
    fil=0;
    col=0;
    etiq=0;
    i=0; 

  for(;etiq<4;etiq++){  
    for(fil=i;fil<40*etiq;fil++){
      for(;col<4;col++){
      suma2=suma2 + pow((matriz[fil][col] - mat_prom[etiq-1][col]),2);
      }
      distancia=sqrt(suma2);
      mat_nor[fil]=distancia;
      if(distancia>distancia_mayor){
        distancia_mayor=distancia;
        mat_nor_may[etiq-1]=distancia_mayor;
        }
      col=0;
      distancia=0;
      suma2=0; 
    }
    distancia_mayor=0;
    fil=0;
    i=40*etiq;
  }
  col=0;
  fil=0;
  etiq=0;
  suma=0;
  for(;etiq<4;etiq++){
    for(fil=i;fil<40*etiq;fil++){
    suma=mat_nor[fil] / mat_nor_may[etiq-1];
    if((suma <= rmax) && (suma >= rmin)){
      mat_red[j][0]=matriz[fil][0];
      mat_red[j][1]=matriz[fil][1]; 
      mat_red[j][2]=matriz[fil][2]; 
      mat_red[j][3]=matriz[fil][3]; 
      mat_red[j][4]=matriz[fil][4]; 
      j++;
    }
    suma=0;
    }
    i=40*etiq;
  }
  col=0;
  fil=0;
  for(;fil<8;fil++){
    for(;col<5;col++){
    Serial.print(mat_red[fil][col]); 
    }
    Serial.println("");  
    col=0;
  }
    Serial.println(j); 
}
