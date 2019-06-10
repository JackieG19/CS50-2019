#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char* infile = argv[1];

    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover card.raw\n");
        return 1;
    }

    // open input file
    FILE* inptr = fopen(infile, "r");
    // open card.raw programmatically with fopen provided argv[1] exists.

    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // Using 'unsigned' for 0 to 255 bytes
    unsigned char buffer[512];

    // Initialize file name and img_file
    char filename[8];
    FILE *img_file;

    if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xf0) == 0xe0)
    {

    }

    // read file returns number of elements successfully read
    // fread(buffer, 1, 512, raw_file)
