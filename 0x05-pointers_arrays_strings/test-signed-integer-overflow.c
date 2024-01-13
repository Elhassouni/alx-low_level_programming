#include <stdio.h>

int main() {
    int maxInt = 2147483647;  // Maximum representable value for a 32-bit signed int

    // Attempting to add 1 to the maximum value leads to overflow
    int overflowedValue = maxInt + 1;

    printf("Overflowed Value: %d\n", overflowedValue);

    return 0;
}

