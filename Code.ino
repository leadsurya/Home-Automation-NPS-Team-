
#include <Servo.h>

int m1=3;
int m2=4;
int b1=10;
int b2=11;
Servo servo_9;

char Incoming_value = 0;
                
void setup() 
{
  
  Serial.begin(9600);         
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(b1, OUTPUT);
 servo_9.attach(9, 500, 2500);
  
  pinMode(b2, OUTPUT);
  
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    
      
 if(Incoming_value == '1'){
     digitalWrite(b1,HIGH);
      digitalWrite(b2,LOW);
   delay(1000);
 }
 
      if(Incoming_value == '2')
     {digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);
 }
  
    
      
      if(Incoming_value== '4')
   { servo_9.write(0);}
      
      if(Incoming_value == '3')
    {servo_9.write(60);}
     
      
      if(Incoming_value == '0')
     {  digitalWrite(m1,LOW);
      digitalWrite(m2,LOW);
       servo_9.write(0);
        digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);}
    pa();
  
  }
  }
void pa()
{
    if (Serial.available()>0)
  {
    Incoming_value=Serial.read();
    Serial.print(Incoming_value);
    Serial.print("/n");
      
      if(Incoming_value == '5')
        for(int i=1;i<=3;i=i+1)
      {
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      }
         if(Incoming_value ==  '6')
  for(int i=1;i<=3;i=i+1)
         {
      digitalWrite(m1,LOW);
      digitalWrite(m2,HIGH);
 
         }
    }
}
      
      
      
 
 
