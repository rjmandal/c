main()
{
    char s[20],c;
    int i,count=0;
    printf("enter the sentence or word as you want  ==>> ");
    gets(s);
    printf("enter the character to know its occurrence in above word ==>> ");
    scanf("%c",&c);

    for( i=0;s[i];i++)
    {
        if(c==s[i])
        {
            count++;
        }
    }
    printf("sanjay");
        printf("%c comes %d times",c,count);
}