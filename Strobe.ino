/*
   D1 Lights Project
   Activates relays to power LED lights in various patterns 
   for offroad drift/racetrack use only.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
pattern1(); // Double Spark alternating
//pattern2(); // Double Strobe alternating
//pattern3(); // Solid LEDs
//pattern4(); // Double Strobe both
//pattern5(); // 
//pattern6(); // 
//pattern7(); // 

}

// Double Spark alternating pattern
void pattern1(){  
  int i = 0;
  int j = 0;
  for(i = 0;i <= 1;i++) { 
    delay(50);     
    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);                     
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);                    
       }
  delay(500);
  for(j = 0;j <= 1;j++) {
    delay(50);
    digitalWrite(2, LOW); 
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);                     
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);                     
   }
  delay(500);
}

//Double Strobe alternating pattern
void pattern2(){  
  int i = 0;
  int j = 0;
  for(i = 0;i <= 1;i++) { 
    delay(50);     
    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);                     
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);                    
       }
  delay(500);
  for(j = 0;j <= 1;j++) {
    delay(50);
    digitalWrite(2, LOW); 
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);                     
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);                     
   }
  delay(500);
}

// Solid LEDs
void pattern3(){     
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);

}

//Double Strobe both pattern
void pattern4(){  
  int i = 0;
  int j = 0;
  for(i = 0;i <= 1;i++) { 
    delay(50);     
    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);                     
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);                    
       }
  delay(500);
  for(j = 0;j <= 1;j++) {
    delay(50);
    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);                     
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);                     
   }
  delay(500);
}
