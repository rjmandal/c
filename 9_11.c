main()
{
    int no, r;
    printf("enter the no to know its prime or not \nno == ");
    scanf("%d", &no);
    r = prime(no);
    printf("%d", r);
}
int prime(int n)
{
    int i = 2, r;
    while (i < n)
    {
        r = n % i;
        if (r == 0)
        
            break;
        
        i++;
    }
    if (r == 0)
        return 0;
    else
        return 1;
}
