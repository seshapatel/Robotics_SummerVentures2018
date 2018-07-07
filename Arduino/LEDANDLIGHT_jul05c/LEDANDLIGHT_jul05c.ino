const int light = A0;
const int pwm= 3;
float V;
void setup()

 {
  Serial.begin(9600);
  pinMode(pwm, OUTPUT);
}

void loop() 
{
  float Voltage= analogRead(light);
  V = (5.0/1023)*Voltage;
  Serial.println(V);
  int dc = my_map(V, 2.5, 4.5, 0, 255);
  analogWrite(pwm, dc);
  //for(int i; i<255; i++)
  /*{
    analogWrite(pwm, i);
    delay(10);
  }*/
  
}
int my_map(float value, float lower_voltage, float upper_voltage, int lower_dc, int upper_dc)
{
  int y;
  int b;
  int m;
  m = 255/ (upper_voltage - lower_voltage);
  b = 255-(m*upper_voltage);
  y = m* (value) + b ;
  if (y<= lower_dc)
  {
    y = lower_dc;
  }
  else if (y >= upper_dc)
  {
    y= upper_dc;
  }
  return(y);
}
  
  
