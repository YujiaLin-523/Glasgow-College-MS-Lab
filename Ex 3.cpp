#include "mbed.h"
#include "platform/mbed_thread.h"

PwmOut d6(D6);
DigitalIn d5(D5);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        if (d5==1) {
        d6.period(0.002);
        d6.write(0.50);
        thread_sleep_for(100);
        }
        else {
        d6.period(0.005);
        d6.write(0.50);
        thread_sleep_for(100);
        }
    }
}