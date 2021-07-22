main()
{
    int no1,i = 1, s1, s2,f=0;
    printf("enter to no to know its all factor \nno1 ==>> ");
    scanf("%d", &no1);
    while (i <= no1)
    {
        s1 = no1 % i;
        if (s1 == 0)
        {
            f=i;
            printf(" %d\n", f);
        }
        i++;
    }
}