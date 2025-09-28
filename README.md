# uart-led-visual-demostrator-part1

## ****If this project is useful to you, share your opinions in the comments section****<br> 
## What problem do you have that this project solved?</br></br></br>

## Project Description
This is the first part of a two-part tutorial that demonstrates the fundamentals of the UART (Universal Asynchronous Receiver-Transmitter) serial communication protocol in a visual, easy-to-understand way.

This repository contains the code for the transmitter, which is an Arduino program that flashes an LED to send the message "Hello World" using a standard UART signal at a very slow, human-readable baud rate.

By watching the LED, you can literally see the data bits (including the start and stop bits) being transmitted. This project turns an abstract digital protocol into a visible light show.

### What You Will Learn:

* How the UART serial communication protocol frames data with start and stop bits.
* How to create a software-based UART transmitter on an Arduino.
* How data is broken down into a sequence of bits for transmission.

### Hardware Requirements:

  1 x Arduino (Uno, Nano, etc...)</br>
  1 x LED</br>
  1 x 220 Ohm Resistor</br>
  2 x Jumper wires</br>
  (Optional) A breadboard for easy prototyping</br>

### How to Use:

  1. Connect the anode (positive, longer leg) of the LED to Digital Pin 8 on the Arduino via the 220 Ohm resistor.
  
  2. Connect the cathode (negative, shorter leg) of the LED to the GND (Ground) pin on the Arduino.

### Part 2: The Decoder:

The second part of this project is a Flutter application that will use a smartphone's camera to watch the LED, and decode the light pulses from our UART signal.

### Part 2 Repository: [https://github.com/amartig16/UART-LED-Visual-Demonstrator---Part-2-Mobile-Decoder]
