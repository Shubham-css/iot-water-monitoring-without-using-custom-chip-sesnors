#define PH_PIN 32
#define TDS_PIN 35
#define TURB_PIN 34

void setup() {
  Serial.begin(115200);
}

void loop() {

  int rawPH = analogRead(PH_PIN);
  int rawTDS = analogRead(TDS_PIN);
  int rawTurb = analogRead(TURB_PIN);

  float ph = rawPH * (14.0 / 4095.0);
  float tds = rawTDS * (1000.0 / 4095.0);
  float turb = rawTurb * (3000.0 / 4095.0);

  Serial.print("TDS: ");
  Serial.print((int)tds);
  Serial.print(" ppm  |  pH: ");
  Serial.print(ph,1);
  Serial.print("  |  Turbidity: ");
  Serial.print((int)turb);
  Serial.println(" NTU");

  delay(1000);
}