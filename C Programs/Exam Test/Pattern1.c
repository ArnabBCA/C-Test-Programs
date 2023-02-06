#include<stdio.h>
int main()
{
    int x=1;
    int i;
    int j;
    int r=5;
    int c=5;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",x);
            x++;
        }
        printf("\n");
    }
}