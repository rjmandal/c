void vowles(char []);
main()
{
    char s[20];
    printf("enter the string to count vowels in them ==>> ");
    gets(s);
    vowels(s);
}
    void vowels(char s[])
    {
        int l,k=0;
        l = strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            k++;
    }
    printf("this string has %d vowels",k);
    if(k=0)
    printf("this string no vowles");
    }