#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Definir constantes
#define ANCHO_PANTALLA 128 // ancho pantalla OLED
#define ALTO_PANTALLA 64 // alto pantalla OLED

// Objeto de la clase Adafruit_SSD1306
Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, -1);
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  // Limpir buffer
  display.clearDisplay();

  // Tamaño del texto
  display.setTextSize(1);
  // Color del texto
  display.setTextColor(SSD1306_WHITE);
  for (int i = 0; i < 16; i++)
  {
    display.setCursor(i * 8, 0);
    display.print(i, HEX);
  }


  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
