#include <stdint.h>
#include <ili9341_16_bits.h>

#define LCD_RST PD_0
#define LCD_CS PD_1
#define LCD_RS PD_2
#define LCD_WR PD_3
#define LCD_RD PE_1
int DPINS[] = {PB_0, PB_1, PB_2, PB_3, PB_4, PB_5, PB_6, PB_7, PA_2, PA_3, PA_4, PA_5, PA_6, PA_7, PC_4, PC_5};

void setup() {
  
  lcdSetDataPins(DPINS);
  Serial.begin(9600);
  Serial.println("Iniciando pantalla...");
  lcdInit();
  Serial.println("Pintando negro");
  lcdClear(BLACK);

  FillRect(160,10,5,5, 0x8c71);
  FillRect(155,15,15,5, 0x8c71);
  FillRect(150,20,25,5, 0x8c71);
  FillRect(145,25,35,5, 0x8c71);
  FillRect(140,30,45,50, 0x8c71);
  FillRect(130,80,65,35, 0x8c71);
  FillRect(120,115,85,110, 0x8c71);
  FillRect(110,225,105,10, 0x630c);

  FillRect(145,35,5,5, 0x2695);
  FillRect(155,35,5,5, 0x2695);
  FillRect(165,35,5,5, 0x2695);
  FillRect(175,35,5,5, 0x2695);
  FillRect(145,40,5,5, 0x5fde);
  FillRect(155,40,5,5, 0x5fde);
  FillRect(165,40,5,5, 0x5fde);
  FillRect(175,40,5,5, 0x5fde);

  FillRect(145,50,5,5, 0x2695);
  FillRect(155,50,5,5, 0x2695);
  FillRect(165,50,5,5, 0x2695);
  FillRect(175,50,5,5, 0x2695);
  FillRect(145,55,5,5, 0x5fde);
  FillRect(155,55,5,5, 0x5fde);
  FillRect(165,55,5,5, 0x5fde);
  FillRect(175,55,5,5, 0x5fde);

  FillRect(145,65,5,5, 0x2695);
  FillRect(155,65,5,5, 0x2695);
  FillRect(165,65,5,5, 0x2695);
  FillRect(175,65,5,5, 0x2695);
  FillRect(145,70,5,5, 0x5fde);
  FillRect(155,70,5,5, 0x5fde);
  FillRect(165,70,5,5, 0x5fde);
  FillRect(175,70,5,5, 0x5fde);

  FillRect(135,85,5,5, 0x2695);
  FillRect(145,85,5,5, 0x2695);
  FillRect(155,85,5,5, 0x2695);
  FillRect(165,85,5,5, 0x2695);
  FillRect(175,85,5,5, 0x2695);
  FillRect(185,85,5,5, 0x2695);
  FillRect(135,90,5,5, 0x5fde);
  FillRect(145,90,5,5, 0x5fde);
  FillRect(155,90,5,5, 0x5fde);
  FillRect(165,90,5,5, 0x5fde);
  FillRect(175,90,5,5, 0x5fde);
  FillRect(185,90,5,5, 0x5fde);

  FillRect(135,100,5,5, 0x2695);
  FillRect(145,100,5,5, 0x2695);
  FillRect(155,100,5,5, 0x2695);
  FillRect(165,100,5,5, 0x2695);
  FillRect(175,100,5,5, 0x2695);
  FillRect(185,100,5,5, 0x2695);
  FillRect(135,105,5,5, 0x5fde);
  FillRect(145,105,5,5, 0x5fde);
  FillRect(155,105,5,5, 0x5fde);
  FillRect(165,105,5,5, 0x5fde);
  FillRect(175,105,5,5, 0x5fde);
  FillRect(185,105,5,5, 0x5fde);

  FillRect(125,120,5,5, 0x2695);
  FillRect(135,120,5,5, 0x2695);
  FillRect(145,120,5,5, 0x2695);
  FillRect(155,120,5,5, 0x2695);
  FillRect(165,120,5,5, 0x2695);
  FillRect(175,120,5,5, 0x2695);
  FillRect(185,120,5,5, 0x2695);
  FillRect(195,120,5,5, 0x2695);
  FillRect(125,125,5,5, 0x5fde);
  FillRect(135,125,5,5, 0x5fde);
  FillRect(145,125,5,5, 0x5fde);
  FillRect(155,125,5,5, 0x5fde);
  FillRect(165,125,5,5, 0x5fde);
  FillRect(175,125,5,5, 0x5fde);
  FillRect(185,125,5,5, 0x5fde);
  FillRect(195,125,5,5, 0x5fde);

  FillRect(125,135,5,5, 0x2695);
  FillRect(135,135,5,5, 0x2695);
  FillRect(145,135,5,5, 0x2695);
  FillRect(155,135,5,5, 0x2695);
  FillRect(165,135,5,5, 0x2695);
  FillRect(175,135,5,5, 0x2695);
  FillRect(185,135,5,5, 0x2695);
  FillRect(195,135,5,5, 0x2695);
  FillRect(125,140,5,5, 0x5fde);
  FillRect(135,140,5,5, 0x5fde);
  FillRect(145,140,5,5, 0x5fde);
  FillRect(155,140,5,5, 0x5fde);
  FillRect(165,140,5,5, 0x5fde);
  FillRect(175,140,5,5, 0x5fde);
  FillRect(185,140,5,5, 0x5fde);
  FillRect(195,140,5,5, 0x5fde);

  FillRect(125,150,5,5, 0x2695);
  FillRect(135,150,5,5, 0x2695);
  FillRect(145,150,5,5, 0x2695);
  FillRect(155,150,5,5, 0x2695);
  FillRect(165,150,5,5, 0x2695);
  FillRect(175,150,5,5, 0x2695);
  FillRect(185,150,5,5, 0x2695);
  FillRect(195,150,5,5, 0x2695);
  FillRect(125,155,5,5, 0x5fde);
  FillRect(135,155,5,5, 0x5fde);
  FillRect(145,155,5,5, 0x5fde);
  FillRect(155,155,5,5, 0x5fde);
  FillRect(165,155,5,5, 0x5fde);
  FillRect(175,155,5,5, 0x5fde);
  FillRect(185,155,5,5, 0x5fde);
  FillRect(195,155,5,5, 0x5fde);

  FillRect(125,165,5,5, 0x2695);
  FillRect(135,165,5,5, 0x2695);
  FillRect(145,165,5,5, 0x2695);
  FillRect(155,165,5,5, 0x2695);
  FillRect(165,165,5,5, 0x2695);
  FillRect(175,165,5,5, 0x2695);
  FillRect(185,165,5,5, 0x2695);
  FillRect(195,165,5,5, 0x2695);
  FillRect(125,170,5,5, 0x5fde);
  FillRect(135,170,5,5, 0x5fde);
  FillRect(145,170,5,5, 0x5fde);
  FillRect(155,170,5,5, 0x5fde);
  FillRect(165,170,5,5, 0x5fde);
  FillRect(175,170,5,5, 0x5fde);
  FillRect(185,170,5,5, 0x5fde);
  FillRect(195,170,5,5, 0x5fde);

  FillRect(125,180,5,5, 0x2695);
  FillRect(135,180,5,5, 0x2695);
  FillRect(145,180,5,5, 0x2695);
  FillRect(155,180,5,5, 0x2695);
  FillRect(165,180,5,5, 0x2695);
  FillRect(175,180,5,5, 0x2695);
  FillRect(185,180,5,5, 0x2695);
  FillRect(195,180,5,5, 0x2695);
  FillRect(125,185,5,5, 0x5fde);
  FillRect(135,185,5,5, 0x5fde);
  FillRect(145,185,5,5, 0x5fde);
  FillRect(155,185,5,5, 0x5fde);
  FillRect(165,185,5,5, 0x5fde);
  FillRect(175,185,5,5, 0x5fde);
  FillRect(185,185,5,5, 0x5fde);
  FillRect(195,185,5,5, 0x5fde);

  FillRect(125,195,5,5, 0x2695);
  FillRect(135,195,5,5, 0x2695);
  FillRect(145,195,5,5, 0x2695);
  FillRect(155,195,5,5, 0x2695);
  FillRect(165,195,5,5, 0x2695);
  FillRect(175,195,5,5, 0x2695);
  FillRect(185,195,5,5, 0x2695);
  FillRect(195,195,5,5, 0x2695);
  FillRect(125,200,5,5, 0x5fde);
  FillRect(135,200,5,5, 0x5fde);
  FillRect(145,200,5,5, 0x5fde);
  FillRect(155,200,5,5, 0x5fde);
  FillRect(165,200,5,5, 0x5fde);
  FillRect(175,200,5,5, 0x5fde);
  FillRect(185,200,5,5, 0x5fde);
  FillRect(195,200,5,5, 0x5fde);

  FillRect(125,210,5,5, 0x2695);
  FillRect(135,210,5,5, 0x2695);
  FillRect(145,210,5,5, 0x2695);
  FillRect(155,210,5,5, 0x2695);
  FillRect(165,210,5,5, 0x2695);
  FillRect(175,210,5,5, 0x2695);
  FillRect(185,210,5,5, 0x2695);
  FillRect(195,210,5,5, 0x2695);
  FillRect(125,215,5,5, 0x5fde);
  FillRect(135,215,5,5, 0x5fde);
  FillRect(145,215,5,5, 0x5fde);
  FillRect(155,215,5,5, 0x5fde);
  FillRect(165,215,5,5, 0x5fde);
  FillRect(175,215,5,5, 0x5fde);
  FillRect(185,215,5,5, 0x5fde);
  FillRect(195,215,5,5, 0x5fde);

}

void loop() {
}
