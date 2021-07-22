main()
{
    int n;
    printf("enter the no to print sum of n even natural no \nn == ");
    scanf("%d",&n);
     int k=natural(n);
     printf("%d",k);
    
}
natural(int n)
{
    int s=0;
   if(n==0)
   return 0;
   int k =n*2 + natural(n - 1);
   return k;
}
