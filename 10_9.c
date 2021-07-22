main()
{
    int n;
    printf("enter the no to print sum of n odd natural no \nn == ");
    scanf("%d",&n);
     int k=natural(n);
     printf("%d",k);
    
}
natural(int n)
{
   if(n==0)
   return 0;
   int k =n*2-1 + natural(n - 1);
   return k;
}
