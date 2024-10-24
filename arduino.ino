void setup() {
    // Begin serial communication. Establishing baud rate to 9600.
    Serial.begin(9600);
}

void loop() {
    // Each 10 seconds, the "play" message is sent, which is captured by the
    // python script and then triggers a video replay
    delay(10000);
    Serial.println("play");
}
