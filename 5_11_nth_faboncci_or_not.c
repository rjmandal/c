main()
{
    int n, i = 1, a = -1, b = 1, c;
    printf("enter the no to know it is present on faboncci series or not ==>> ");
    scanf("%d", &n);
    while (i <= n)
    {
        c = a + b;
        if (n==c)
        {
            break;
        }
        a = b;
        b = c;
        i++;
    }
    if (c == n)
        printf("%d is a term in faboncci series", n);
    else
        printf("%d is not a term in faboncci series", n);
}