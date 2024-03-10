#include "mbed.h"

DigitalOut led1(D3);
DigitalOut led2(D4);
DigitalOut led3(D5);
DigitalOut led4(D6);
AnalogIn Vin(A4);

int main()
{
    
    while (1)
    {
        //0 ~ 0.6V
        if (Vin <= 0.18)	
        {
            led1 = 0;
            led2 = 0;
            led3 = 0;
            led4 = 0;
        }

        //0.6V ~ 1.2V
        if (0.18 <= Vin && Vin < 0.36)	
        {
            led1 = 1;
            led2 = 0;
            led3 = 0;
            led4 = 0;
        }

        //1.2V ~ 1.8V
        if (0.36 <= Vin && Vin < 0.55)	
        {
            led1 = 1;
            led2 = 1;
            led3 = 0;
            led4 = 0;
        }
        
        //1.8V ~ 2.4V
        if (0.55 <= Vin && Vin < 0.73)	//1.8V ~ 2.4V
        {
            led1 = 1;
            led2 = 1;
            led3 = 1;
            led4 = 0;
        }

        // >2.4V
        if (Vin >= 0.73)	
        {
            led1 = 1;
            led2 = 1;
            led3 = 1;
            led4 = 1;
        }
    }
}
