void alnu(char[]);
main()
{
    char s[29];
    printf("enter the string to know that string is alphanumeric or not ==>> ");
    gets(s);
    alnu(s);
}
void alnu(char s[])
{
    int i, l, a, j, n;
    l = strlen(s);
    strlwr(s);
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a = 1;
        if (s[i] >= '0' && s[i] <= '9')
        {
            i=1;
            break;
        }
    }
    if (i ==1&&a==1)
        printf("enterd string is alphanumeric");
    else
        printf("enterd string is not alphanumeric");
}