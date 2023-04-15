void setup()
{
  Serial.begin(9600);
  pinMode(16,OUTPUT);
}

void loop() 
{
  double sensor_value; 

  sensor_value = analogRead(A0);
  Serial.print(sensor_value);
  Serial.print("\n");
  delay(500);
  if(sensor_value <120)
  {
  digitalWrite(16,HIGH);
  }
  else
  { 
  digitalWrite(16,LOW);
  }
}
