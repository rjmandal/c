#include <stdio.h>
#include <conio.h>
main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j >= i && j <= 4)

                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}