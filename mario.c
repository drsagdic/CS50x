#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, hash, space;
    do
    {
        //Ask height to user.
        height = get_int("Please enter a height: ");
    }
    //If height is equal or less than 0 or greater than 8 or a negative number, ask again.
    while (height <= 0 || height > 8);

    //Iterate the row from 0 to height.
    for (row = 0; row < height; row++)
    {
        //Calculate how many space(s) you need to print.
        hash = row + 1;
        for (space = height - hash; space > 0; space--)
        {
            //Print the space(s).
            printf(" ");
        }
        //Calculate how many hash(es) you need to print.
        for (hash = 1; hash < row + 2; hash++)
        {
            //Print the hash(es) and a newline.
            printf("#");
        }
        printf("\n");
    }
}