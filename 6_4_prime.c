main()
{
    int no1, i = 2, s;
    printf(" prime no after the no \nno1 ==>> ");
    scanf("%d",&no1);
    // printf("no2 ==>> ");
    // scanf("%d",&no2);
    while (1)
    {
        no1++;
        i=2;
        while (i <no1)
        {
            s = no1 % i;
            if (s == 0)
            {
                break;
            }
            i++;
        }
        if (s != 0)
        {
            printf("%d", no1);
            break;
        }
    }
}