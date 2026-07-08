// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100000); // Wait for 100000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100000); // Wait for 100000 millisecond(s)
}
