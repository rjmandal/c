#include<math.h>
// void input(int a[], int size);
void display(int a[], int size);
int mdeviation(int a[], int size);

main()
{
    int size, i;
    printf("enter the size of an array: ");
    scanf("%d", &size);
    int a[size];
    printf("enter elements of array to print standard deviation of an elements ==>>\n");
    size = size - 1;
    for (i = 0; i <= size; i++)
        scanf("%d", &a[i]);
    // input(a, size);
    display(a, size);
    printf("\n");
    sdeviation(a, size);
    // display(a, size);
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
        printf("%d", a[i]);
}
int sdeviation(int a[], int size)
{
    float m, sum = 0, sd = 0, k,c=0;
    for (int i = 0; i <= size; i++)
    {
        sum = sum + a[i];
        c++;
    }
    m = sum / c;
    for (int j = 0; j <= size; j++)
    {
        k = a[j] - m;
        sd = sd + k*k;
    }
    sd = sd/c;
    sd= sqrt(sd);
    printf("sd =%.2f",sd );
}

// void input(int a[], int size)
// {
//     int i,a[size];
//     printf("enter elements of array to rotate them in right postion ==>>\n");

//     for (i = 0; i <= size; i++)
//         scanf("%d", &a[i]);
// }