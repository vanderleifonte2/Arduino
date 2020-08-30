void setup()
{
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(5, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(8, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}