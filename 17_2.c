#include<stdlib.h>
#include<stdio.h>
struct book
{
    int bookid;
    char booktitle[10];
    float bookprice; 
}b1;

main()
{
struct book b2;
b1.bookid=234;
strcpy(b1.booktitle,"c++");
b1.bookprice=400;
printf("enter the book details==>>\n");
scanf("%d",&b2.bookid);
fflush(stdin);
gets(b2.booktitle);
scanf("%f",&b2.bookprice);
printf("book 1==>>\t%d\t%s\t%f\n",b1.bookid,b1.booktitle,b1.bookprice);
printf("book 2==>>\t%d\t%s\t%f",b2.bookid,b2.booktitle,b2.bookprice);
}