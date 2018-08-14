  /*
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */
int LED_GREEN = 12;
int LED_RED = 8;
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(LED_GREEN, OUTPUT); // green coloured LED 
  pinMode(LED_RED, OUTPUT); // red coloured LED
}
void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0

  if (val<350 || val>600) {
    Serial.println(val);
    Serial.println("Soil Moisture Level: LOW"); // print message to monitor
    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);
    delay(500);
    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);
    delay(500);
    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);
    delay(500);
    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);
    delay(500);
    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);
    delay(500);
    }
  if (val>350 && val<600)
    {
      Serial.println(val);
      Serial.println("Soil Moisture Level: GOOD"); // print message to monitor
      digitalWrite(LED_GREEN, HIGH);  // green LED
      delay(5000);
      digitalWrite(LED_GREEN, LOW);
    }
  }
