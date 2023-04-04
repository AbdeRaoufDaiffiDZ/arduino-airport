long duration;

int distance;
int echoPin = A1;
int trigPin = A0;
void setup()
{
  for (int i = 2; i < 14; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop()
{

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance < 100)
  {
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, HIGH);
    }
  if (distance < 85)
  {
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, HIGH);
    }
  if (distance < 70)
  {
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, HIGH);
    }
  if (distance < 60)
  {
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, HIGH);
    }
  if (distance < 50)
  {
    digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(6, HIGH);
    }
  if (distance < 40)
  {
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, HIGH);
    }

  /////////////////////////////////////////////////////

  if (distance < 50)
  {
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, HIGH);
    }
  if (distance < 40)
  {
    digitalWrite(9, HIGH);
  }
  else{
    digitalWrite(9, HIGH);
    }
  if (distance < 30)
  {
    digitalWrite(10, HIGH);
  }
  else{
    digitalWrite(2, HIGH);
    }
  if (distance < 20)
  {
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11, HIGH);
    }
  if (distance < 15)
  {
    digitalWrite(12, HIGH);
  }
  if (distance < 10)
  {
    digitalWrite(13, HIGH);
  }
}
