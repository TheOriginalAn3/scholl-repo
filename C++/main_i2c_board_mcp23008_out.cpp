#if 1
#include "mbed.h"
#include "TextLCD_I2C.h"

#define sleep  ThisThread::sleep_for
#define ADDR_MCP23008 0x20 // 0x20<<1 --> 0x40 IO-Expander

I2C i2c(I2C_SDA, I2C_SCL);  // PB_9, PB_8

TextLCD_I2C lcd(&i2c, 0x27 << 1, TextLCD_I2C::LCD16x2);

void mcp23008_init() {
  char data_write[] = {0x00, 0x00}; // IODIR all outputs
  i2c.write(ADDR_MCP23008 << 1, data_write, 2);
}

void mcp23008_output(char value) {
  char data_write[] = {0x09, 0x00}; // GPIO Register
  data_write[1] = value;
  i2c.write(ADDR_MCP23008 << 1, data_write, 2);
}

int main() {
  lcd.setBackLight(true);
  lcd.printf("Bitmuster");
  mcp23008_init();
  while (true) {
      char bitmuster;
    for (int i = 0; i < 8; i++) {
      bitmuster = 0x01 << i;
      mcp23008_output(bitmuster);
      sleep(500ms);
    }
    for (int i = 0; i < 8; i++) {
      bitmuster = bitmuster >> 1;
      if (bitmuster == 0x01) {
          break;
      }
      mcp23008_output(bitmuster);
      sleep(500ms);
    }
  }
}


#endif