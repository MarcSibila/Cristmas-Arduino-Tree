int temps=250;

void setup() {
pinMode (8,OUTPUT);
pinMode (13,OUTPUT);  
}

void loop() {
digitalWrite (13,HIGH); // inici
tone (8,329,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,329,20);
delay (temps*2); 
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,329,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps*2); 
digitalWrite (13,HIGH);
tone (8,329,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,392,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,261,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,293,20);
delay (temps);
digitalWrite (13,HIGH); //fi primera part
tone (8,329,20);
delay (temps*4);

digitalWrite (13,LOW); //inici segona part
tone (8,349,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,349,20);
delay (temps);
digitalWrite (13,LOW); 
tone (8,349,20);
delay (temps*2);
digitalWrite (13,HIGH);
tone (8,349,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps);
digitalWrite (13,HIGH); 
tone (8,329,20);
delay (temps*2);
digitalWrite (13,LOW); 
tone (8,329,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,293,20);
delay (temps);
digitalWrite (13,LOW); 
tone (8,293,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,329,20);
delay (temps);
digitalWrite (13,LOW); 
tone (8,293,20);
delay (temps*2);
digitalWrite (13,HIGH);
tone (8,392,20);
delay (temps*2);

digitalWrite (13,HIGH); // inici tercera
tone (8,329,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,329,20);
delay (temps*2); 
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,329,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps*2); 
digitalWrite (13,HIGH);
tone (8,329,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,392,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,261,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,293,20);
delay (temps);
digitalWrite (13,HIGH); //fi tercera part
tone (8,329,20);
delay (temps*4);

digitalWrite (13,LOW); //inici quarta part
tone (8,349,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,349,20);
delay (temps);
digitalWrite (13,LOW); 
tone (8,349,20);
delay (temps*2);
digitalWrite (13,HIGH);
tone (8,349,20);
delay (temps);
digitalWrite (13,LOW);
tone (8,329,20);
delay (temps);
digitalWrite (13,HIGH); 
tone (8,329,20);
delay (temps*2);
digitalWrite (13,LOW); 
tone (8,392,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,392,20);
delay (temps);
digitalWrite (13,LOW); 
tone (8,349,20);
delay (temps);
digitalWrite (13,HIGH);
tone (8,293,20);
delay (temps);
digitalWrite (13,LOW); 
tone (8,261,20);
delay (temps*2);
digitalWrite (13,HIGH);
tone (8,392,20);
delay (temps*2);
 
}
