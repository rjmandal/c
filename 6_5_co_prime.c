main()
{
    int no1, no2, no, i = 2, s1, s2;
    printf("enter to no to check wether it is co prime or not \nno1 ==>> ");
    scanf("%d", &no1);
    printf("no2 ==>> ");
    scanf("%d", &no2);
    // if (no1 > no2)
    //     no = no1;
    // if (no1 < no2)
    //     no = no2;
    while (i < (no1<no2?no1:no2))
    {
        s1 = no1 % i;
        s2 = no2 % i;
        if (s1 == 0 && s2 == 0)
        {
            break;
        }
        i++;
    }
    if (i==no1||i==no2)
        printf("co prime");
    else
    {
        printf("not co prime");
    }
}