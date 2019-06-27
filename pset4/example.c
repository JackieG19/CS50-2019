#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

/// using the linked list method

typedef uint8_t BYTE;
BYTE buffer = malloc(sizeof(BYTE)*512);
    int x = 0xe1;
    if(x >= 0xe0 && x <= 0xef) // greater than
    {
        printf("the number is in the range 0xe0 - 0xef\n");
    }
    else
    {
        printf("the number is outside the range\n");
    }
