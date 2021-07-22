int occ(char[],char);
main()
{
    char s[29],c;
    printf("enter the string to know the first occurence of given character ==>> ");
    gets(s);
    printf("enter the character ==> ");
    scanf("%c",&c);

    printf("index of %c is %d",c,occ(s,c));
}
int occ(char s[],char c)
{
    int i,count=0;
    for(i=0;s[i];i++)
    {
           if(c ==s[i])
           {
               count++;
           break;
           }
            count++;
    }  
    return count; 
}