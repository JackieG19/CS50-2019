#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string plainText = get_string("plaintext: ");
    //char cipherText;
    printf("ciphertext: ");

    string key = argv[1];

    for (int i = 0; i < strlen(key); i++)
    {
        printf("%i", isalpha(key[0]));

        if (argc != 2 || isalpha(key[0]) == 0)
        {
            printf("Usage: ./vigenere key\n");
            return 1;
        }

    }
    
    

    for (int j = 0, n = strlen(plainText); j < n; i++)
    {
        if(isupper(plainText[j]))
        {
            printf(((plainText[j] - 65) + key % 26) + 65);
            i++;
        }

    }
    printf("\n");

}
