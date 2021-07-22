main()
{
    int n,i=1,a=-1,b=1,c;
    printf("enter the no of elemet to get the first n term of faboncii series ==>> ");
    scanf("%d",&n);
    while(i<=n)
    { 
        c=a+b;
    printf("%d\n",c);
        a=b;
        b=c;
    i++;
    }
}