main()
{
    int n;
    printf("enter the no to print sum of digit of given no \nn == ");
    scanf("%d",&n);
     int k=natural(n);
     printf("%d",k);
    
}
natural(int n)
{
   if(n==0)
   return 0;
   int k =n%10+ natural(n / 10);
   return k;
}
