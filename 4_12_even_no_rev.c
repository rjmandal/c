main()
{
    int i=1,no,r;
    printf("enter the no how much first odd no you want in rev ==>> ");
    scanf("%d",&no);
    r=no;
        no=2*no-1;
    while(i<=r)
    {
        
        printf("%d\n",no);
        no--;
        no--;
        i++;
    }
    
    // else
    // {
    //     no=2*no-1;
    // while(i<=r)
    // {
    //     printf("%d\n",no);
    //     no--;
    //     no--;
    //     i++;
    // }
        
    // }
    
}