// C++ code
//
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int A=digitalRead(3);
  Serial.print("A=");
  Serial.println(A);
  digitalWrite(2,!A);
}