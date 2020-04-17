int analogvalue = 0;
//int led2 = D7; 

void setup() {
    pinMode(A0, INPUT);
    Particle.subscribe("hook-response/motion", myHandler, MY_DEVICES);
    //pinMode(led2, OUTPUT);
}

void myHandler(const char *event, const char *data) {
  // Handle the integration response
}
          
     


void loop() {
  // Get some data
  analogvalue = analogRead(A0); // save the detected motion 
  String data = String(analogvalue); // stringfy the data 
//   Trigger the integration
  Particle.publish("motion", data, PRIVATE); // publish data to the webhook
  // Wait 30 seconds
  delay(30000);
  
}
