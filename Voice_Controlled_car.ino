#include <AFMotor.h>
#include <NewPing.h>
#include <Servo.h>

#define TRIGGER_PIN A1
#define ECHO_PIN A0
#define MAX_DISTANCE 300
#define IR A5

AF_DCMotor motor1(1, MOTOR12_1KHZ);
AF_DCMotor motor2(2, MOTOR12_1KHZ);

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Servo myservo;

String voice;

int servoPos = 90; // Initial position of the servo

void setup() {
  Serial.begin(9600);
  myservo.attach(10);
  myservo.write(servoPos); // Move servo to its initial position
  pinMode(IR, INPUT);
}

void loop() {
  int distance = sonar.ping_cm();
  
  if (Serial.available() > 0) {
    voice = Serial.readStringUntil('\n');
    Serial.println(voice);

    if (voice == "turn left" || voice == "left") {
      left();
    } else if (voice == "turn right" || voice == "right") {
      right();
    } else if (voice == "move forward" || voice == "forward") {
      forward();
    } else if (voice == "move backward" || voice == "backward") {
      backward();
    } else if (voice == "stop" || voice == "wait") {
      Stop();
    } else if (voice == "rotate servo 90") {
      rotateServo90();
    }
  }
}

void forward() {
  int distance = sonar.ping_cm();
  
  if (distance < 10) {
    Stop();
    voice = ""; // If an obstacle is detected within 10cm, stop moving
  } else {
    motor1.setSpeed(255); 
    motor1.run(FORWARD); 
    motor2.setSpeed(255);
    motor2.run(FORWARD);
    
    delay(500); // Adjust delay as per requirement
    
    // Check for obstacles after moving
    distance = sonar.ping_cm();
    if (distance < 10) {
      Stop();
      voice = ""; // If an obstacle is detected, stop moving
    }
  }
}

void backward() {
  int IR_Sensor = digitalRead(IR);
  
  if (IR_Sensor == 0) {
    Stop(); // If an obstacle is detected by the infrared sensor, stop moving
  } else {
    motor1.setSpeed(255); 
    motor1.run(BACKWARD); 
    motor2.setSpeed(255); 
    motor2.run(BACKWARD); 
    
    delay(500); // Adjust delay as per requirement
    
    // Check for obstacles after moving
    IR_Sensor = digitalRead(IR);
    if (IR_Sensor == 0) {
      Stop(); // If an obstacle is detected by the infrared sensor, stop moving
    }
  }
}

void left() {
  motor1.run(BACKWARD);
  motor1.setSpeed(255);
  motor2.run(FORWARD);
  motor2.setSpeed(255);
  delay(700);
  Stop();
}

void right() {
  motor1.run(FORWARD);
  motor1.setSpeed(255);
  motor2.run(BACKWARD);
  motor2.setSpeed(255);
  delay(700);
  Stop();
}

void Stop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void rotateServo90() {
  myservo.write(180); // Rotate servo to 180 degrees
  delay(500);
  myservo.write(servoPos); // Return servo to its original position
}
