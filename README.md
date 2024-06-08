# LED Dimmer with Arduino:
 LED chaser using digital pins 2 through 11 on an Arduino Uno involves connecting LEDs to these pins and controlling them with a simple program. The project is straightforward and serves as an excellent introduction to Arduino programming and electronics.

## Components:
  - Arduino Board
  - 10 LEDs (for a sequence using pins 2 to 11)
  - 10 220Ω resistors (to limit the current through each LED)
  - Breadboard 
  - Jumper Wires

## Circuit Diagram
  ![Arduino Uno LED Chasing](https://raw.githubusercontent.com/Projectslearner/arduino-uno-led-chaser/main/Arduino_uno_led_chasing.png)

## Steps to Build the Circuit
  - Place LEDs on the Breadboard:
  - Insert 10 LEDs in a row on the breadboard, ensuring correct orientation with the longer leg (anode) being positive and the shorter leg (cathode) being negative.

### Connect Resistors:
  - Connect one end of a 220Ω resistor to the cathode (short leg) of each LED.
  - Connect the other end of the resistors to the ground (GND) rail on the breadboard.

### Wire the Anodes to Arduino:
  - Connect the anode (long leg) of each LED to a digital pin on the Arduino using jumper wires. Connect the LEDs to digital pins 2 through 11.

### Connect the Ground:
  - Connect the GND rail of the breadboard to one of the GND pins on the Arduino.
### LED Pin Assignments
  - LED 1: Digital Pin 2
  - LED 2: Digital Pin 3
  - LED 3: Digital Pin 4
  - LED 4: Digital Pin 5
  - LED 5: Digital Pin 6
  - LED 6: Digital Pin 7
  - LED 7: Digital Pin 8
  - LED 8: Digital Pin 9
  - LED 9: Digital Pin 10
  - LED 10: Digital Pin 11
---

## Sequential Lighting:
  - The LEDs connected to pins 2 through 11 light up one by one in a sequence from left to right. Each LED turns on for a short duration (e.g., 100 milliseconds), then turns off, and the next LED in the sequence lights up.
  - This creates a “chasing” or “running” light effect where it appears that a single light is moving across the row of LEDs.
## Reverse Chasing Effect:
  - After reaching the last LED in the sequence (LED 11), the LEDs light up in reverse order from right to left.
  - This creates a visual effect of the light “bouncing” back and forth along the row of LEDs
## Endless Chasing Loop:
  - The sequence described above (chasing from left to right and then right to left) continues in an endless loop as long as the Arduino is powered on and the program is running.
  - The LEDs continuously light up in the chasing sequence without any pause between cycles.
  - This creates a dynamic visual effect that can be observed continuously.
--- 
### Whether you're working on Electronics Projects, IoT applications, or robotics innovations, ProjectsLearner is your go-to platform for guidance and expertise.

🌐 [projectslearner.com](https://www.projectslearner.com)<br/>
📧 [Email Us](mailto:projectslearner@gmail.com)<br/>
📸 [Instagram](https://www.instagram.com/projectslearner/)<br/>
📘 [Facebook](https://www.facebook.com/projectslearner)<br/>
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)<br/>
📘[Linkedin](https://www.linkedin.com/in/projectslearner)<br/>

## Made for you with ❣️ from ProjectsLearner
