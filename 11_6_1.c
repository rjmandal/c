
main()
{
    int a[10], i, t, r;
    printf("enter 10 elements of array to sort them ==>>\n");

    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    for (r = 0; r <= 8; r++)    
    {
        for (i = 0; i <= 9 - r; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i+1] = t;
            }
        }
    }

    for (i = 0; i <= 9; i++)
        printf("%d", a[i]);
}