#if 0
#include "mbed.h"
#include "TextLCD_I2C.h"
#define sleep ThisThread::sleep_for
int main()
{
    int alter = 17;
    I2C i2c_lcd(PB_9, PB_8);
    // I2C Address 0x27 in 7 Bit
    TextLCD_I2C lcd(&i2c_lcd, 0x27<<1, TextLCD_I2C::LCD16x2);
    lcd.setBackLight(true); // Backlight on
    lcd.cls(); // Clear Screen
    lcd.locate(0,0); // Locate Cursor (column,row)
    lcd.printf("Name: Andrei Gubani");
    lcd.locate(0,1);
    lcd.printf("Alter: ");
    lcd.locate(9,1);
    lcd.printf("Jahre");
    
    while(1){
        lcd.locate(7,1);
        lcd.printf("%2d",alter);
        sleep(1s);
    }
}
#endif
