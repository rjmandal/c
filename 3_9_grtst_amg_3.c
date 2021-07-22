main()
{
    int a,b,c;
    printf("enter the three no to know which one is greater \nno1 = ");
    scanf("%d",&a);
    printf("no2 = ");
    scanf("%d",&b);
    printf("no3 = ");
    scanf("%d",&c);
    printf("%d is greatest among these three ", (a>b)?(a>c)?a:c:(b>c)? b:c);
        
}