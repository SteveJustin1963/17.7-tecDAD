### ADC ADC0809 - input
tec times (issue 16) page 26 https://github.com/SteveJustin1963/tec-BOOKS/blob/master/TE/Mag/tec_times_1990_03.pdf only a circit is shown , no notes on use or code.
 
![](https://github.com/SteveJustin1963/tec-ADC-DAC/blob/master/pics/cct1.png)

Basically an analogue to digital converter takes a snapshot of an analogue voltage at one instant in time and produces a digital output code which represents this analogue voltage. ADC with a resolution of 8 bits can encode an analog input to one in 256 different levels (28 = 256). The values can represent the ranges from 0 to 255 (i.e. as unsigned integers) or from −128 to 127 (i.e. as signed integer), depending on the application. https://en.wikipedia.org/wiki/Analog-to-digital_converter
An analog-to-digital converter (ADC) is used to convert an analog signal such as voltage to a digital form so that it can be read and processed by a microcontroller. Most microcontrollers nowadays have built-in ADC converters. our tec-1 with a z80 lacks this. The ADC on the Arduino is a 10-bit ADC meaning it has the ability to detect 1,024 (2^10) discrete analog levels. 

ADC0809 is a CMOS process 8-channel, 8-bit successive approximation A / D converter manufactured by National Semiconductor. It has an internal 8-channel multiplexer that can latch the decoded signal based on the address code and only one gate of the eight analog input signals for A / D conversion at a time. Is currently the most widely used 8 general-purpose A / D chip. 
1) 8 input channels, 8-bit A / D converter, the resolution is 8 bits.
2) has a conversion start and stop control.
3) Conversion time is 100μs (clock is 640kHz), 130μs (clock is 500kHz)
4) internal structure. ADC0809 is a CMOS monolithic successive approximation A / D converter, the internal structure shown in Figure 13.22, which consists of 8 analog switches, address latch and decoder, comparator, 8-bit switch tree A / D converter Device, successive approximation register, logic control and timing circuit.
5) ADC0809's external features (pin function)
- ADC0809 chip has 28 pins, dual in-line package, as shown in Figure 13.23. The following describes each pin function.
- IN0 ~ IN7: 8 analog inputs.
- 2-1 ~ 2-8: 8-bit digital output.
- ADDA, ADDB, ADDC: 3-bit address input lines for gating one of the 8 analog inputs 
- ALE: Address latch enable signal, input, active high.
- START: A / D conversion start pulse input, enter a positive pulse (at least 100ns wide) to start (pulse rising edge 0809 reset, falling edge start A / D conversion).
- EOC: A / D conversion end signal, output, when the A / D conversion is completed, this terminal outputs a high level (during the conversion has been low).
- OE: Data output enable signal, input, active high. When the A / D conversion is finished, this end input a high level, in order to open the output tri-state gate, the output digital.
- CLK: clock input. Requirements clock frequency is not higher than 640KHZ.
- REF (+), REF (-): Reference voltage.
- Vcc: power supply, single + 5V.
- GND: ground.
 
 ### uses
 1. To convert an audio signal from analogue to digital form
2. To convert a video signal from analogue to digital form
3. To convert a telephone signal from analogue to digital form
4. To convert a data signal from analogue to digital form
5. To convert a radio signal from analogue to digital form
6. To convert a microwave signal from analogue to digital form
7. To convert a satellite signal from analogue to digital form
8. To convert a wireless signal from analogue to digital form
9. To convert an optical signal from analogue to digital form
10. To convert a cable television signal from analogue to digital form
11. To convert a CCTV signal from analogue to digital form
12. To convert a computer monitor signal from analogue to digital form
13. To convert a printer signal from analogue to digital form
14. To convert a keyboard signal from analogue to digital form
15. To convert a joystick signal from analogue to digital form
16. To convert a scanner signal from analogue to digital form
17. To convert a photocopier signal from analogue to digital form
18. To convert a facsimile signal from analogue to digital form
19. To convert an audio tape signal from analogue to digital form
20. To convert a video tape signal from analogue to digital form

### uses for an  analogue to digital converter with robotics

1. To control a robotic arm
2. To read data from sensors
3. To interface with a computer
4. To control a motor
5. To read a switch position
 
### uses for an  analogue to digital converter with neural biology

1. Measuring and recording electrical activity in neurons
2. Measuring and recording neurotransmitter levels
3. Measuring and recording electrical activity in the brain
4. Measuring and recording blood flow in the brain
5. Measuring and recording electrical activity in muscles
 
### analogue to digital converter with cnc equipment

1. To convert an analogue signal from a CNC machine into a digital signal that can be read by a computer.
2. To improve the accuracy of a CNC machine by converting analogue signals into digital signals.
3. To increase the speed of a CNC machine by converting analogue signals into digital signals.
4. To allow a CNC machine to be controlled by a computer program.

### Digital Signal Processors (DSPs) this is huge

The ADC can feed into special purpose microprocessors DSPs. This is where digital advantages take off. https://en.wikipedia.org/wiki/Digital_signal_processing They are used in every form of electronic product, from mobile phones and CD players to the automotive industry; medical imaging systems to the electronic battlefield and from dishwashers to satellites. Even the common optical mouse uses DSP. The DSP detects patterns in the images and examines how the patterns have moved since the previous image. Based on the change in patterns over a sequence of images, the DSP determines how far the mouse has moved and sends the corresponding coordinates to the computer. This feature can be extended into aerial videography to tell a drone how far its moved over a land image, or how much closer its to a target. Or help a simple robot see movement without to much image detail, for tracking or gesture recognition. 

- Voice control  US516P6 microcontroller 
It is a voice control module.SU-03T is a low-cost,low-power,small-size offline voice recognition module,which can be quickly applied to smart homes,all kinds of smart home appliances,toys,lamps and other products that require voice control.


### DAC DAC0808 - output
- feed into Cathode Ray Tube, TV etc, via a driver cct, https://easyeda.com/editor#id=89e45a1c31a44702ab1ef81ac46d8552
- feed into CRO
- to control the needle of a scanning electron microscope
- 

### Ref
- https://microdigisoft.com/microcontroller-8051-interfacing-adc0808-adc0809-with-microcontroller-at89s52/
- 


