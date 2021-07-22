// void input(int a[], int size);
void display(int a[], int size);
void rotate(int a[], int size);

main()
{
    int size,i;
    printf("enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
 printf("enter elements of array to rotate them in right postion ==>>\n");
 size=size-1;
    for (i = 0; i <= size; i++)
        scanf("%d", &a[i]);
    // input(a, size);
    display(a, size);
    printf("\n");
    rotate(a, size);
    display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
void rotate(int a[], int size)
{
    int i, t = 0;
    t = a[size];
    for (i = 1; i <= size; i++)
    {
        a[size + 1 - i] = a[size - i];
    }
    a[0] = t;
}
// void input(int a[], int size)
// {
//     int i,a[size];
//     printf("enter elements of array to rotate them in right postion ==>>\n");

//     for (i = 0; i <= size; i++)
//         scanf("%d", &a[i]);
// }