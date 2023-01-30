#include <stdio.h>
int main()
{
    int i;
    int year;
    for(i=2000;i<=2050;i++)
    {
        if(i%400==0 || i%100!=0  && i%4==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}