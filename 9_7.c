int natural(int n);
main()
{
    int n, s;
    printf("enter the no to know even or odd\nn =  ");
    scanf("%d", &n);
    s = natural(n);
    printf("%d\n", s);
}
int natural(int n)
{
    int r;
    if (n % 2 == 0)
        r = 1;
    else
        r = 0;
    return r;
}