int PIRsens = 2;
const int SoilMoisturesens = 3;
bool current_State = false;
int LED = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIRsens, INPUT);
  pinMode(SoilMoisturesens, INPUT);

  attachInterrupt(digitalPinToInterrupt(PIRsens), PIR, CHANGE);
  attachInterrupt(digitalPinToInterrupt(SoilMoisturesens), soil_moisture, RISING);
}

void loop()
{
  delay(1000);
}

void PIR()
{
  current_State = !current_State;
  digitalWrite(LED, current_State);
  Serial.println("Motion sesnor Interrupted");
}

void soil_moisture()
{
  Serial.println("Soil Moisture sensor Interrupted");
}
