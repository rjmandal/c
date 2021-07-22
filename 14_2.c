main()
{
    char s[20], c;
    int i, count = 0;
    printf("enter the sentence or word as you want to calculate leanth  ==>> ");
    gets(s);

    for (i = 0; s[i]; i++)
    {
        if(s[i]!=0)
            count++;
    }
    printf("leanth of a string is %d ", count);
}