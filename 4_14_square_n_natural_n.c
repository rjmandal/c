main()
{
    int no,r,i=1;
    printf("how much elements you want to square a natural no enter the no of elements ==>> ");
    scanf("%d",&no);
    while(i<=no)
    {
        r=i*i;
        printf("%d\n",r);
        i++;
    }
}