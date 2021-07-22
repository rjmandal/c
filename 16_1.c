main()
{
    char s[8][20];
    int i,j,count=0;
    printf("enter the strings to find vovles in them\n");
    for(i=0;i<8;i++)
    gets(s[i]);
    for(i=0;i<8;i++)
    {
        for(j=0;s[i][j];j++)
        {
            if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
            count++;
        }
    }
    printf("%d",count);
}