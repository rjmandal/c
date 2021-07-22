// void input(int a[], int size);
void display(int a[], int size);
int mdeviation(int a[], int size);

main()
{
    int size, i;
    printf("enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
    printf("enter elements of array to print fequency of an element of an array ==>>\n");
    size = size - 1;
    for (i = 0; i <= size; i++)
        scanf("%d", &a[i]);
    // input(a, size);
    display(a, size);
    printf("\n");
    mdeviation(a, size);
    // display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
int mdeviation(int a[], int size)
{
    float m, sum = 0, md = 0, k,c=0;
    for (int i = 0; i <= size; i++)
    {
        sum = sum + a[i];
        c++;
    }
    m = sum / c;
    printf("c = %f ", c);
    for (int j = 0; j <= size; j++)
    {
        k = a[j] - m;
        if (k < 0)
            k = -k;
        md = md + k;
    }
    printf("md =%.2f", md = md / c);
}

// void input(int a[], int size)
// {
//     int i,a[size];
//     printf("enter elements of array to rotate them in right postion ==>>\n");

//     for (i = 0; i <= size; i++)
//         scanf("%d", &a[i]);
// }