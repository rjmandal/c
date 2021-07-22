main()
{
    int n;
    printf("enter the no to print octal equivalent of a entered no \nn == ");
    scanf("%d",&n);
     int k=natural(n);
    
}
natural(int n)
{
   if(n==0)
   return 1;
   int k =natural(n / 8);
   printf("%d", n % 8);
   return k;
}
