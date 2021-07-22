// main()
// {
//     int i, j;
//     for (i = 1; i <= 4; i++)
//     {
//         for (j = 1; j <= 7; j++)
//         {
//             if (j <= 1 || j >= 7)
//                 printf("%c", 65);

//             else if (i <= 3 && j == 2 || j == 6 && i <= 3)
//                 printf("%c", 66);

//             else if (i <= 2 && j == 3 || j == 5 && i <= 2)
//                 printf("%c", 67);

//             else if (i <= 1 && j == 4)
//                 printf("%c", 68);

//             else
//                     printf(" ");
//         }
//         printf("\n");
//     }
//     getch();
// }
// aternative method

main()
{
    int i, j;
    char c;
    for (i = 1; i <= 4; i++)
    {
        c = 'A';
        for (j = 1; j <= 7; j++)
        {

            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%c", c);
                j < 4 ? c++ : c--;
            }
            else
            {
                printf(" ");
                if (j == 4)
                    c--;
            }
        }
        printf("\n");
    }
    getch();
}
