
int micro = 0;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int chicharra = 5;

  int do4 = 262;
  int re4 = 294;
  int mi4 = 330;
  int fa4 = 349;

void setup() 
{

  Serial.begin (115200);

  pinMode (micro, INPUT);
  pinMode (chicharra, OUTPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  
}

void loop() {

  micro = digitalRead (A0);
  Serial.println (micro);
  delay (1);

  if (micro==true)
  {

    digitalWrite (led1, HIGH);
    digitalWrite (led2, LOW);
    digitalWrite (led3, HIGH);
    
    tone (chicharra, mi4, 1000);
    delay (500);
    tone (chicharra, mi4, 1000);
    delay (500);
    
    digitalWrite (led1, LOW);
    digitalWrite (led2, HIGH);
    digitalWrite (led3, LOW);
    
    tone (chicharra, fa4, 1000);
    delay (500);
    
    digitalWrite (led1, HIGH);
    digitalWrite (led2, HIGH);
    digitalWrite (led3, HIGH);

    tone (chicharra, do4, 1000);
    delay (500);

    digitalWrite (led1, HIGH);
    digitalWrite (led2, HIGH);
    digitalWrite (led3, LOW);
    
  }
  else 
  {

    digitalWrite (chicharra, LOW);
    digitalWrite (led1, LOW);
    digitalWrite (led2, LOW);
    digitalWrite (led3, LOW);
    
  }

}
