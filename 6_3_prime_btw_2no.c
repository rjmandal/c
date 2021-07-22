main()
{
    int no1, no2, i , s;
    printf("enter the numbers to print prime no between them \nstart from = ");
    scanf("%d", &no1);
    printf("ending = ");
    scanf("%d", &no2);
    while (no1 <= no2)
    {
        i=2;
        while (i < no1)
        {
            s = no1 % i;
            if (s == 0)
                break;
            i++;
        }
        if (s != 0)
            printf("%d \n", no1);
        no1++;
    }
}