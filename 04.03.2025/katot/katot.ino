int R=3;
int G=5;
int B=6;
void setup() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);
}
void loop() {
digitalWrite(R, 1);digitalWrite(G, 0);
 digitalWrite(B, 0); delay(1000);
 digitalWrite(R, 0);digitalWrite(G, 1);
 digitalWrite(B, 0); delay(1000);
 
 digitalWrite(R, 0);digitalWrite(G, 0);
 digitalWrite(B, 1); delay(1000);
 digitalWrite(R, 1);digitalWrite(G, 1);
 digitalWrite(B, 0); delay(1000);
 
 digitalWrite(R, 1);digitalWrite(G, 0);
 digitalWrite(B, 1); delay(1000);
 digitalWrite(R, 0);digitalWrite(G, 1);
 digitalWrite(B, 1); delay(1000);
 
 digitalWrite(R, 1);digitalWrite(G, 1);
 digitalWrite(B, 1); delay(1000);
 digitalWrite(R, 0);digitalWrite(G, 0);
 digitalWrite(B, 0); delay(1000);
}
