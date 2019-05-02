#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do // does something first, then checks a condition, and repeats until the condition is no longer true.
    {
        height = get_int("Pick a number between 1 - 8: ");  // user enters number
    }
    while (height < 1 || height > 8); // will only accept numbers 1 through 8
    
    for (int i = 0; i < height; i++) // 0 lesser then the height entered by user and increment
    {
        for (int spaces = 0; spaces < height - i - 1; spaces++) 
        // space satrts at 0, space is lesser than the height and increment
        {
            printf(" ");
        }

        for (int hashes = 0; hashes < (i + 1); hashes++) // hashes starting at 0; 0 lesser than 1 and increment
        {
            printf("#");
        }

        printf("\n");
    }
}
