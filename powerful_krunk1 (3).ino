int led1 = 12;
int led2 = 9;
int bt1 = 4;
int bt2 = 2;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
}

void loop()
{
  if( digitalRead(bt1) == LOW){
    digitalWrite(led1 ,HIGH );
  }
     if (digitalRead(bt1) == HIGH){
       digitalWrite (led1, LOW );
     }
      delay(2);
  
   if (digitalRead(bt2) == HIGH){
      digitalWrite (led2, LOW);
    }
       if(digitalRead(bt2) == LOW){
         digitalWrite(led2 ,HIGH);
       }
       delay(4);
      }