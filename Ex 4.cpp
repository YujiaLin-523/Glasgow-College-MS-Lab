#include "mbed.h"
#include "platform/mbed_thread.h"

DigitalOut A(D5);
DigitalOut B(D6);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        // 第一个
        A = 1; 
        B = 1;
        thread_sleep_for(1000);
        // 第二个
        A = 0;
        B = 0;
        thread_sleep_for(1000);
        // 第三个
        A = 1;
        B = 0;
        thread_sleep_for(1000);
        // 第四个
        A = 0;
        B = 1;
        thread_sleep_for(1000);
    }
}
