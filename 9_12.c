main()
{
    int no, r;
    printf("enter the no to know its next prime \nno == ");
    scanf("%d", &no);
    r = prime(no);
    printf("%d", r);
}
int prime(int no1)
{
    int s;
    while (1)
    {
        no1++;
       int i = 2;
        while (i < no1)
        {
            s = no1 % i;
            if (s == 0)
            {
                break;
            }
            i++;
        }
        if (s != 0)
        {
            
            break;
        }
    }
    return no1;
}
