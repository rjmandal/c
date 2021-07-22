main()
{
    int no,r=1,i=1,sum=0;
    printf("enter the no of elements for sum of odd n natural no ==>> ");
    scanf("%d",&no);
    while(i<=no)
    {
        // printf("%d\n",r);
        sum=sum+r;
        r+=2;
        i++;
    }
        printf("%d\n",sum);
}