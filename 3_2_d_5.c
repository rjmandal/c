main()
{
    int no;
    printf("enter the no to check divisiblity by 5\n");
    scanf("%d",&no);
    if(no%5==0)
    {
        printf("%d is dvisible by 5",no);
    }
    if(no%5!=0)
    {
        printf("%d is not divisible by 5",no);
    }
}