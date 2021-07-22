#include<stdlib.h>
#include<stdio.h>
struct employee
{
    int emid;
    char name[10];
    float salary; 
}b1;

main()
{
printf("enter the book details==>>\nemid==>>");
scanf("%d",&b1.emid);
fflush(stdin);
printf("name==>>");
gets(b1.name);
printf("salary==>>");
scanf("%f",&b1.salary);
printf("emid==>> %d\tname==>> %s\t\tsalary==>> %f\t",b1.emid,b1.name,b1.salary);
}