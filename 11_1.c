#include<stdio.h>
main()
{
   int a[9],s=0;
   float avg;
    printf("enter 10 no to avaerage it ==>>\n");

    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<=9;i++)
        s=s+a[i];

        avg=s/10.0;
    printf("%f",avg);
}