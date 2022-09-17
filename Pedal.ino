#include <Keyboard.h>

const int BotPedal = 2;
const int BotExt1  = 3;
const int BotExt2  = 4;

unsigned long Tiempo1=0;
unsigned long Tiempo2=0;

void setup() {
  pinMode(BotPedal, INPUT_PULLUP);
  pinMode(BotExt1 , INPUT_PULLUP);
  pinMode(BotExt2 , INPUT_PULLUP);

  Keyboard.begin();
}

void loop() 
{
  if(digitalRead(BotPedal)!=1)
    {
    Tiempo1=millis();
    while (digitalRead(BotPedal)!=1)
    {
      
    }
    
    Tiempo2=millis();

    if ((Tiempo2-Tiempo1)>5000)
    {
    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    }
    else
    {
    Keyboard.press(' ');
    Keyboard.releaseAll();
    }
    
    }
  delay(50);
} 

