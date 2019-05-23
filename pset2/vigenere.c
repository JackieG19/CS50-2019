#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j] != '\0'; j++)
            {
                if (isalpha(argv[i][j]) == false)
                    {
                        printf("Usage: ./vigenere keyword\n");
                        return 1;
                    }
            }
        }
    }

    string plainText = get_string("plaintext: ");

    printf("ciphertext: ");

    string key = argv[1];

    int klength = strlen(key);

    int ptlength = strlen(plainText);

    for (int j = 0, counter = 0; j < ptlength; j++)
    {
        int keyvalue = tolower(key[counter % klength]) - 'a';

        if (isalpha(plainText[j]))
        {
            if (isupper(plainText[j]))
            {
                printf("%c", (((plainText[j] - 'A') + keyvalue) % 26) + 'A');
                counter++;
            }

            else
            {
                printf("%c", (((plainText[j] - 'a') + keyvalue) % 26) + 'a');
                counter++;
            }
        }
        else
        {
            printf("%c", plainText[j]);
        }
    }
    printf("\n");

}
