main()
{
    int no1, no2, no, i = 1, s1, s2, hcf = 0;
    printf("enter to no to know its HCF \nno1 ==>> ");
    scanf("%d", &no1);
    printf("no2 ==>> ");
    scanf("%d", &no2);
    while (i <= (no1 < no2 ? no1 : no2))
    {
        s1 = no1 % i;
        s2 = no2 % i;
        if (s1 == 0 && s2 == 0)
        {
            hcf = i;
        }
        i++;
    }
        printf("hcf is %d", hcf);
}