main()
{
    int num1, num2;
    printf("enter the two num to replace it \nnum1 ==>> ");
    scanf("%d", &num1);
    printf("num2 ==>> ");
    scanf("%d", &num2);

    // logic 1
    // num1=num1+num2;
    // num2=num1-num2;
    // num1=num1-num2;

    // logic 2
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;

    printf("result ==>> num1 == %d and num2 ==>> %d", num1, num2);
}