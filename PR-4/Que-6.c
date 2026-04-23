#include <stdio.h>

int main()
{
    int i, j;

    //? Starting the main loop
    for (i = 1; i <= 5; i++)
    {
        //! Starting the loop for inclination
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        //! Starting the loop for space
        for (j = 5 - i; j >= 1; j--)
        {
            printf("    ");  
        }

        //! Starting the loop for declination
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        //? Printing next loop
        printf("\n");
    }

    return 0;
}
