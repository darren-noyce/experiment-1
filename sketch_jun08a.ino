#include <Servo.h>
 
Servo myservo1; 
int pos = 0;    
 
void setup() {
  myservo1.attach(9); 
}
 
void loop() {
  for (pos = 0; pos <= 180; pos += 1) 
    myservo1.write(pos); 
    delay(15);                       
  
  for (pos = 180; pos >= 0; pos -= 1) 
    myservo1.write(pos);       
    delay(15);                      
  
}
