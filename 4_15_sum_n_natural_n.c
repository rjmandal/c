main()
{
    int no,r,i=1,sum=0;
    printf("enter the no of element of natural no to get the sum of natural no ==>> ");
    scanf("%d",&no);
    while(i<=no)
    {
        sum=sum+i;
        i++;
    }
        printf("%d\n",sum);
}