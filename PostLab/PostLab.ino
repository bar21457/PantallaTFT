
#include <stdint.h>
#include <ili9341_16_bits.h>

#define LCD_RST PD_0
#define LCD_CS PD_1
#define LCD_RS PD_2
#define LCD_WR PD_3
#define LCD_RD PE_1
int DPINS[] = {PB_0, PB_1, PB_2, PB_3, PB_4, PB_5, PB_6, PB_7, PA_2, PA_3, PA_4, PA_5, PA_6, PA_7, PC_4, PC_5};

int x = 2;
int b = 0;
int kirby_blink_flip = 0;

#include "bitmapspostlab7.h"

void setup() {

  pinMode(PF_4, INPUT_PULLUP);
  pinMode(PF_0, INPUT_PULLUP);
  
  lcdSetDataPins(DPINS);
  Serial.begin(9600);
  Serial.println("Iniciando pantalla...");
  lcdInit();
  Serial.println("Pintando el cielo...");
  FillRect(0,0, 320,240, 0x74D9);

  for(int f = 0; f <319; f++){
    LCD_Bitmap(f, 192, 16, 48, kirby_floor);
    f += 15;
  }

  int kirby_index = (x/10)%4;
  int kirby_blink_index = (b/10)%4;
  LCD_Sprite(2, 175, 18, 18, kirby_walking_, 4, kirby_index, 0, 0);

  //LCD_Bitmap(86, 10, 148, 130, kirby_title);
  
}

void loop() {
//  LCD_Sprite(40, 130, 18, 18, kirby_walking, 4, 0, 0, 0);
//  delay(100);
//  LCD_Sprite(40, 130, 18, 18, kirby_walking, 4, 1, 0, 0);
//  delay(100);
//  LCD_Sprite(40, 130, 18, 18, kirby_walking, 4, 2, 0, 0);
//  delay(100);
//  LCD_Sprite(40, 130, 18, 18, kirby_walking, 4, 3, 0, 0);
//  delay(100);

int ButtonState1 = digitalRead(PF_0);
int ButtonState2 = digitalRead(PF_4);

if ((ButtonState1 == HIGH) && (ButtonState2 == HIGH)) {
  b++;
  if (b > 300) {
    b = 0;
  }
  int kirby_blink_index = (b/280)%8;
  LCD_Sprite(x, 175, 18, 18, kirby_blink, 2, kirby_blink_index, kirby_blink_flip, 0);
  delay(5);
}

if (ButtonState1 == LOW) {
  x++;
  kirby_blink_flip = 0;
  if (x > 300) {
    x = 300;
  }
  int kirby_index = (x/10)%4;
  V_line(x-1, 175, 16, 0x74D9);
  LCD_Sprite(x, 175, 18, 18, kirby_walking_, 4, kirby_index, 0, 0);
  delay(5);
}

if (ButtonState2 == LOW) {
  x--;
  kirby_blink_flip = 1;
  if (x < 2) {
    x = 2;
  }
  int kirby_index = (x/10)%4;
  V_line(x+1, 175, 17, 0x74D9);
  LCD_Sprite(x, 175, 18, 18, kirby_walking_, 4, kirby_index, 1, 0);
  delay(5);
}

}
