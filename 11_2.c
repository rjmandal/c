#include<stdio.h>
main()
{
   int a[9],s=0;
    printf("enter 10 no to add them ==>>\n");

    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<=9;i++)
        s=s+a[i];
    printf("sum = %d",s);
}