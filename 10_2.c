main()
{
    int n;
    printf("enter the no to print n natural no in reverse \nn == ");
    scanf("%d",&n);
     int k=natural(n);
    
}
natural(int n)
{
   if(n==0)
   return 1;
       printf("%d\n", n);
   int k = natural(n - 1);
}
