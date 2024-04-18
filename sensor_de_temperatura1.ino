// C++ code
//
int temp = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  temp = (-40 + 0.488155 * (analogRead(A0) - 20));
  Serial.println("temp");
  delay(3000); // Wait for 3000 millisecond(s)
}