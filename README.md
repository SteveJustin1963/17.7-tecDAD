### ADC ADC0809
tec times (issue 16) page 26 https://github.com/SteveJustin1963/tec-BOOKS/blob/master/TE/Mag/tec_times_1990_03.pdf only a circit is shown , no notes on use or code.
 
![](https://github.com/SteveJustin1963/tec-ADC-DAC/blob/master/pics/cct1.png)
 
ADC with a resolution of 8 bits can encode an analog input to one in 256 different levels (28 = 256). The values can represent the ranges from 0 to 255 (i.e. as unsigned integers) or from −128 to 127 (i.e. as signed integer), depending on the application. https://en.wikipedia.org/wiki/Analog-to-digital_converter
An analog-to-digital converter (ADC) is used to convert an analog signal such as voltage to a digital form so that it can be read and processed by a microcontroller. Most microcontrollers nowadays have built-in ADC converters. our tec-1 with a z80 lacks this. 

ADC0809 is a CMOS process 8-channel, 8-bit successive approximation A / D converter manufactured by National Semiconductor. It has an internal 8-channel multiplexer that can latch the decoded signal based on the address code and only one gate of the eight analog input signals for A / D conversion at a time. Is currently the most widely used 8 general-purpose A / D chip. 

 

### DAC DAC0808
- feed into Cathod Ray Tube, TV etc, via a driver cct, https://easyeda.com/editor#id=89e45a1c31a44702ab1ef81ac46d8552
- feed into CRO



