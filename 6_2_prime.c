main()
{
    int no = 2, i = 2, s;
    printf("all prime under 100 ==>> \n");
    while (no < 100)
    {
        i=2;
        while (i <no)
        {
            s = no % i;
            // printf("%d\n",s);
            if (s == 0)
            {
                break;
            }
            i++;
        }
        if (s != 0)
        {
            printf("%d\n", no);
        }
        no++;
    }
}