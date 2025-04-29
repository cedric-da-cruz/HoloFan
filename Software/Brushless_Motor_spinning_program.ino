#include <Servo.h>

int val = 1063;
Servo esc;  
const int escPin = 6;  

void setup() {

  //Phase d'initialisation
    Serial.begin(9600);
    esc.attach(escPin);
    esc.writeMicroseconds(2000);     
    delay(3000);
    esc.writeMicroseconds(1000); 
    delay(3000);
    
    Serial.println("Calibration/Initialisation terminée.");
    delay(3000);
}

void loop() 
{

  /*
    //Code test vitesse + consommation
    for(int i=0;i<22;i++)
    {
      esc.writeMicroseconds(val);
      delay(10000);
      val=val+50;
    }
   */
      esc.writeMicroseconds(val);
      delay(10000);
}
