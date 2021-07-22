main()
{
    int n;
    printf("enter the no to print binary equivalent of a entered no \nn == ");
    scanf("%d",&n);
     int k=natural(n);
    
}
natural(int n)
{
   if(n==0)
   return 1;
   int k =natural(n / 2);
   // printf("%d\n",n);
   if(n%2==0)
      printf("0");
      else 
      printf("1");
   return k;
}
