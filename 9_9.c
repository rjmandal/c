int fact(int n);
main()
{
    int n, r,f;
    printf("enter the no to know factorial \nn =  ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);
    f = fact(n)/fact(n-r);
    printf("permutation is %d\n", f);
}
int fact(int no)
{
    int f=1;
    for(int i=1;i<=no;i++)
    {
        f=f*i;
    }
    return f;
}