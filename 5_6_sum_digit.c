main()
{
    int no,n,sum=0;
    printf("enter the the no to sum the digit of no ==>> ");
    scanf("%d",&no);
    while(no>0)
    {
        n=no%10;
        no=no/10;
    // printf("%d\n",no);
        sum=sum+n;

    }
    printf("%d",sum);
}