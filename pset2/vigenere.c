#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2 || isalpha(argv[1][0]))
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    char cipherText;
    printf("ciphertext: ");

    int key = argv[1][0];
    printf("%i\n", key);

    char c = '\0'; // the character with value zero

    if (islower(c))
    {
        c -= 97;
    }

    else if (isupper(c))
    {
        c -= 65;
    }

    return c;


    printf("\n");
}
