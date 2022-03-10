
void setup() {
  // initialize serial:
  Serial.begin(115200);
  Serial.println("Flutter Arduino USB");
  Serial.flush();
}

void loop() {
  while(Serial.available() > 0) {
    uint8_t byteFromSerial = Serial.read();
    uint8_t buff[100] = {byteFromSerial};
    String str = (char*)buff;
    Serial.print(str);
  }
}
