
#include <Servo.h>

Servo puerta;

int piezoA = A0;
int piezoAVal = 0;
int piezoB = A1;
int piezoBVal = 0;

int led = 4;
int chicharra = 5;

int do4 = 262;
int re4 = 294;

void setup() 
{

  puerta.attach (2);
  Serial.begin (9600);

  pinMode (led, OUTPUT);
  pinMode (chicharra, OUTPUT);

}

void loop() 
{

  piezoAVal = analogRead (piezoA);
  piezoBVal = analogRead (piezoB);

//La puerta en 0 esta cerrada y en 90 abierta así que el piezoelectrico conectado a A0 debe ir dentro del garaje y el A1 fuera.

  if (piezoAVal > 100)
  {

  tone (chicharra, re4, 500);
  tone (chicharra, do4, 500);
  digitalWrite (led, LOW);
  puerta.write (0);
  
  }
  if (piezoBVal > 100)
  {

  digitalWrite (led, HIGH);
  puerta.write (90);
    
  }

}
