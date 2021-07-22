main()
{
    int a,b,c;
    printf("enter the quadratic equation\na = ");
    scanf("%d",&a);
    printf("\nb = ");
    scanf("%d",&b);
    printf("\nc = ");
    scanf("%d",&c);
    printf("you enter this equation = %dx2 + %dx + %d = 0",a,b,c);
    int d=b*b-4*a*c;
    if(d>0)

        printf("two real and distict root ");

    if(d<0)
    
        printf("imaginary roots");
    
    if(d=0)
    
        printf("two real and equal roots ");

}