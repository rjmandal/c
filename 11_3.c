#include<stdio.h>
main()
{
   int a[10],s=0;
    printf("enter 10 no to add all even and all odd ==>>\n");

    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        s=s+a[i];
    }
    printf("sum of even no = %d\n",s);
    s=0;
    for(int i=0;i<=9;i++)
    {
        if(a[i]%2!=0)
        s=s+a[i];
    }
    printf("sum of odd no = %d",s);
}