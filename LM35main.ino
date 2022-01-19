int sensorPin = A0;
void setup() {
    Serial.begin(9600); //Khởi động kết nối serial ở 9600 baud
    pinMode(7, OUTPUT); //Đặt pinMode là output
}
void loop() {
    int read = analogRead(sensorPin);
    float voltage = read * 5.0 / 1024.0;
    float temp = voltage * 100.0; // mV sang C
    Serial.println(temp);
    if (temp < 50){
        digitalWrite(7, HIGH);
    } else {
        digitalWrite(7, LOW);
    }
    /* 
        Kiểm tra nhiệt độ:
        Nếu nhiệt độ < 50 độ C thì bật relay, điều khiển cho quạt vả bugi bật
        Còn nếu không đặt relay là tắt
    */
    delay(2000); //Set thời gian kiểm tra là 2s 1 lần
}
