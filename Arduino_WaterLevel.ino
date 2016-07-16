// Arduino code is available to download - link below the video.

/* Connection pins:
Arduino     Phantom YoYo Water Level
  A1             Analog S
  5V               VCC
  GND              GND
*/

#define SENSORPIN A1

void setup()
{
  Serial.begin(9600);
  pinMode(SENSORPIN, INPUT); //set up analog pin 1 to be input

}

void loop()
{
  int s = analogRead(SENSORPIN); //take a sample
  Serial.print(s);
  Serial.print(" - ");  
//  Serial.println();

  if(s < 100) {
    Serial.println("You don't care about us any more?");
  }
  if(s >650) {
    Serial.println("Fuck, we're probably drowned");
  }
  if(s < 475 && s > 100) {
    Serial.println("Water level is dangerously low, Mr Jbalz");
  }
  if(s < 650 && s >= 475) {
    Serial.println("Water level is acceptable, Mr Jbalz");
  }
  
/*  if(s >= 1000) {
   Serial.println("Sensor is not in the Soil or DISCONNECTED");
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW); 
  }
  if(s < 1000 && s >= 600) { 
   Serial.println("Soil is DRY");
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH); 
  }
  if(s < 600 && s >= 370) {
   Serial.println("Soil is HUMID"); 
   digitalWrite(2, LOW);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
  }
  if(s < 370) {
   Serial.println("Sensor in WATER");
   digitalWrite(2, HIGH);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
  }
 */
  delay(5000);
}
