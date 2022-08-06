// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A1, INPUT);
}

void loop()
{
  Serial.print("Temperature         ");
  Serial.print((-40 + 0.488155 * (analogRead(A1) - 20)));
  Serial.println(" C");
  delay(1000); // Wait for 1000 millisecond(s)
}