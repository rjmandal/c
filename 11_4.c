#include<stdio.h>
main()
{
   int a[10],max=0;
    printf("enter 10 elements of array to find greatest among them ==>>\n");

    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<=9;i++)
    {
        if(a[i]>max)
         max =a[i];   
    }
    printf("greatest element is = %d\n",max);
}