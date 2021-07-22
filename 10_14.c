main()
{
    int n;
    printf("enter the no to print in reverse \nn == ");
    scanf("%d",&n);
     int k=natural(n);
    // printf("%d",k);
}
natural(int n)
{
    int s=0;
   if(n==0)
   return 0;
          printf("%d", n%10);
   int k = natural(n / 10) ;
//    s =k*10+n%10;
       return k;
}
