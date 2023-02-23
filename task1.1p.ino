int sensorPin = A0;
int sensorValue;  
int limit = 300;
int LED = 8;
void setup() {
 Serial.begin(9600);
 pinMode(sensorPin, INPUT);
 pinMode(LED, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin);
 Serial.println("Analog Value : ");
 Serial.println(sensorValue);
 
 if (sensorValue<limit) {
 digitalWrite(LED, HIGH);
 }
 else {
 digitalWrite(LED, LOW);
 }
 
 delay(1000);
}
