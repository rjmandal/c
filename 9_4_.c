void natural(int n);
main()
{
    int n;
    printf("enter the n no to print n no of even natural no\nn =  ");
    scanf("%d",&n);
    natural(n);       
    getch();
}
void natural(int n)
{
    int no=0;
for(int i=1;i<=n;i++)
{
    printf("%d\n",no);
    no++;
    no++;
}
}