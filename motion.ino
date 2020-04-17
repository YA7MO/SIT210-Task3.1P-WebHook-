int analogvalue = 0;
int led2 = D7; 

void setup() {
  // Subscribe to the integration response event
    pinMode(A0, INPUT);
    Particle.subscribe("hook-response/motion", myHandler, MY_DEVICES);
    pinMode(led2, OUTPUT);
}

void myHandler(const char *event, const char *data) {
  // Handle the integration response
}
          
     


void loop() {
  // Get some data
  analogvalue = analogRead(A0);
  String data = String(analogvalue);
//   Trigger the integration
  Particle.publish("motion", data, PRIVATE);
  // Wait 60 seconds
  delay(30000);
  
}