void palindrome(char []);
main()
{
 char s[29];
 printf("enter the string to know its palindrome or not ==>> ");
 gets(s);
 palindrome(s);    
}
void palindrome(char s[])
{
    int i,l;
    l=strlen(s);
    for (i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            printf("enter string is not a palindrome");
            break;
        }

    }
            if(i==l/2)
            printf("enter string is a palindrome");
}