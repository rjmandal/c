// void input(int a[], int size);
void display(int a[], int size);
void sort(int a[], int size);

main()
{
    int size,i;
    printf("enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
 printf("enter elements of array to sort them ==>>\n");
 size=size-1;
    for (i = 0; i <= size; i++)
        scanf("%d", &a[i]);
    // input(a, size);
    display(a, size);
    printf("\n");
    sort(a, size);
    display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
void sort(int a[], int size)
{
    int i,r,t;
    for(r=0;r<=size-1;r++)
    {
    for (i = 0; i <= size-r; i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    }
}
// void input(int a[], int size)
// {
//     int i,a[size];
//     printf("enter elements of array to rotate them in right postion ==>>\n");

//     for (i = 0; i <= size; i++)
//         scanf("%d", &a[i]);
// }