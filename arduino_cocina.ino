#
#define tono 600
#define TIME_INTERVAL 3000 
 
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int diodo1 = 11;
int diodo2 = 10;

int buzz = 12;
int leda = 13;

/*definicion de variables de entrada*/

int poten = A0;
int but_start = A1;
int but_stop = A2;

//variables para almacenar datos

int var_poten = 0;
int contador = 0;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(diodo1, OUTPUT);
  pinMode(diodo2, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(leda, OUTPUT);



  pinMode(poten, INPUT);
  pinMode(but_start, INPUT);
  pinMode(but_stop, INPUT);
   
  Serial.begin(9600);
//umbrales



  
}

void loop() {
  inicio();
  do{
    var_poten = analogRead(poten);
    contador = map(var_poten,0, 1023,0,10);
    
    if(contador != 10){
      mostrar_numero(contador,1);
    }else{
      mostrar_numero(1,2);
      mostrar_numero(0,1);
    }
    Serial.println("tiempo: " + contador);
    delay(500);
    }while(analogRead(but_start) == 0);
    delay(1000);
    for(int i=0;i>=contador;i++){
      contador  = contador - 1;
      Serial.println("tiempo: " + contador);
      delay(1000);
      mostrar_numero(contador,1);
      mostrar_numero(0,2);
      }
    if (contador == 0 ){
      alarma();
      
    }
}
void alarma(){
  do{
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(500);
    
  }while(analogRead(but_stop) == 0);
  inicio();
}

void inicio(){
    mostrar_numero(0,1);
    mostrar_numero(0,2);
  }

void mostrar_numero(int numero, int segmento){
  switch(numero){
    case 0:
    {
      led1 = 1;
      led2 = 1;
      led3 = 1;
      led4 = 1;
      led5 = 1;
      led6 = 1;
      led7 = 0;
    }break;
    case  1:
    {
      led1 = 1;
      led2 = 1;
      led3 = 0;
      led4 = 0;
      led5 = 0;
      led6 = 0;
      led7 = 0;
    }break;
     case 2:
      {
      led1 = 1;
      led2 = 1;
      led3 = 0;
      led4 = 1;
      led5 = 1;
      led6 = 0;
      led7 = 1;
  }break;
    case  3:
      {
      led1 = 1;
      led2 = 1;
      led3 = 1;
      led4 = 1;
      led5 = 0;
      led6 = 0;
      led7 = 1;
  }break;
     case 4:
      {
      led1 = 0;
      led2 = 1;
      led3 = 1;
      led4 = 0;
      led5 = 0;
      led6 = 1;
      led7 = 1;
  }break;
    case  5:
      {
      led1 = 1;
      led2 = 0;
      led3 = 1;
      led4 = 1;
      led5 = 0;
      led6 = 1;
      led7 = 1;
  }break;
     case 6:
      {
      led1 = 1;
      led2 = 0;
      led3 = 1;
      led4 = 1;
      led5 = 1;
      led6 = 1;
      led7 = 1;
  }break;
    case  7:
    {
      led1 = 1;
      led2 = 1;
      led3 = 1;
      led4 = 0;
      led5 = 0;
      led6 = 0;
      led7 = 0;
  }break;
     case 8:
     {
      led1 = 1;
      led2 = 1;
      led3 = 1;
      led4 = 1;
      led5 = 1;
      led6 = 1;
      led7 = 1;
  } break;
    case  9:
    {
      led1 = 1;
      led2 = 1;
      led3 = 1;
      led4 = 1;
      led5 = 0;
      led6 = 1;
      led7 = 1;
    }break;
    }
    if(segmento ==1){
      diodo1 = 1;
    }else{
      diodo2 = 1;
    }
  }
