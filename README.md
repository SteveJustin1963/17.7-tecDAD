## ADC0808 
is a commonly used ADC module for projects were an external ADC is required. It is a 28-pin Eight channel 8-bit ADC module. Meaning it can measure up to eight ADC value from 0V to 5V and the precision when voltage reference (Vref –pin 9) is +5V is 19.53mV (Step size).

- https://www.8051projects.net/wiki/ADC0808_Interfacing_Tutorial
 
![image](https://user-images.githubusercontent.com/58069246/214721523-ac13e231-cf55-4064-92a2-b0e21fcd756b.png)

need header files for "lcd.h", "ds1307.h", "i2c.h", "delay.h", and "stdutils.h" in your include path. 
ensure the pin assignments and delay functions align with your hardware configuration. 

The code also assumes that the functions for LCD display such as `lcd_Init()`, `lcd_DisplayString()`, `lcd_Line_posnY()`, and `lcd_Clear()` are implemented correctly in your "lcd.h" and corresponding "lcd.c". 

The `delay_us()` and `delay_ms()` functions are assumed to be correctly implemented in your "delay.h" and corresponding "delay.c" as well.

## ADC0808 - 8051
code for the C language and Forth. 

general guide

1. In C language:
    * Make sure that all the symbols (e.g., P3_4, P3_7, P1) are correctly defined in your "reg51.h" header file. 
    * Check if you are correctly handling the hardware, considering timings, and if the connected hardware matches the symbols used in the program.
    * Lastly, although it's not a "problem" in the code, remember that you're in an infinite while loop. The variable `adc_data` gets the ADC data, but it does nothing with it. You might want to use this data somehow, either by sending it to another function, printing it, or storing it.

2. In Forth:
    * Again, ensure that your hardware is correctly connected.
    * Check that the I/O functions you use (like `C!`, `P3!`, `C@`, `P3@`) have the expected behavior.
    * Similar to the C program, you read the ADC data, but you don't do anything with it after. You might want to use this value.

understand ur code: this is a low-level interface to an ADC0808 chip used for reading an analog signal. The values used for various settings are specific to that chip and would not be correct for other devices. So, this code would only work if you have that particular device correctly connected to your microcontroller.

## ADC0809
-tec_times_1990_03.pdf last page
there is no code in the document

![image](https://github.com/SteveJustin1963/tec-ADC-DAC/assets/58069246/1e3fb276-99ba-462e-b6aa-0d20eacc99e9)




