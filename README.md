🚦 Traffic Light Replicator using Arduino
This project simulates a real-world traffic light system using an Arduino microcontroller and LEDs. It can be used for educational purposes to demonstrate how traffic control systems work or as a base for more advanced IoT traffic management systems.

🛠️ Features
Mimics real traffic light sequences (Red → Yellow → Green → Yellow → Red)

Configurable timing for each light

Simple and affordable hardware components

Easy to understand for beginners in electronics and Arduino programming

🔧 Hardware Requirements
Arduino Uno (or compatible board)

Breadboard

3 x LEDs (Red, Yellow, Green)

3 x 220Ω resistors

Jumper wires

USB cable for programming

🧠 How It Works
The traffic light replicator cycles through the traffic light phases:

Red light is ON for a fixed duration (e.g., 5 seconds)

Red + Yellow lights are ON together for 2 seconds

Green light is ON for a fixed duration (e.g., 5 seconds)

Yellow light blinks for 2 seconds before returning to Red

This loop continues infinitely, just like a real intersection traffic light.
