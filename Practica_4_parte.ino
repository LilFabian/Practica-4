/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Contador del 0 al 9
   Dev: Fabian Andree Sinay Canel
   Fecha: 25 de abril de 2024
*/
int tiempo = 500;
int contador = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);     
  pinMode(3, INPUT); 
  pinMode(4, INPUT);
}

void loop() {
  Serial.println(contador);
  delay(tiempo);
  contador =(contador + 1);
  if(contador>9){
    contador = 0;
  }
  if (digitalRead(2) == HIGH) {
    tiempo = 1000;

  } else if (digitalRead(3) == HIGH) {
    tiempo = 2000;

  } else if (digitalRead(4) == HIGH) {
    tiempo = 3000;
    
  } else if (digitalRead(2) == LOW) {
    tiempo = 500;

  } else if (digitalRead(3) == LOW) {
    tiempo = 500;
      
  } else if (digitalRead(4) == LOW) {
    tiempo = 500;
  } 
  if(digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == HIGH){
  tiempo = 500;
  }        
 }
