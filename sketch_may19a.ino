// all credits for unmodified code to (www.progammingboss.com) This is a modified version of the code to work with a Raspberry Pi 3 B+
// Here is the url where I got the unmodified code from (https://www.programmingboss.com/2021/04/esp32-arduino-serial-communication-with-code.html#gsc.tab=0)
#include <Arduino.h>

#define RXp2 16
#define TXp2 17
String cmd;
void setup() {
  Serial.begin(115200);
  Serial2.begin(115200, SERIAL_8N1, RXp2, TXp2);
}
void loop() {
  while (Serial.available() == 0){
    Serial.println(Serial2.readString());
  }
    cmd = Serial.readString();
    cmd.trim();
    Serial2.println(cmd);
}