// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{analogWrite(8,0);
             delay(1000);
 analogWrite(8,50);
             delay(1000);                       
 analogWrite(8,150);
             delay(1000); 
 analogWrite(8,200);
             delay(1000); 
 analogWrite(8,250);
             delay(1000);
 analogWrite(8,200);
             delay(1000);
 analogWrite(8,150);
             delay(1000);
 analogWrite(8,50);
             delay(1000);
 analogWrite(8,0);
             delay(1000);
 
 
}