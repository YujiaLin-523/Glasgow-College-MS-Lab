#include "mbed.h"
#include "platform/mbed_thread.h"

AnalogOut Aout(A4);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        Aout = 0.15;
        thread_sleep_for(2000);
        Aout = 0.30;
        thread_sleep_for(2000);
        Aout = 0.61;
        thread_sleep_for(2000);
        Aout = 0.76;
        thread_sleep_for(2000);
    }
}
