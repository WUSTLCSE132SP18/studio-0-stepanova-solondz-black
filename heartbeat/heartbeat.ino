void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(13, HIGH);
  Serial.print(millis()/1000);
  Serial.println(" sec have elapsed");
  delay(500);
  digitalWrite(13, LOW);
  
  
}
