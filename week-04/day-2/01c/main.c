#include <stdio.h>
#include <stdint.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

int main() {
    struct Computer computer = {3.2, 8, 32};

    //TODO: Change the bits to 64

    //TODO: print out the structure members
    computer.bits = 64;

    printf("The computer's CPU speed is: %.1f GHz.\nThe RAM's size is: %d GB.\nThe system is working on %d bits.\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

    return 0;
}
