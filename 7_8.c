main()
{
    int i, j;
    int c;
    for (i = 1; i <= 4; i++)
    {
        c = 1;
        for (j = 1; j <= 7; j++)
        {

            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d", c);
                j < 4 ? c++ : c--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}
