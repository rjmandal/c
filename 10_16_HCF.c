int hcf(int no1,int no2);
main()
{
    int no1, no2, no, i = 1, s1, s2, hcf = 0;
    printf("enter two no to know its HCF \nno1 ==>> ");
    scanf("%d", &no1);
    printf("no2 ==>> ");
    scanf("%d", &no2);
        printf("hcf is %d", hcf(no1,no2));
}
int hcf(int no1,int no2) 
{
    int i=no1,h,no=no1; 
    if (no1==1)
    return 1;
    h = hcf(no1-1,no2);
    if (no % h == 0 && no2 % h == 0)
    {
        5
        h = h;
  }
  return h;
}