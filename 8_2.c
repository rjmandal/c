main()
{
    int no1,no2;
    char m;
    while(1)
    {
    printf("Menu\na.ADDITION\nb.SUBTRACTION\nc.MULTIPLICATION\nd.DIVISION\ne.EXIT\n");
    printf("choose one of them to procced ==>> ");
    scanf("%c",&m);
    switch (m)
    {
    case 'a':
    printf("enter two no to procced\nno1 ==>> ");
    scanf("%d",&no1);
    printf("no2 ==>> ");
    scanf("%d",&no2);
        printf("result is %d\n",no1+no2);
        getch();
        break;
    
    case 'b':
    printf("enter two no to procced\nno1 ==>> ");
    scanf("%d",&no1);
    printf("no2 ==>> ");
    scanf("%d",&no2);
        printf("result is %d\n",no1-no2);
        getch();
        break;
    
    case 'c':
    printf("enter two no to procced\nno1 ==>> ");
    scanf("%d",&no1);
    printf("no2 ==>> ");
    scanf("%d",&no2);
        printf("result is %d\n",no1*no2);
        getch();
        break;
    
    case 'd':
    printf("enter two no to procced\nno1 ==>> ");
    scanf("%d",&no1);
    printf("no2 ==>> ");
    scanf("%d",&no2);
        printf("result is %d\n",no1/no2);
        getch();
        break;
    
    case 'e':
    exit(0);
        
    // default:
    // printf("invalid option");
        getch();
    }
    }
}