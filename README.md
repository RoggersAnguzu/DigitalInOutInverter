# DigitalInOutInverter
This is a Digital In Out Inverter
# Arduino Digital Input and Output Inverter

This Arduino project demonstrates a simple digital input and output inverter. It uses an Arduino board to read the state of a digital input pin and then invert that state to control a digital output pin.

## Table of Contents

- [Components Required](#components-required)
- [Circuit Diagram](#circuit-diagram)
- [How It Works](#how-it-works)
- [Setup](#setup)
- [Usage](#usage)
- [License](#license)

## Components Required

To build and run this project, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- LED
- Resistor (220-330 ohms)
- Pushbutton switch (optional)
- Breadboard and jumper wires

## Circuit Diagram
![image](https://github.com/RoggersAnguzu/DigitalInOutInverter/assets/141458053/00d097d2-f209-4841-af7f-f5e4c568f510)

The circuit connects a digital input (pin 3) to a pushbutton switch (optional) and a digital output (pin 2) to an LED via a current-limiting resistor.

## How It Works

The Arduino sketch provided reads the state of the digital input (pin 3), which can be either HIGH (1) or LOW (0). It then prints the value of the input to the Serial Monitor and uses that value to control the digital output (pin 2). The output will be the logical NOT (!) of the input, which means it will be the opposite of the input's state.

## Setup

1. Connect the components according to the circuit diagram.
2. Connect your Arduino board to your computer using a USB cable.
3. Open the Arduino IDE on your computer.
4. Upload the provided sketch (`digital_inout_inverter.ino`) to your Arduino board.

## Usage

1. Open the Arduino Serial Monitor (Tools > Serial Monitor) to view the output.
2. Observe the changes in the LED's state based on the state of the pushbutton switch (if used) and the digital input.

