https://www.8051projects.net/wiki/ADC0808_Interfacing_Tutorial


#include <reg51.h>
 
#define ALE		P3_4
#define OE		P3_7
#define START		P3_5
#define EOC		P3_6
#define SEL_A		P3_1
#define SEL_B		P3_2
#define SEL_C		P3_3
#define ADC_DATA	P1
 
void main()
{
	unsigned char adc_data;
 
	/* Data port to input */
	ADC_DATA = 0xFF;
 
	EOC = 1; /* EOC as input */
	ALE = OE = START = 0;
 
	while (1) {
		/* Select channel 1 */
		SEL_A = 1; /* LSB */
		SEL_B = 0;
		SEL_C = 0; /* MSB */
 
		/* Latch channel select/address */
		ALE = 1;
 
		/* Start conversion */
		START = 1;
 
		ALE = 0;
		START = 0;
	
		/* Wait for end of conversion */
		while (EOC == 1);
		while (EOC == 0);
 
		/* Assert Read signal */
		OE = 1;
	
		/* Read Data */
		adc_data = ADC_DATA;
	
		OE = 0;
 
		/* Now adc data is stored */
		/* start over for next conversion */
	}
}

