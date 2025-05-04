int buzzer=11;
int Do=261;
int Re=294;
int Mi=329;
int Fa=349;
int Si=493;
int La=440;
int Sol=392;

int notalar[]={Mi,Mi,Mi,Mi,Fa,Mi};
int notalar2[]={Mi,Mi,Mi,La,Mi};
int notalar3[]={Re,Re,Re,Re,Mi,Re};
int notalar4[]={Re,Re,Re,Mi,Re,Do,Do,Do,Do,Re,Do};
int notalar5[]={Do,Do,Do,Re,Do};
int notalar6[]={Si,Si,Si};
int notalar7[]={Do};
int notalar8[]={Si};
int notalar9[]={La};



void setup() 
{
pinMode(11,OUTPUT);
}

void loop() {
int i;
  
  for (i=0;i<sizeof(notalar)/sizeof(int);i++) 
  {
  tone(buzzer, notalar[i]*1.5);
  delay(500);
  noTone(buzzer);
  delay(50);
 
  }
  for (i=0;i<sizeof(notalar2)/sizeof(int);i++) 
  {
  tone(buzzer, notalar2[i]*1.5);
  delay(500);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar3)/sizeof(int);i++)
  {
  tone(buzzer, notalar3[i]*1.5);
  delay(500);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar4)/sizeof(int);i++)
  {
  tone(buzzer, notalar4[i]*1.5);
  delay(500);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar5)/sizeof(int);i++)
  {
  tone(buzzer, notalar5[i]*1.5);
  delay(500);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar6)/sizeof(int);i++)
  {
  tone(buzzer, notalar6[i]);
  delay(500);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar7)/sizeof(int);i++)
  {
  tone(buzzer, notalar7[i]*1.5);
  delay(400);
  noTone(buzzer);
  delay(50);
  noTone(buzzer);
  }
  for (i=0;i<sizeof(notalar8)/sizeof(int);i++)
  {
  tone(buzzer, notalar8[i]);
  delay(500);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar6)/sizeof(int);i++)
  {
  tone(buzzer, notalar6[i]);
  delay(500);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar7)/sizeof(int);i++)
  {
  tone(buzzer, notalar7[i]*1.5);
  delay(400);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar8)/sizeof(int);i++)
  {
  tone(buzzer, notalar8[i]);
  delay(400);
  noTone(buzzer);
  delay(50);
  }
  for (i=0;i<sizeof(notalar9)/sizeof(int);i++)
  {
  tone(buzzer, notalar9[i]*1);
  delay(400);
  noTone(buzzer);
  delay(50);
  }
}
     
