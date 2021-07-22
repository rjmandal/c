main()
{
    int i=1,no,r;
    printf("enter the no how much first even no you want in rev ==>> ");
    scanf("%d",&no);
    r=no;
        no=2*no;
    while(i<=r)
    {
        
        printf("%d\n",no);
        no--;
        no--;
        i++;
    }
}