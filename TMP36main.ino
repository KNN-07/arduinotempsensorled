#define SENSOR_PIN A0
float voltage = 0;
float sensor = 0;
float celsius = 0;
void setup() {
	Serial.begin(9600);   // Bật serial monitor
}
void loop()
{            

  digitalWrite(8,HIGH);
	sensor = analogRead(SENSOR_PIN); // Đọc gt
	
	voltage = (sensor*5000)/1024; // V sang mV
	voltage = voltage-400;        
	celsius = voltage/10;     // độ C    
  Serial.println(celsius,2);
  if (celsius > 30){
      digitalWrite(13,HIGH);
} else {
    digitalWrite(13, LOW);
}
	delay (1000); // delay 1s