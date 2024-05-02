#if 0
#include "mbed.h"

DigitalOut clk(ARDUINO_UNO_D7);
DigitalOut data(ARDUINO_UNO_D8);
DigitalOut store(ARDUINO_UNO_D4);
DigitalOut buzzer(PB_3,1);         // D3 Buzzer ausschalten

//const int ZAHLEN[] = {
//    0x11111100, // 0
//    0x10011111, // 1
//    0x00100101, // 2
//    0x00001101, // 3
//    0x10011001, // 4
//    0x01001001, // 5
//    0x01000001, // 6
//    0x00011111, // 7
//    0x00000001, // 8
//    0x00001001  // 9
//};

const int ZAHLEN[] = {
    0x11000000,//0
    0x11111001,//1
    0x10100100,//2
    0x10110000,//3
    0x10011001,//4
    0x10010010,//5
    0x10000010,//6
    0x11111000,//7
    0x10000000,//8
    0x10010000,//9
};

void shiftByte(int value) {
    int maske=0x01;
    for(int i=0; i<8; i++) {
        if(value & maske) {
            data=1;
        } else {
            data=0;
        }
        clk=0;
        clk=1;
    value = value >> 1;
    }
}

void latch() {
    store=0;
    store=1;
}


int main() {
 
    while(1) {
        //LOW-AKTIV
        // 4 rechts ausgeben  
        shiftByte(ZAHLEN[4]);

        //Aktivierung 7-Seg.Anz. //HIGH-AKTIV
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
        latch();

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