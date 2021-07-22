int main()
{
    int no,i=1,multi=1;
    printf("enter the no ==>>  ");
    scanf("%d",&no);
    while(i<=no)
    {
        multi=multi*i;
        i++;
    }
    printf("%d",multi);
    return 0;
}

