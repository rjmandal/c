main()
{
    int no,y,n,r=0;
    printf("enter the no to reverse the digit of no ==>> ");
    scanf("%d",&no);
    while(no>0)
    {
        n=no%10;
        no=no/10;
        r=r*10+n;
    // printf("%d\n",r);
    }
    printf("%d",r);
}