
const int NSR= 2;
const int NSY= 3;
const int NSG= 4;
const int EWR= 5;
const int EWY= 6;
const int EWG= 7;
const int button= 8;
int state=1;

void setup ()
{
  Serial.begin(9600);
  pinMode(NSR, OUTPUT);
  pinMode(NSY, OUTPUT);
  pinMode(NSG, OUTPUT);
  pinMode(EWR, OUTPUT);
  pinMode(EWY, OUTPUT);
  pinMode(EWG, OUTPUT);
  pinMode (button, INPUT);
}
  
 void loop ()
 {
  boolean buttonPressed= digitalRead(button);
  
   if(state==1)
   {
     if(buttonPressed)
    { 
     digitalWrite(NSG,LOW);
     digitalWrite(NSY, LOW);
     digitalWrite(NSR, HIGH);
     digitalWrite(EWG, LOW);
     digitalWrite(EWY, LOW);
     digitalWrite(EWR, HIGH);
     
     delay(2000);
 
     state= 2;
   }
   else
   {
     digitalWrite(NSG,HIGH);
     digitalWrite(NSY, LOW);
     digitalWrite(NSR, LOW);
     digitalWrite(EWG, LOW);
     digitalWrite(EWY, LOW);
     digitalWrite(EWR, HIGH);
     
     delay(2000);
 
     state= 2;
   }
   }
   if(state==2)
   {
     if(buttonPressed)
    {
     digitalWrite(NSG,LOW);
     digitalWrite(NSY, LOW);
     digitalWrite(NSR, HIGH);
     digitalWrite(EWG, LOW);
     digitalWrite(EWY, LOW);
     digitalWrite(EWR, HIGH);
     
     delay (2000);
     state= 3;
   }
   else
   {
     digitalWrite(NSG,LOW);
     digitalWrite(NSY, HIGH);
     digitalWrite(NSR, LOW);
     digitalWrite(EWG, LOW);
     digitalWrite(EWY, LOW);
     digitalWrite(EWR, HIGH);
   }
 }
 
  if(state==3)
   {
     if(buttonPressed)

     {
     digitalWrite(NSG,LOW);
     digitalWrite(NSY, LOW);
     digitalWrite(NSR, HIGH);
     digitalWrite(EWG, LOW);
     digitalWrite(EWY, LOW);
     digitalWrite(EWR,HIGH);
     
     delay (2000);
     state= 4;
 }
 else
 {
     digitalWrite(NSG,LOW);
     digitalWrite(NSY, LOW);
     digitalWrite(NSR, HIGH);
     digitalWrite(EWG, HIGH);
     digitalWrite(EWY, LOW);
     digitalWrite(EWR,LOW);
     
     delay (2000);
     state= 4;
   }
   }
 
 if(state==4)
 {
   if(buttonPressed)
   {
     digitalWrite(NSG,LOW);
     digitalWrite(NSY, LOW);
     digitalWrite(NSR, HIGH);
     digitalWrite(EWG, LOW);
     digitalWrite(EWY, LOW);
     digitalWrite(EWR,HIGH);
     
     delay (2000);
     state= 1;
 }
 else
 {
     digitalWrite(NSG,LOW);
     digitalWrite(NSY, LOW);
     digitalWrite(NSR, HIGH);
     digitalWrite(EWG, LOW);
     digitalWrite(EWY, HIGH);
     digitalWrite(EWR,LOW);
     
     delay (2000);
     state= 1;
 
 }
 }
 }
