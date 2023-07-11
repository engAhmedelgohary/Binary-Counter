int ledPin[] = {7,8,9,10};

void setup()
{
  for (int i =0;i<4;i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop()
{
  
  for (int counter = 0; counter<15;counter++)
  {
    for(int i=0; i<4; i++)
    {
      if(bitRead(counter,i)==1)
      {
        digitalWrite(ledPin[i],HIGH);
      }
      else{
        
        digitalWrite(ledPin[i],LOW);
   
  } 
}
     delay(2000);
  }
}
