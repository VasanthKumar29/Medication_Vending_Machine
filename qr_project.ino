 #include "BluetoothSerial.h"

BluetoothSerial SerialBT;
char Incoming_value = 0;
               
void setup() 
{
  
  Serial.begin(9600); 
  SerialBT.begin("med dis");   
  pinMode(32, OUTPUT);    
 pinMode(33, OUTPUT);  
  pinMode(25, OUTPUT); 
pinMode(26, OUTPUT);   
pinMode(23, OUTPUT);           
}

void loop()
{
  
  if(SerialBT.available())  
  {
    Incoming_value = SerialBT.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == 'pr1')  
    {   
      delay(3000);       
      t1();
      tt();        
     }
    else if(Incoming_value == 'pr2') 
    {    
      delay(3000);       
       t1();       
       t2();
       tt();                   
    }
else if(Incoming_value == 'pr3') 
    {    
       delay(3000);   
       t1(); 
       t2();       
       t3(); 
       tt();                 
    }  
    
else if(Incoming_value == 'pr4') 
    {    
      delay(3000);      
       t1();    
       t2();     
       t3();       
       t4();   
       tt();                       
    }         

else if(Incoming_value == 'pr5') 
    {    
       delay(3000);      
       t1();      
       t1();        
       t3();       
       t2();      
       t4();  
       tt();                      
    }   

  }  
  
                      
} 


void t1()
{
      
      digitalWrite(32, HIGH);
      delay(1100); 
      digitalWrite(32, LOW);  
}

void t2()
{
      digitalWrite(33, HIGH);
      delay(1100); 
      digitalWrite(33, LOW);  
}

void t3()
{
      digitalWrite(25, HIGH);
      delay(1100); 
      digitalWrite(25, LOW);  
}
void t4()
{
      digitalWrite(26, HIGH);
      delay(1100); 
      digitalWrite(26, LOW);  
}

void tt()
{
      digitalWrite(23, HIGH);
      delay(200); 
      digitalWrite(23, LOW);  
}
