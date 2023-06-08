// C++ code

// #define ECHOPIN 3
// #define TRIGPIN 2
// float dis;

void setup() {

  Serial.begin(9600);
  // pinMode(ECHOPIN, INPUT);
  // pinMode(TRIGPIN, OUTPUT);


  pinMode(4, OUTPUT); //  left backward
  pinMode(5, OUTPUT); //  left forward
  pinMode(6, OUTPUT); //  right forward
  pinMode(8, OUTPUT); //  right backward
}

void Stop()
{
  Serial.println("S");
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
}

void Forward()
{
  Serial.println("F");
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,LOW);
}
void Backward()
{
  Serial.println("B");
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,HIGH);

}
void left() {
  Serial.println("L");
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(8,LOW);

}
void right() {
  Serial.println("R");
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(8,HIGH);
}

void loop()
{
  // digitalWrite(TRIGPIN, HIGH);
  // delayMicroseconds(2);

  // digitalWrite(TRIGPIN, LOW);
  // delayMicroseconds(5);

  // dis = pulseIn(ECHOPIN, HIGH);
  // dis = dis/58;
  // Serial.print(dis);
  // Serial.println(" cm");
  // if(dis <= 20)
  // {
  // Backward();
  
  // }
  // else if (dis <= 10)
  // {
  // Stop();
  // // right();
  
  // }
  // else
  // {
  Forward();
  delay(1000);
  // }
  Backward();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
}
