// void input(int a[], int size);
void display(int a[], int size);
int distinct(int a[], int size);

main()
{
    int size,i;
    printf("enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
 printf("enter elements of array to print distinct element of an array ==>>\n");
 size=size-1;
    for (i = 0; i <= size; i++)
        scanf("%d", &a[i]);
    // input(a, size);
    display(a, size);
    printf("\n");
    distinct(a, size);
    // display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
int distinct(int a[], int size)
{
    int i,j;
    for(i=0;i<=size;i++)
    {
        for(j=0;j<=size;j++)
        {
        if(a[i]  == a[j] && i!=j)
        {
            break;
        }
        }
        if(a[i]  != a[j])
            printf("%d is unique\n",a[i]);
    }

}
// void input(int a[], int size)
// {
//     int i,a[size];
//     printf("enter elements of array to rotate them in right postion ==>>\n");

//     for (i = 0; i <= size; i++)
//         scanf("%d", &a[i]);
// }