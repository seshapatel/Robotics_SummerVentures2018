const int button = 2;
const int led = 3;
boolean flag = false;
void setup ()
{
  Serial.begin(9600);
  
 
  pinMode (button, INPUT);
  pinMode(led,OUTPUT);
  
}

void loop ()
{
  if(digitalRead(button))
  {
   flag=!flag;
   delay(50);
    digitalWrite(led,flag);
    
  }
  else
  {
    digitalWrite(led, LOW);
  
  }
}
