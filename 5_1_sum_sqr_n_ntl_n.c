main()
{
    int no,r,i=1,sum=0;
    printf("how much elements you want to sum ofsquare of natural no enter the no of elements ==>> ");
    scanf("%d",&no);
    while(i<=no)
    {
        r=i*i;
        i++;
        sum=sum+r;
    }
        printf("%d\n",sum);
}