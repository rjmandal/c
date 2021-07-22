#include<stdio.h>
main()
{
   int a[10];
    printf("enter 10 elements of array to find smallest among them ==>>\n");

    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
        int min=a[0];
    for(int i=0;i<=9;i++)
    {
        if(a[i]<min)
         min =a[i];   
    }
    printf("smallest element is = %d\n",min);
}