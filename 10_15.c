#include<stdio.h>
#include<conio.h>
int fib(int);
int fib(int n)
{
   if(n==1)
   return 0;

   if(n==2)
   return 1;
   
   return fib(n-1) + fib(n-2);
}

main()
{
    int n;
    printf("enter the no to print nth term in fabonacci series\nn == ");
    scanf("%d",&n);
    printf("%d",fib(n));
getch();
}
