
/*
  Arduino Smart Parking Slot Indicator
  Author: Deepika

  Description:
  Detects vehicles using an ultrasonic sensor.
  Red LED indicates occupied parking.
  Green LED indicates available parking.
*/

const int trigPin = 9;
const int echoPin = 10;

const int redLED = 7;
const int greenLED = 6;

long duration;
float distance;

const int parkingThreshold = 10; // Distance in cm

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);

  Serial.println("Smart Parking Slot Indicator");
  Serial.println("System Started");
}

void loop() {

  // Send ultrasonic trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Read echo signal
  duration = pulseIn(echoPin, HIGH, 30000);

  // Calculate distance
  if (duration == 0) {
    distance = -1;
  } else {
    distance = duration * 0.0343 / 2;
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check parking slot status
  if (distance > 0 && distance <= parkingThreshold) {

    // Vehicle detected
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);

    Serial.println("Parking Slot: OCCUPIED");

  } else {

    // No vehicle detected
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);

    Serial.println("Parking Slot: AVAILABLE");
  }

  delay(500);
}
