#if 0
#include "mbed.h"
I2C i2c(I2C_SDA, I2C_SCL);  // PB_9, PB_8

int main() {
  for (int addr=0; addr<128; addr++) {
  // Achtung: mbed will nach der 7 Bit-I2C-Addresse 
  // gleich noch das R/!W Bit
    i2c.start();
    int success = i2c.write(addr<<1);
    i2c.stop();
    if (success == 1) {
      printf("I2C device detected at address = %2Xh\n", addr);
    }
  }	
  while (1) {}
}

#endif