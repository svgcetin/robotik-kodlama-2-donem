void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  tone(11,500);  
  delay(1000);
  
  tone(11,1000);  
  delay(1000);    
  
  tone(11,500); 
  delay(1000);
}
