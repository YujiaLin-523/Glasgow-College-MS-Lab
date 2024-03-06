#include "mbed.h"
#include "platform/mbed_thread.h"

PwmOut d6(D6);

int main() {
  d6.period(0.001f);
  d6.write(0.50f);
  while (1);
}
