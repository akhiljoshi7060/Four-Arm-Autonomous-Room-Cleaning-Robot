//incluindo biblioteca para controle do servomotor
#include "Servo.h"
  
//Criando um objeto da classe Servo
Servo servoMotor_1_Obj;   
Servo servoMotor_2_Obj;   
Servo servoMotor_3_Obj;   
Servo servoMotor_4_Obj;   
  
//pino analógico onde o potenciômetro está conectado
int const potenciometroPin_1 = 0;  
int const potenciometroPin_2 = 1;  
int const potenciometroPin_3 = 2;  
int const potenciometroPin_4 = 3;  
 
//pino digital associado ao controle do servomotor
int const servoMotorPin_1 = 1;  
int const servoMotorPin_2 = 2;  
int const servoMotorPin_3 = 3;  
int const servoMotorPin_4 = 4;  
 
//variável usada para armazenar o valor lido no potenciômetro
int valPotenciometro_1;            
int valPotenciometro_2;            
int valPotenciometro_3;            
int valPotenciometro_4;            
  
void setup() { 
  //associando o pino digital ao objeto da classe Servo
  servoMotor_1_Obj.attach(servoMotorPin_1); 
  servoMotor_2_Obj.attach(servoMotorPin_2); 
  servoMotor_3_Obj.attach(servoMotorPin_3); 
  servoMotor_4_Obj.attach(servoMotorPin_4); 
} 
  
void loop() 
{ 
  //lendo o valor do potenciômetro (intervalo entre 0 e 1023)
  valPotenciometro_1 = analogRead(potenciometroPin_1); 
  valPotenciometro_2 = analogRead(potenciometroPin_2); 
  valPotenciometro_3 = analogRead(potenciometroPin_3); 
  valPotenciometro_4 = analogRead(potenciometroPin_4); 
 
  //mapeando o valor para a escala do servo (entre 0 e 180)
  valPotenciometro_1 = map(valPotenciometro_1, 0, 1023, 0, 180); 
  valPotenciometro_2 = map(valPotenciometro_2, 0, 1023, 0, 180); 
  valPotenciometro_3 = map(valPotenciometro_3, 0, 1023, 0, 180); 
  valPotenciometro_4 = map(valPotenciometro_4, 0, 1023, 0, 180); 
 
  //definindo o valor/posição do servomotor
  servoMotor_1_Obj.write(valPotenciometro_1); 
  servoMotor_2_Obj.write(valPotenciometro_2); 
  servoMotor_3_Obj.write(valPotenciometro_3); 
  servoMotor_4_Obj.write(valPotenciometro_4); 
  delay(15);   
}
