int sensorPin = A0;
void setup() {
    Serial.begin(9600);
    pinMode(7, OUTPUT);
}
void loop() {
    int read = analogRead(sensorPin);
    float voltage = read * 5.0 / 1024.0;
    float temp = voltage * 100.0; // mV sang C
    Serial.println(temp);
    if (temp < 30){
        digitalWrite(7, HIGH);
    } else {
        digitalWrite(7, LOW);
    }
    delay(2000);
}