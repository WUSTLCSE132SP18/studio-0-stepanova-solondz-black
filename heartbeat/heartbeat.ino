/* heartbeat
 *
 * output heartbeat
 *
 */

void setup() {
  Serial.begin(9600);
  
  
}

void loop() {
   
   Serial.print(millis()/1000);
   Serial.println(" sec have elapsed");
   delay (1000);
}
