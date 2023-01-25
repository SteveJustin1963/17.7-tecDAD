### ADC ADC0809 - input
tec times (issue 16) page 26 https://github.com/SteveJustin1963/tec-BOOKS/blob/master/TE/Mag/tec_times_1990_03.pdf only a circit is shown , no notes on use or code.
 
![](https://github.com/SteveJustin1963/tec-ADC-DAC/blob/master/pics/cct1.png)

Basically an analogue to digital converter takes a snapshot of an analogue voltage at one instant in time and produces a digital output code which represents this analogue voltage. ADC with a resolution of 8 bits can encode an analog input to one in 256 different levels (28 = 256). The values can represent the ranges from 0 to 255 (i.e. as unsigned integers) or from −128 to 127 (i.e. as signed integer), depending on the application. https://en.wikipedia.org/wiki/Analog-to-digital_converter
An analog-to-digital converter (ADC) is used to convert an analog signal such as voltage to a digital form so that it can be read and processed by a microcontroller. Most microcontrollers nowadays have built-in ADC converters. our tec-1 with a z80 lacks this. The ADC on the Arduino is a 10-bit ADC meaning it has the ability to detect 1,024 (2^10) discrete analog levels. 

## ADC0809 
is an 8-channel, 8-bit A/D converter manufactured by National Semiconductor. It has an internal multiplexer, a resolution of 8 bits, and a conversion time of 100μs (clock is 640kHz), 130μs (clock is 500kHz). It is a CMOS monolithic successive approximation A/D converter and has 28 pins, dual in-line package. It has various input and output pins including 8 analog inputs, 8-bit digital output, address input lines, control signals for conversion start and stop, clock input and reference voltage pins. It uses a single +5V power supply.
 
 ### uses
- audio signal
- cable television signal
- CCTV signal
- computer monitor signal
- data signal
- facsimile signal
- joystick signal
- keyboard signal
- microwave signal
- optical signal
- photocopier signal
- printer signal
- radio signal
- satellite signal
- scanner signal
- telephone signal
- video signal
- wireless signal

## with robotics
- robotic arm
- read data from sensors
- interface with a computer
- control a motor
- read a switch position

## with neural biology
- electrical activity in neurons
- neurotransmitter levels
- electrical activity in the brain
- blood flow in the brain
- electrical activity in muscles

## with cnc equipment
1. To convert an analogue signal from a CNC machine into a digital signal that can be read by a computer.
2. To improve the accuracy of a CNC machine by converting analogue signals into digital signals.
3. To increase the speed of a CNC machine by converting analogue signals into digital signals.
4. To allow a CNC machine to be controlled by a computer program.

## Digital Signal Processors (DSPs) this is huge
The ADC can feed into special purpose microprocessors DSPs. This is where digital advantages take off. https://en.wikipedia.org/wiki/Digital_signal_processing They are used in every form of electronic product, from mobile phones and CD players to the automotive industry; medical imaging systems to the electronic battlefield and from dishwashers to satellites. Even the common optical mouse uses DSP. The DSP detects patterns in the images and examines how the patterns have moved since the previous image. Based on the change in patterns over a sequence of images, the DSP determines how far the mouse has moved and sends the corresponding coordinates to the computer. This feature can be extended into aerial videography to tell a drone how far its moved over a land image, or how much closer its to a target. Or help a simple robot see movement without to much image detail, for tracking or gesture recognition. 

- Voice control  US516P6 microcontroller 
It is a voice control module.SU-03T is a low-cost,low-power,small-size offline voice recognition module,which can be quickly applied to smart homes,all kinds of smart home appliances,toys,lamps and other products that require voice control.


## DAC DAC0808 - output
- feed into Cathode Ray Tube, TV etc, via a driver cct, https://easyeda.com/editor#id=89e45a1c31a44702ab1ef81ac46d8552
- feed into CRO
- to control the needle of a scanning electron microscope
- 

## Ref
1. https://microdigisoft.com/microcontroller-8051-interfacing-adc0808-adc0809-with-microcontroller-at89s52/
- 


