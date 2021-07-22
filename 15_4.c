void rev(char []);
main()
{
 char s[29];
 printf("enter the string to reverse them word wise ==>> ");
 gets(s);
 rev(s);    
}
void rev(char s[])
{
    int i,l,k=1;
    l=strlen(s);
  for(i=0;i<=l;i++)
    {
        if(s[i]==' ')
        k++;
        
    }
printf("no of words is %d",k);
}