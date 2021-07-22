float area(float r);
main()
{
    float r,a;
    printf("enter radius of circle to find circumference of circle\nradius =  ");
    scanf("%f",&r);
    a=area(r);
    printf("circumference of circle is %f",a);       
    getch();
}
float area(float r)
{
float a;
a=2* 3.14*r;
return a;
}