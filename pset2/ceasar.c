#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string plainText = get_string("plainText: ");

    char cipherText;
    printf("ciphertext:  ");

    int key = atoi(argv[1]);
    
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            if (isdigit(argv[i][j]) == false)
            {
                printf("Usage: %s key\n", argv[i]);
                return 1;
            }
        }
    }

    for (int i = 0, n = strlen(plainText); i < n; i++)
    {
        cipherText = plainText[i];

        if(isupper(plainText[i]))
        {
            cipherText = ((((plainText[i] + key) - 65) % 26) + 65);
        }

        if(islower(plainText[i]))
        {
            cipherText = ((((plainText[i] + key) - 97) % 26) + 97);
        }

        else if(isalpha(plainText[i]))
        {
            plainText[i] = cipherText;
        }

        printf("%c", cipherText);
    }
    printf("\n");
}
