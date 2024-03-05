#include "mbed.h"
#include "platform/mbed_thread.h"


DigitalOut RED(D5);
DigitalOut GREEN(D6);

int main()
{
    while(1)
    {
        RED = 1;
        GREEN = 0;
        thread_sleep_for(1000);
        RED = 0;
        GREEN = 1;
        thread_sleep_for(1000);
    }
}
