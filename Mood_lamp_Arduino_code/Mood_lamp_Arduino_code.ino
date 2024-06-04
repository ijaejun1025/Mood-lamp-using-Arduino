const int RED = 11;
const int BLUE = 10;
const int GREEN = 9;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  int redValue = random(256);
  int blueValue = random(256);
  int greenValue = random(256);
  
  analogWrite(RED, redValue);
  analogWrite(BLUE, blueValue);
  analogWrite(GREEN, greenValue);
  
  Serial.print("R:");
  Serial.print(redValue);
  Serial.print("\tB:");
  Serial.print(blueValue);
  Serial.print("\tG:");
  Serial.println(greenValue);
  delay(1000);
}
