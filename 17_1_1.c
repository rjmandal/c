int length(char *);
main()
{
    char s[10],*p;
    p=&s[0];
    printf("enter the string to calculate length of the string ==>>\n");
    gets(s);
    puts(s);
    int l=length(p);
   printf("%d",l);
}
int length(char *p)
{
    int i;
   for(i=0;*(p+i);i++);
   return i;
}