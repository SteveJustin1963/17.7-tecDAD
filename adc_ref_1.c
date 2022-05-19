// Start
// Initialize ADC
// Read ADC value
// Convert ADC value to voltage
// Display voltage on LCD
// End


#include < reg51.h> 
#include "lcd.h"  	 
#include "ds1307.h" 
#include "i2c.h"
#include "delay.h"
#include"stdutils.h"
#include< stdio.h>
sbit ADDA     =P2^0;  //Address pins for selecting input channels.
sbit ADDB     =P2^1;
sbit ADDC     =P2^2;
sbit ALE   =P2^3;  
sbit OE    =P2^4; 
sbit EOC   =P2^5;  
sbit START =P2^6; 
sbit clk       =P2^7;  
#define ADCPORT P1  //ADC Data port
 int ADCValue, adcresult[3],number;
 float volt;
void ADC_Init(void)
{
    ADDA=0;        //Initialize all the control lines to zero.
    ADDB=0;
    ADDC=0;
    ADCPORT=0xff;   //configure adc_databus as input
	  EOC=1;
    ALE=0;
    OE=0;
    START=0;
}
ADC_Read()
{
   ADCValue=0;
   ALE=1;
   START=1;
   delay_us(1);
   ALE=0;
   START=0;
   while(EOC==1);
   while(EOC==0);
   OE=1;
   ADCValue=ADCPORT;
   delay_us(1);
   OE=0;;

  }

void timer0() interrupt 1 
{
    clk=~clk;
}


/* main program */
void main() 
{
	  
    TMOD=0x02;
    TH0=0xFD;
    lcd_Init();
	  IE=0x82;
    TR0=1;
    lcd_DisplayString(" MICRODIGISOFT ");
    lcd_Line_posnY();
    lcd_DisplayString("ADC0808 with LCD");
	  delay_ms(1000);
	  lcd_Clear();
    while(1)
    {
		 ADC_Init();        //Initialize the ADC module
     ADC_Read();       // Read the ADC value of channel zeroO
		 sprintf(adcresult," %d",ADCValue);
		 lcd_DisplayString(" ADC Reading:");
		 lcd_Line_posnY();
     lcd_DisplayString(adcresult);
		 ADCValue=0;
     delay_ms(5000);
		 lcd_Clear();
     }
}

explain line by line what the above program is doing


 

1. #include < reg51.h> 
-The header file reg51.h contains the definition of all special function registers of 8051.

2. #include "lcd.h"  	 
-This header file contains the prototypes of all the functions used for interfacing with the LCD.

3. #include "ds1307.h" 
-This header file contains the prototypes of all the functions used for interfacing with the DS1307 RTC.

4. #include "i2c.h"
-This header file contains the prototypes of all the functions used for interfacing with the I2C.

5. #include "delay.h"
-This header file contains the prototypes of all the functions used for providing delay.

6. #include"stdutils.h"
-This header file contains the prototypes of all the functions used for performing various utility functions.

7. #include < stdio.h>
-This header file contains the prototypes of all the standard input/output library functions.

8. sbit ADDA     =P2^0;  //Address pins for selecting input channels.
sbit ADDB     =P2^1;
sbit ADDC     =P2^2;
sbit ALE   =P2^3;  
sbit OE    =P2^4; 
sbit EOC   =P2^5;  
sbit START =P2^6; 
sbit clk       =P2^7;
-These lines define variables corresponding to the control pins of the ADC.

9. #define ADCPORT P1  //ADC Data port
-This line defines the port to which the ADC data pins are connected.

10. int ADCValue, adcresult[3],number;
float volt;
-These lines define variables used in the program.

11. void ADC_Init(void)
-This function is used to initialize the ADC module.

12. ADC_Read()
-This function is used to read the ADC value of the selected channel.

13. void timer0() interrupt 1 
-This function is used as the interrupt service routine for timer0 interrupt.

14. void main() 
-This is the main function where the program execution starts.

15. TMOD=0x02;
TH0=0xFD;
-These lines set the timer0 in mode2(auto-reload) and load the initial value in it.

16. lcd_Init();
-This function is used to initialize the LCD.

17. IE=0x82;
-This line enables timer0 and external interrupt0 interrupts.

18. TR0=1;
-This line starts the timer0.

19. lcd_DisplayString(" MICRODIGISOFT ");
lcd_Line_posnY();
lcd_DisplayString("ADC0808 with LCD");
-These lines display a message on the LCD.

20. delay_ms(1000);
lcd_Clear();
-These lines provide a delay of 1 second and clear the LCD.

21. while(1)
-This loop runs continuously.

22. ADC_Init();        //Initialize the ADC module
-This function initializes the ADC module.

23. ADC_Read();       // Read the ADC value of channel zeroO
-This function reads the ADC value of channel zero.

24. sprintf(adcresult," %d",ADCValue);
-This statement stores the ADC value read in the string variable adcresult.

25. lcd_DisplayString(" ADC Reading:");
lcd_Line_posnY();
lcd_DisplayString(adcresult);
-These lines display a message along with the ADC value on the LCD.

26. ADCValue=0;
-This statement resets the ADCValue variable.

27. delay_ms(5000);
lcd_Clear();
-These lines provide a delay of 5 seconds and clear the LCD.
