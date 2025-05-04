void setup() 
{
pinMode(3, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
}
void loop() 
{
analogWrite(3,random(0,255));
analogWrite(6,random(0,255));          
analogWrite(5,random(0,255));
delay(500);
}
