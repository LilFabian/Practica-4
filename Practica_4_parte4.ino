/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Contador del 0 al 99
   Dev: Fabian Andree Sinay Canel
   Fecha: 25 de abril de 2024
*/
int contador = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);     
  pinMode(3, INPUT); 
  pinMode(4, INPUT);
}
void loop() {
//suma
  if (digitalRead(2) == HIGH) {
     contador =(contador + 1);
    if(contador>99){
    contador = 0;
  }
  } 
//resta 
  if(digitalRead(3) == HIGH){
  contador =(contador -1);
   if(contador<0){
    contador = 99;
  }
  }
   Serial.println(contador);
  delay(200); 
 }
