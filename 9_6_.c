int natural(int n);
main()
{
    int n,s;
    printf("enter the n no to print sum of square of first n natural no\nn =  ");
    scanf("%d", &n);
   s = natural(n);
    getch();
}
int natural(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
       sum = sum+i*i;
    }
        printf("%d\n", sum);
        return sum;
}