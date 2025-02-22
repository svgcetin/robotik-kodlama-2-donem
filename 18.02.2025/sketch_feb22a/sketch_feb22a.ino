void setup()
{
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
} 
void loop()
{
int Ldr = analogRead(A0);
Serial.print("Analog Deger = "); 
Serial.println(Ldr);
delay(250); 
if(  Ldr>=0 && Ldr<=70)
{
   digitalWrite(2, 1);
   digitalWrite(3, 1);
   digitalWrite(4, 1);
  
  }

 else if( Ldr>70&& Ldr<=125){
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
  }
  
 else if(Ldr>100){
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
  }
  
}
