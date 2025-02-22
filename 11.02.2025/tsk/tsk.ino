void setup() 
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2,OUTPUT);
}
void loop() 
{
  
  if(analogRead(A0)<70) 
  {
    digitalWrite(2,1);
  }
  else (analogRead(A0)>70);
  {
    digitalWrite (2,0);
  }
  Serial.println(analogRead(A0));
  delay(200);
}
