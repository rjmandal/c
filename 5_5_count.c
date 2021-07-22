main()
{
    int no,i=1,count=0;
    printf("enter the no to count digit ==>> ");
    scanf("%d",&no);
    while(no>0)
    {
        no=no/10;
        // printf("%d\n",no);
        count++;
        // printf("%d\n",count);
    
    }
    printf("%d",count);
}