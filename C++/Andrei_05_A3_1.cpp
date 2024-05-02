#if 0
#include "mbed.h"
#include "TextLCD_I2C.h"
#define sleep ThisThread::sleep_for

int main() {

    AnalogIn aIn(PA_4);
    aIn.set_reference_voltage(3.3);
    I2C i2c_lcd(PB_9, PB_8);
    // I2C Address 0x27 in 7 Bit
    TextLCD_I2C lcd(&i2c_lcd, 0x27<<1, TextLCD_I2C::LCD16x2);
    lcd.setBackLight(true); // Backlight on
    lcd.cls(); // Clear Screen


    while(1){
        lcd.locate(0,0);
        lcd.printf("Temp: %2.2f", aIn.read_voltage()*100);
        sleep(1s);
    }
}
#endif
