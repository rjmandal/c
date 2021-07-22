float area(float r);
main()
{
    float r,a;
    printf("enter radius of circle to find area of circle\nradius =  ");
    scanf("%f",&r);
    a=area(r);
    printf("area of circle is %f",a);       
    getch();
}
float area(float r)
{
float a;
a= 3.14*r*r;
return a;
}