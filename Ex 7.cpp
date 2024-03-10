#include "mbed.h"

// main() runs in its own thread in the OS
AnalogOut a4(A4);
int main()
{
    while (1) {
        for (float v=0; v <= 0.909; v += 0.01) {
        a4 = v;
        wait_us(100);
        }
    }
}