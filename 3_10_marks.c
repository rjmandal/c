main()
{
    int eng,hindi,maths,cs,js,total,per;
    printf("enter the marks of 5 subject \neng = ");
    scanf("%d",&eng);
    printf("hindi = ");
    scanf("%d",&hindi);
    printf("maths = ");
    scanf("%d",&maths);
    printf("cs = ");
    scanf("%d",&cs);
    printf("js = ");
    scanf("%d",&js);
    total =eng+hindi+maths+cs+js;
    per = total/5.0;
    if (eng >= 33 && hindi >= 33 && maths >= 33 && cs >= 33 && js >= 33)
    {
    printf("percentage = %d%% \nresult = PASS with ",per);
    if(per>=60)
    printf("FIRST DIVISON");
    else if(per>=50)
    printf("second DIVISON");
    else
    printf("third DIVISON");
    }
    else
    
    printf("percentage = %d%% \nresult = FAIL with ",per);

}