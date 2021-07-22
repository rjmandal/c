#include<stdio.h>
#include<conio.h>
void prime(int ,int );
main()
{
    int no1,no2;
    printf("enter the range to know prime no between them \nno1 == ");
    scanf("%d", &no1);
    printf("no2 == ");
    scanf("%d", &no2);
     prime(no1,no2);
}
void prime(int no1,int no2)
{
    int s;
    while (no1<=no2)
    {
        int i = 2;
        while (i < no1)
        {
            s = no1 % i;
            if (s == 0)
            {
                break;
            }
            i++;
        }
        if (s != 0)
        {
    printf("%d\n",no1);
        }
        no1++;
    }
}
