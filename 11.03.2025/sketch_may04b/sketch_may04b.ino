void loop() 
{
   for(int i=0;i<=255;i++)
  {
    analogWrite(6, i);
    analogWrite(5, 255);
    analogWrite(3, 255);

     delay(10);
  
  }
    for(int i=0;i<=255;i++)
  {
    analogWrite(6, 255);
    analogWrite(5, i);
    analogWrite(3, 255);

     delay(10);
  
  }
    for(int i=0;i<=255;i++)
  {
    analogWrite(6, 255);
    analogWrite(5, 255);
    analogWrite(3, i);

     delay(10);
  
  }
 

}
