#if 0
#include "mbed.h"

DigitalOut clk(ARDUINO_UNO_D7);
DigitalOut data(ARDUINO_UNO_D8);
DigitalOut store(ARDUINO_UNO_D4);
DigitalOut buzzer(PB_3,1);         // D3 Buzzer ausschalten

int main()
{
 
    while(1){
        // 4 rechts ausgeben
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;

        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        store=0;
        store=1;
        ThisThread::sleep_for(1ms);

        // 3 mitte rechts ausgeben
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        store=0;
        store=1;
        ThisThread::sleep_for(1ms);

        // 2 mitte links ausgeben
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        store=0;
        store=1;
        ThisThread::sleep_for(1ms);


        // 1 ganz links ausgeben
        data = 1;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 0;
        clk = 0;
        clk = 1;
        data = 1;
        clk = 0;
        clk = 1;
        store=0;
        store=1;
        ThisThread::sleep_for(1ms);
    }
}
#endif