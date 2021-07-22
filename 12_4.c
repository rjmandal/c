// void input(int a[], int size);
void display(int a[], int size);
int index(int a[], int size);

main()
{
    int size,i;
    printf("enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
 printf("enter elements of array to find sortest element index ==>>\n");
 size=size-1;
    for (i = 0; i <= size; i++)
        scanf("%d", &a[i]);
    // input(a, size);
    display(a, size);
    printf("\n");
    int s=index(a, size);
    // display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
int index(int a[], int size)
{
    int min,i,t;
    min=a[0];
    for(i=0;i<=size;i++)
    {
        if(min  >= a[i])
        {
            min=a[i];
            t=i;
        }
    }
    printf("%d",t);
}
// void input(int a[], int size)
// {
//     int i,a[size];
//     printf("enter elements of array to rotate them in right postion ==>>\n");

//     for (i = 0; i <= size; i++)
//         scanf("%d", &a[i]);
// }