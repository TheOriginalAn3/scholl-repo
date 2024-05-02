#if 0
#include "mbed.h"
#include "TextLCD_I2C.h"
#define sleep ThisThread::sleep_for

int main() {

    AnalogIn ain(PA_6);
    ain.set_reference_voltage(3.3);
    I2C i2c_lcd(PB_9, PB_8);
    // I2C Address 0x27 in 7 Bit
    TextLCD_I2C lcd(&i2c_lcd, 0x27<<1, TextLCD_I2C::LCD16x2);
    lcd.setBackLight(true); // Backlight on
    lcd.cls(); // Clear Screen


    
    while(1){
        lcd.locate(0,0);
        lcd.printf("Analogwert: %2.1f", ain.read()*100);
        lcd.printf("%%");
        sleep(1s);
    }
}
#endif
