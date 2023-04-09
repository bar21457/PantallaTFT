
#include <stdint.h>
#include <ili9341_16_bits.h>

#define LCD_RST PD_0
#define LCD_CS PD_1
#define LCD_RS PD_2
#define LCD_WR PD_3
#define LCD_RD PE_1
int DPINS[] = {PB_0, PB_1, PB_2, PB_3, PB_4, PB_5, PB_6, PB_7, PA_2, PA_3, PA_4, PA_5, PA_6, PA_7, PC_4, PC_5};

#include "bitmapslab7.h"

void setup() {
  
  lcdSetDataPins(DPINS);
  Serial.begin(9600);
  Serial.println("Iniciando pantalla...");
  lcdInit();
  Serial.println("Pintando negro");
  lcdClear(BLACK);
  
  LCD_Bitmap(40, 100, 40, 40, mario);

  LCD_Bitmap(140, 100, 40, 42, kirby);

  LCD_Bitmap(240, 100, 40, 42, link);

}

void loop() {
  
}
