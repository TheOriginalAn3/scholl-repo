#if 0
#include "mbed.h"
#include "TextLCD_I2C.h"
#define sleep ThisThread::sleep_for
int main()
{

    AnalogIn ain(PA_6);
    I2C i2c_lcd(PB_9, PB_8);
    // I2C Address 0x27 in 7 Bit
    TextLCD_I2C lcd(&i2c_lcd, 0x27<<1, TextLCD_I2C::LCD16x2);
    lcd.setBackLight(true); // Backlight on
    lcd.cls(); // Clear Screen
    lcd.locate(0,0); // Locate Cursor (column,row)
    lcd.putc('Z'); // print 1 char
    lcd.printf("eit: __0s");
    lcd.locate(0,1);
    lcd.printf("Messwert: x.xxV");
    int timeCounter=0;
    while(1){
        lcd.locate(6,0);
        lcd.printf("%3d",timeCounter);
        lcd.locate(10,1);
        lcd.printf("%4.2f",3.3 * ain.read());
        timeCounter++;
        timeCounter = timeCounter % 1000;
        sleep(1s);
    }
}
#endif
