/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Luces del "Auto fantastico"
   Dev: Fabian Andree Sinay Canel
   Fecha: 25 de abril de 2024
*/
int contador = 0;
int tiempo = 0;

void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT);     
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);     
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);     
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);     
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);     
  pinMode(11, OUTPUT);
    

}
void loop(){
  
  if(digitalRead(3) == HIGH){
Serial.println("velocidad 1");
}
if(digitalRead(2) == HIGH){
Serial.println("velocidad 2");
}

  if(digitalRead(3) == HIGH){
  contador =(contador + 1);
    tiempo = 250;
    if(contador > 15){
       contador = 2;
   }
  }else if(digitalRead(2)==LOW){
    contador = 0;
  }
    if(digitalRead(2) == HIGH){
  contador =(contador + 1);
    tiempo = 125;
   if(contador > 15){
       contador = 2;
   }
  }else if(digitalRead(3)==LOW){
    contador = 0;
  }
 
  
  delay(tiempo);
  //secuencia
 if (contador == 1){
    digitalWrite(4, HIGH); 
  } else{
    digitalWrite(4, LOW);  
  }
    if (contador == 2){
    digitalWrite(5, HIGH); 
  } else{
    digitalWrite(5, LOW);  
  }
    if (contador == 3){
    digitalWrite(6, HIGH); 
  } else{
    digitalWrite(6, LOW);  
  }
  if (contador == 4){
    digitalWrite(7, HIGH); 
   } else{
    digitalWrite(7, LOW);  
  }
  if (contador == 5){
    digitalWrite(8, HIGH); 
  } else{
    digitalWrite(8, LOW);  
  }
  if (contador == 6){
    digitalWrite(9, HIGH); 
  } else{
    digitalWrite(9, LOW);  
  }
  if (contador == 7){
    digitalWrite(10, HIGH); 
  } else{
    digitalWrite(10, LOW);  
  }
  if (contador == 8){
    digitalWrite(11, HIGH); 
  } else{
    digitalWrite(11, LOW);  
  }
  //secuencia en reversa
  if (contador == 9){
    digitalWrite(10, HIGH); 
  } 
  if (contador == 10){
    digitalWrite(9, HIGH); 
  } 
  if (contador == 11){
    digitalWrite(8, HIGH); 
  }
  if (contador == 12){
    digitalWrite(7, HIGH); 
  } 
  if (contador == 13){
    digitalWrite(6, HIGH); 
  } 
  if (contador == 14){
    digitalWrite(5, HIGH); 
  } 
  if (contador == 15){
    digitalWrite(4, HIGH); 
} 
}
