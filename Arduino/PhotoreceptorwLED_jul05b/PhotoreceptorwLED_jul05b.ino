const int light = A0;
const int pwm= 3;
float Voltage;
void setup() 
{
  Serial.begin(9600);

}

void loop() 
{
  float v= analogRead(light);
  Serial.println(v);
  float voltage= (v*5.0)/1023;
  for(int i; i<255; i++)
  {
    analogWrite(pwm, i);
    delay(10);
  }

}
