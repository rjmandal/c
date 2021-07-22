main()
{
    int no,i=2,s;
    printf("enter the no to know either prime or not ==>> ");
    scanf("%d",&no);
    while(i<no)
    {
        s=no%i;
        if (s==0)
            break;  
        i++;
    }
        // printf("%d\n",s);
    if(s==0)
     printf("not prime no");
    else
         printf("prime no");
}