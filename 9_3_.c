void natural(int n);
main()
{
    int n;
    printf("enter the n no to print n no of naural no\nn =  ");
    scanf("%d",&n);
    natural(n);       
    getch();
}
void natural(int n)
{
for(int i=1;i<=n;i++)
{
    printf("%d\n",i);
}
}