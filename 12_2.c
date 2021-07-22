// void input(int a[], int size);
void display(int a[], int size);
void reverse(int a[], int size);

main()
{
    int size,i;
    printf("enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
 printf("enter elements of array to reverse them ==>>\n");
 size=size-1;
    for (i = 0; i <= size; i++)
        scanf("%d", &a[i]);
    // input(a, size);
    display(a, size);
    printf("\n");
    reverse(a, size);
    display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
void reverse(int a[], int size)
{
    int i,t;
    // size=size+1;
    for (i = 0; i <= size/2; i++)
    {
        t=a[i];
     a[i]=a[size-i];
     a[size-i]=t;
    }
}
// void input(int a[], int size)
// {
//     int i,a[size];
//     printf("enter elements of array to rotate them in right postion ==>>\n");

//     for (i = 0; i <= size; i++)
//         scanf("%d", &a[i]);
// }