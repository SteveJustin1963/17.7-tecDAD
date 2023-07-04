#include <reg51.h>
#include "lcd.h"
#include "ds1307.h"
#include "i2c.h"
#include "delay.h"
#include "stdutils.h"
#include <stdio.h>

sbit ADDA     = P2^0;
sbit ADDB     = P2^1;
sbit ADDC     = P2^2;
sbit ALE      = P2^3;
sbit OE       = P2^4;
sbit EOC      = P2^5;
sbit START    = P2^6;
sbit clk      = P2^7;

#define ADCPORT P1

int ADCValue, adcresult[3], number;
float volt;

void ADC_Init(void)
{
    ADDA = 0;
    ADDB = 0;
    ADDC = 0;
    ADCPORT = 0xff;
    EOC = 1;
    ALE = 0;
    OE = 0;
    START = 0;
}

void ADC_Read(void)
{
    ADCValue = 0;
    ALE = 1;
    START = 1;
    delay_us(1);
    ALE = 0;
    START = 0;
    while(EOC == 1);
    while(EOC == 0);
    OE = 1;
    ADCValue = ADCPORT;
    delay_us(1);
    OE = 0;
}

void timer0() interrupt 1
{
    clk = ~clk;
}

void main() 
{
    TMOD = 0x02;
    TH0 = 0xFD;

    lcd_Init();
    IE = 0x82;
    TR0 = 1;

    lcd_DisplayString(" MICRODIGISOFT ");
    lcd_Line_posnY();
    lcd_DisplayString("ADC0808 with LCD");
    delay_ms(1000);
    lcd_Clear();

    while(1)
    {
        ADC_Init();
        ADC_Read();
        sprintf(adcresult, " %d", ADCValue);

        lcd_DisplayString(" ADC Reading:");
        lcd_Line_posnY();
        lcd_DisplayString(adcresult);

        ADCValue = 0;
        delay_ms(5000);
        lcd_Clear();
    }
}
