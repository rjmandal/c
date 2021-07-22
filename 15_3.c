void cap(char []);
main()
{
 char s[29];
 printf("enter the string to cpitalize theme ==>> ");
 gets(s);
 cap(s);    
}
void cap(char s[])
{
    int i,l;
    l=strlen(s);
  for(i=0;i<l;i++)
s[i]=s[i]-32;
  puts(s);
}