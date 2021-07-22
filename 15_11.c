int compare(char s1[], char s2[]);
main()
{
    char s1[20], s2[20];
    int i;
    printf("enter the two string to compare them with each other \n string one ==>> ");
    gets(s1);
    printf("string second ==>> ");
    gets(s2);
    i=compare(s1,s2);
  if(i==0)
    printf("string is equal");
    else
    {
        if(i<0)
        printf("string is in a dictionary oder");
        else
        printf("string is not in a dictionary oder");

    }
}
int compare(char s1[], char s2[])
{
    int i, l1, l2,k;
    l1 = strlen(s1);
    l2 = strlen(s2);
strlwr(s1);
strlwr(s2);
    if (l1 == l2)
    {
    
        for (i = 0; i < l1-1; i++)
        {
            if (s1[i] != s2[i])
            {
                break;
            }
        }
        if (i==l1-1)
        return 0;
    }
        if(s1[0]<=s2[0])
        return -1;
        else
        return 1;
}