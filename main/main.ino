long duration;
int distance;
int echoPin = 12;
int trigPin = 13;

void setup() {
  for (int i = 2; i < 13; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance < 70) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  if (distance < 60) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  if (distance < 50) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  if (distance < 40) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  if (distance < 30) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }
  if (distance < 20) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }

  /////////////////////////////////////////////////////

  if (distance < 50) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  if (distance < 40) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  if (distance < 30) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  if (distance < 20) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  if (distance < 15) {
    digitalWrite(A0, HIGH);
  } else {
    digitalWrite(A0, LOW);
  }
  if (distance < 10) {
    digitalWrite(A1, HIGH);
  } else {
    digitalWrite(A1, LOW);
  }

  // Output distance to the serial monitor
  Serial.println(distance);

  delay(100);  // Wait for a short time before taking another reading
}
