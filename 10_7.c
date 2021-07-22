main()
{
    int n;
    printf("enter the no to print sum of n natural no i\nn == ");
    scanf("%d",&n);
     int k=natural(n);
    printf("%d",k);
}
natural(int n)
{
   if(n==1)
   return 1;
//    printf("%d\n", n*2-1);
   int k = n +natural(n - 1);
}
