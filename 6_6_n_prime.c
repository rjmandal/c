main()
{
    int no,no1=2,count=1,i, s;
    printf("enter the no print n prime no \nno ==>> ");
    scanf("%d", &no);
    while (count<=no)
    {
        i = 2;
        while (i < no1)
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
            printf("%d\n", no1);
            count++;
        }
        no1++;
    }
}