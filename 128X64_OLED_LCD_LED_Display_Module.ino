/*

การต่อใช้งาน

Vcc - > 3.3 / 5 V
Gnd -> Gnd
SCL -> A5
SDA -> A4

*/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>   // Setting screen size in library or...


#define SCREEN_WIDTH 128 // pixel ความกว้าง
#define SCREEN_HEIGHT 64 // pixel ความสูง 

#define OLED_RESET 4
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
    display.begin(SSD1306_SWITCHCAPVCC, 0x3c); //initialize I2C addr 0x3c
    display.clearDisplay(); // clears the screen and buffer

    display.drawCircle(64, 15, 8, WHITE);
    display.fillCircle(64, 32, 30, WHITE);
    display.drawTriangle(70, 60, 90, 60, 80, 46, WHITE);

    display.setCursor(0,0);
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.println("Kampanart.Ch");

    display.setTextSize(2);
    display.setTextColor(BLACK, WHITE);
    display.println("ArduinoAll");    
    display.setTextSize(1);
    display.println("www.ArduinoAll.com");

    display.setTextSize(1);
    display.setTextColor(WHITE, BLACK);
    display.println("OLED 128x64");

    //display.fillScreen(WHITE);
    
    
    display.display();
}

void loop() {
}