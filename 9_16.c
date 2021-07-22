int occurance(int no,int d);
main()
{
    int no, d;
    printf("enter the digit to remove all occurannce in a given no\nno ==  ");
    scanf("%d", &no);
    printf("digit == ");
    scanf("%d", &d);
    occurance(no,d);
}
int occurance(int no,int d)
{
    int s,r=0,s1;
    while(no!=0)
    {
       s=no%10;
        if(s!=d)
            {
            r=r*10+s;
            }
       no=no/10;
    }
    while(r>0)
    {
        s1=r%10;
        r=r/10;
            printf("%d",s1);
    }
}