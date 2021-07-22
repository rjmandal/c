
main()
{
    char s[20],k;
    int l,i;
    printf("enter the sentence or word as you want to reverse them ==>> ");
    gets(s);
    l=strlen(s);
    puts(s);
    for( i=0;i<l/2;i++)
    {
        k=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=k;
    }
    puts(s);
}





