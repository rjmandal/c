// void input(int a[], int size);
void display(int a[], int size);
int frequency(int a[], int size);

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
    frequency(a, size);
    // display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
int frequency(int a[], int size)
{
    int i, j, k, t = 0;
    for (i = 0; i <= size; i++)
    {
        for (k = i - 1; k >= 0; k--)
        {
            if (a[i] == a[k])
            {
                t = 1;
                break;
            }
            t = 0;
        }
        if (t == 0)
        {
        int count = 0;
        for (j = 0; j <= size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
            printf("|-%d-| ==>> |-%d-| \n", a[i], count);
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