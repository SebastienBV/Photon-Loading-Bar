int leds[]={D0,D1,D2,D3,D4};
int x=0;
int ledsOn=0;
int MOTION_PIN = D6;
int Count = 5;
int z = 5;



void setup() {
  for (int x = 0; x < Count; x++) {
    pinMode(leds[x], OUTPUT);
  }
pinMode(MOTION_PIN, INPUT_PULLUP);
}





void loop(){
int proximity = digitalRead(MOTION_PIN);



  if (proximity == LOW) {
    for (int x = 0; x < Count; x++){
     digitalWrite(leds[x], HIGH) ;
     delay(500);
       Particle.publish("Sensored", PRIVATE);
    }

  }
  else{
     for (int z = 0; z < Count; z--){
     digitalWrite(leds[z],LOW) ;
     }
  }
}
