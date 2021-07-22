int occ(char[], char[]);
main()
{
    char s[29], s1[10];
    printf("enter the string to find the word in a given string ==>> ");
    gets(s);
    printf("enter the word to find them in the above string ==> ");
    gets(s1);

    if (occ(s, s1) == 1)
        printf("string is prensent ");
    else
        printf("string is not present ");
}
int occ(char s[], char s1[])
{
    int i, j;
    int l =strlen(s1);

    for (i = 0; s[i]; i++)
    {
        if(s1[0]==s[i])
        {
        for (j = 0; s1[j]; j++)
        {
           
            if (s1[j] != s[i+j])
                break;
            
            if(j==l-1)
            return 1;
        }
        }
    }
}