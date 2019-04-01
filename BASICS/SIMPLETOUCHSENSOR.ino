void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH)
  {
    Serial.println("Sensor is touched"); 
    digitalWrite(3, HIGH);
  }else{
    Serial.println("Sensor is freed"); 
    digitalWrite(3, LOW);
  }
}
