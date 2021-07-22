main()
{
    int n,i=1,a=-1,b=1,c;
    printf("enter the no to get the nth term of faboncci series of no ==>> ");
    scanf("%d",&n);
    while(i<=n)
    { 
        c=a+b;
        a=b;
        b=c;  
    i++;
    }
    printf("%d\n",c);
}