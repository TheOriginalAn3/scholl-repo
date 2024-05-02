#if 0
#include <array>
#include <algorithm>
#include "mbed.h"
#include "TextLCD_I2C.h"

#define sleep ThisThread::sleep_for
#define NUM_READINGS 100

AnalogIn aIn_Sensor(PA_4);

int main() {

    //Display
    I2C i2c_lcd(PB_9, PB_8);
    // I2C Address 0x27 in 7 Bit
    TextLCD_I2C lcd(&i2c_lcd, 0x27<<1, TextLCD_I2C::LCD16x2);
    lcd.setBackLight(true); // Backlight on
    lcd.cls(); // Clear Screen

//CODE-----------------------------------------------------------------------------------------------------------------------

    std::array<float, NUM_READINGS> temperatureReadings; //Array erzeugung -> ChatGPT
    float averageTemperature;
    float medianTemperature;

    while (1) {
        //Read temperature and save in an array
        for (int i = 0; i < NUM_READINGS; i++) {
            temperatureReadings[i] = aIn_Sensor.read_voltage() * 100;
            ThisThread::sleep_for(10ms);
        }
        

        //average temperature
        float sum = 0;
        for (int i = 0; i < NUM_READINGS; i++) {
            sum += temperatureReadings[i];
        }
        averageTemperature = sum / NUM_READINGS;
        
        //Mithilfe von ChatGPT
        //median temperature
        std::sort(temperatureReadings.begin(), temperatureReadings.end());
        medianTemperature = temperatureReadings[49];


        //Display
        for (int j; j < NUM_READINGS; j++) {
            lcd.locate(0, 0);
            lcd.printf("%2.2f",averageTemperature);
            lcd.locate(0, 1);
            lcd.printf("%2.2f",medianTemperature);
            ThisThread::sleep_for(10ms);
        }
    }
}

#endif
