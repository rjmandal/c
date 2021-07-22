#include<string.h>
main()
{
    char s[10][20],t[10][20],temp[20];
    int i, j;
    printf("enter the 10 cities name to sort them\n");
    for (i = 0; i < 10; i++)
        gets(s[i]);

    for (i = 0; i < 9; i++)
    {
    for (j = i+1; j < 10; j++)
    {
        if (strcmp(s[i], s[j])>0)
        {
            strcpy(temp, s[i]);
            strcpy(s[i], s[j]);
            strcpy(s[j],temp);
        }
    }
    }

    printf("your entered stirngs are sorted: \n");
    for (i = 0; i < 10; i++)
    {
        puts(s[i]);
    }
        getch();
}