#include "mbed.h"           //includes the mbed library

DigitalOut greenLED(LED1);  //creates an object called greenLED which is assigned to LED1 (PB_0) as a digital output

int main()
{
    while (true) {          //while current perameters stay the same the loop will repeat itself

        greenLED = 1;       //sets power to ON causing LED1 to turn on

        wait_us(100000);    //waits 1 second before continuing

        greenLED = 0;       //sets power to OFF causing the LED to turn off

        wait_us(1000000);   //waits 1 second
    
    }
}

