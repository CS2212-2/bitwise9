#include <stdio.h>

int main (void) {
    unsigned int value = 71184592; // Secret key :-)

    for (unsigned int shift = 0; shift < 28; shift += 7)
        printf ("%c", (value >> shift) & 0x7f);
    putchar ('\n');

    return 0;
}
