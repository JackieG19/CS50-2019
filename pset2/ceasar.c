#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string plainText = get_string("plainText: ");

    char cipherText;
    printf("ciphertext:  ");

    for (int i = 0, n = strlen(plainText); i < n; i++)
    {
        if (plainText[i] >= 'a' && plainText[i] <= 'z')
        {
            printf("%c", plainText[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", plainText[i]);
        }
    }
    printf("\n");
}
