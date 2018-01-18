#include <stdio.h>
#include <stdlib.h>

#define buffer_s 512

int main(void)
{
    // opening memory card file
    FILE* input = fopen("card.raw", "r");
    if (input == NULL)
    {   fprintf(stderr,"Could not open card.raw.\n");

        return 1;
    }

    // creating buffer array
    unsigned char buffer[buffer_s];

    // file counter
    int filecount = 0;

    FILE* PICTURE = NULL;


    int jpeg = 0;

    // going through whole card untill there is no such file
    while (fread(buffer, buffer_s, 1, input) == 1)
    {
        // finding sign of a jpeg file
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0)
        {
            if (jpeg == 1)
            {
                // to close the picture and start a new one
                fclose(PICTURE);
            }
            else
            {
                // for first picture
                jpeg= 1;
            }

            char name[8];
            sprintf(name, "%03d.jpg", filecount);
            PICTURE = fopen(name, "w");
            filecount++;
        }

        if (jpeg == 1)
        {
            // writing of buffer
            fwrite(&buffer, buffer_s, 1, PICTURE);
        }

    }

    // close files
    fclose(input);
    fclose(PICTURE);

    return 0;
}