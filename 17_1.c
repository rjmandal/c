// void swap(int *,int *);
// main()
// {
//     int a,b,t;
//     printf("enter the two no swap them \na=");
//     scanf("%d",&a);
//     printf("b=");
//     scanf("%d",&b);
//     swap(&a,&b);
//     printf("a=%d b=%d",a,b);
// }
// void swap(int *a,int *b)
// {
//     int t;
//     t=*a;
//     *a=*b;
//     *b=t;
// }


// void input(int *);
// void display(int *);

// int i;
// main()
// {
//     int a[5];
//  printf("enter the elements of array to sort them == >>\n");
//  input(a);
//  display(a);
//  sort(a);
//  printf("\nsorted array :\n");
//  display(a);
// }
// void input(int *p)
// {
//     for(i=0;i<4;i++)
//     {
//     scanf("%d",p+i);
//     }
// }
// void display(int *p)
// {
//     for(i=0;i<4;i++)
//     printf("%d",*(p+i));
// }
// void sort(int *p)
// {
//     int r,i,t;
//     for(r=1;r<=4;r++)
//     {
//         for(i=0;i<=4-r;i++)
//         {
//             if(*(p+i)>*(p+i+1))
//             {
//                 t=*(p+i);
//                 *(p+i)=*(p+i+1);
//                 *(p+i+1)=t;
//             }
//         }
//     }
// }


main()
{
    int a[20];
    printf("enter the elements of to find max between them ==>>");
input(a);
display(a);
max(a);

}