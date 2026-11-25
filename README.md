
# Arduino-Based Smart Car Parking Slot Indicator with Automatic Gate Control

## Project Overview

This project is a basic smart car parking system developed using an Arduino Uno and three IR sensors.

The system detects vehicles entering the parking area, controls the entry gate using a servo motor, and monitors the occupancy of two parking slots.

A red LED indicates parking occupancy. It turns ON when at least one parking slot is occupied and remains OFF when both slots are vacant.

The project is designed for two parking slots and can be extended to support additional slots.

## Objectives

- Detect vehicles at the parking entrance.
- Automatically control the entry gate using a servo motor.
- Monitor the occupancy of two parking slots.
- Indicate parking occupancy using a red LED.
- Demonstrate basic automation using an Arduino microcontroller.

## Components Used

- Arduino Uno
- 3 IR Sensors
  - 1 IR sensor for vehicle detection at the entrance
  - 2 IR sensors for parking slot occupancy detection
- Servo Motor
- Red LED
- Resistor for LED
- Breadboard
- Jumper Wires
- USB Cable / Power Supply

## Working Principle

### 1. Vehicle Detection and Gate Control

The first IR sensor is placed at the parking entrance to detect incoming vehicles.

When a vehicle is detected, the sensor sends a signal to the Arduino Uno. The Arduino processes the signal and controls the servo motor to open or close the gate.

### 2. Parking Slot Detection

The remaining two IR sensors are placed in the parking slots.

Each sensor detects whether its corresponding parking slot is occupied or vacant.

### 3. Parking Occupancy Indication

The Arduino checks the status of both parking slot sensors.

- If at least one parking slot is occupied, the red LED turns ON.
- If both parking slots are vacant, the red LED remains OFF.

## System Features

- Automatic vehicle detection
- Servo motor-based gate control
- Two-slot parking occupancy monitoring
- LED-based parking status indication
- Arduino-based control system
- Expandable design for additional parking slots

## Circuit Diagram

![Circuit Diagram](https://github.com/user-attachments/assets/c1db9bd3-e56d-4753-8d97-d4d8b469b8c2)

## Working Model

![Working Model](https://github.com/Deepikasangu/Arduino-smart-parking-slot-indicator/blob/main/parking-project.jpg?raw=true)

[![Watch Working Model Video](https://github.com/Deepikasangu/Arduino-smart-parking-slot-indicator/blob/main/parking-project.jpg?raw=true)](https://github.com/Deepikasangu/Arduino-smart-parking-slot-indicator/blob/main/parking-demo-muted.mp4)

## Applications

- Small parking areas
- Educational robotics and electronics projects
- Basic parking automation demonstrations
- Embedded systems learning

## Future Improvements

- Increase the number of parking slots.
- Add an LCD to display available parking spaces.
- Add an entry and exit vehicle counter.
- Integrate an IoT dashboard for remote monitoring.
- Add a full parking availability display.

## Technologies Used

- Arduino Uno
- Embedded C/C++ (Arduino programming)
- IR Sensor Interfacing
- Servo Motor Control
- Basic Embedded Systems

## Author

**Deepika Sangu**

ECE Graduate | Embedded Systems | Robotics & Electronics
