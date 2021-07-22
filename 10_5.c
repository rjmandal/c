main()
{
    int n;
    printf("enter the no to print n odd natural no \nn == ");
    scanf("%d",&n);
     int k=natural(n);
    
}
natural(int n)
{
   if(n==0)
   return 1;
   int k = natural(n - 1);
   printf("%d\n", 2*n-1);
}
