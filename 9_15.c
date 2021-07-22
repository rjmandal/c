void armstrong(int,int);
main()
{
    int n1, n2;
    printf("enter the no to know the armstrong no btw your enterd no\nno1 ==  ");
    scanf("%d", &n1);
    printf("no2 == ");
    scanf("%d", &n2);
    armstrong(n1,n2);
}
void armstrong(int n1,int n2)
{
    while (n1 <= n2)
    {
        int c = n1, r = n1, i = n1, count = 0;
        float arm = 0;
        while (c > 0)
        {
            c = c / 10;
            count++;
        }

        while (r != 0)
        {
            arm = arm + pow(r % 10, count);
            r = r / 10;
        }
        if (i == arm)
            printf("arm = %f \n ", arm);
        n1++;
    }
}
