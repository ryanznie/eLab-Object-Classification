
/*
This code is for APDS9960 stand alone sensor. The sensor is used with Arduino Mega. This code was used for initial data collection
*/

#include <Arduino_APDS9960.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS-9960 sensor.");
  }
}

void three_sec(){
  int times = 0;
  double rs = 0;
  double gs = 0;
  double bs = 0;
  while (times<=3000){
    while (! APDS.colorAvailable()) {
      delay(5);
    }
    int r, g, b;
    // read the color
    APDS.readColor(r, g, b);

    
    rs+=r;
    gs+=g;
    bs+=b;
    delay(100);
    times+=100;
}
    rs=rs/30;
    gs=gs/30;
    bs=bs/30;

    //Serial.print("r = ");
    Serial.print(rs);
    Serial.print(",");
    //Serial.print("g = ");
    Serial.print(gs);
    Serial.print(",");
    //Serial.print("b = ");
    Serial.print(bs);
    Serial.print(",");
    Serial.print("0");
    Serial.println();                   //A
}
void loop() {
  // check if a color reading is available
  
  three_sec();
}
