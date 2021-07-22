void armstrong(int);
main()
{
    int no;
    printf("enter the no to know armstrong or not\nno ==  ");
    scanf("%d", &no);
    armstrong(no);
}
void armstrong(int n)
{
    int no = n, r = n, count = 0;
    float arm = 0;
    while (no > 0)
    {
        no = no / 10;
        count++;
    }
    while (n != 0)
    {
        arm = arm + pow(n % 10, count);
        n = n / 10;
    }
    if (r == arm)
        printf("armstrong no");
    else
        printf("not a armstrong no");
}
