main()
{
    pending
    int year;
    printf("enter the year to check year is leap year or not \nenter year = ");
    scanf("%d",&year);
    if(year%4)
    
        printf("%d is not leap year",year);
  
    else if(year%4&&year%400)
    
        printf("%d is not leap year",year);

    else

            printf("%d is leap year",year);
        
}