main()
{
    int no, i = 2, s1;
    printf("enter no to know its all prime factors \nno1 ==>> ");
    scanf("%d", &no);
    while (i <= no)
    {
        s1 = no % i;
        if (s1 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    if (s1 != 0)
        printf("no prime n0");
}