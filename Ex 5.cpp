#include "mbed.h"
#include "platform/mbed_thread.h"

// 注意D7和D8在本实验中不可用，下列针脚分别对应a-g和DP
BusOut myleds(D2, D3, D4, D5, D6, D9, D10, D11);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        // 0
        myleds = 0x3F;
        thread_sleep_for(1000);
        // 1
        myleds = 0x6;
        thread_sleep_for(1000);
        // 2
        myleds = 0x5B;
        thread_sleep_for(1000);
        // 3
        myleds = 0x4F;
        thread_sleep_for(1000);
        // 4
        myleds = 0x66;
        thread_sleep_for(1000);
        // 5
        myleds = 0x6D;
        thread_sleep_for(1000);
        // 6
        myleds = 0x7D;
        thread_sleep_for(1000);
        // 7
        myleds = 0x7;
        thread_sleep_for(1000);
        // 8
        myleds = 0x7F;
        thread_sleep_for(1000);
        // 9
        myleds = 0x6F;
        thread_sleep_for(1000);
    }
}
