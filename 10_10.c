main()
{
    int n;
    printf("enter the no to print sum of square of n natural no \nn == ");
    scanf("%d",&n);
     int k=natural(n);
     printf("%d",k);
    
}
natural(int n)
{
   if(n==1)
   return 1;
   int k =n*n + natural(n - 1);
   return k;
}
