int sensorpin = 2;
int LED = 8;

bool current_State = flase;

void setup()
{
pinMode(LED, OUTPUT);

pinMode(sensorPin, INPUT);

attachInterrupt(digitalPinToInterrupt(sensorpin), Inpt, CHANGE);

}
void loop() {
  delay(1000);
}
void Inpt() {
current_State = !current_State; 
digitalWrite(LED, current_State); 
}
