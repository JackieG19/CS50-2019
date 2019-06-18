#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    char* infile = argv[1]; // check argument in file is vaild

    // if the arguments is true
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover card.raw\n");
        return 1; //  will return integer value 1
    }

    // open input file
    FILE *inptr = fopen(argv[1], "r");

    if (inptr == NULL) // if opening file does not succeed
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    int count = 0; // set counter for file

    // Buffer for fread to store each block
    unsigned char block[512];

    FILE *outptr = NULL; // output file

// while to counts each byte of the file to know how many total bytes are in the file
    while (fread(block, 1, 512, inptr) != 0x00)
    {
        if (block[0] == 0xff && block[1] == 0xd8 && block[2] == 0xff && (block[3] & 0xf0) == 0xe0)
        {

            if (outptr != NULL) // if the output is true to null
            {
                fclose(outptr); // close the file
            }

            char outfile[8];
            sprintf(outfile, "%03d.jpg", count++);
            outptr = fopen(outfile, "w");

            if (outptr == NULL)
            {
                fclose(inptr);
                fprintf(stderr, "Could not create %s.\n", outfile);
                return 3;
            }

            fwrite(block, 1, 512, outptr);

        }
        else if (outptr != NULL) // if the output is true to null
        {
            fwrite(block, 1, 512, outptr);
        }
    }
    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}

// typedef uint8_t BYTE;

// BYTE buffer = malloc(sizeof(BYTE)*512);
    // int x = 0xe1;
    // if(x >= 0xe0 && x <= 0xef) // greater than
    // {
    //     printf("the number is in the range 0xe0 - 0xef\n");
    // }
    // else
    // {
    //     printf("the number is outside the range\n");
    // }

