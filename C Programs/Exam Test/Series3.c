#include<stdio.h>
int main()
{
    int n;
    int i;
    int sum1=0;
    int sum2=0;
    int total=0;
    printf("Enter the nth Term\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1-i;
        }
        else
        {
            sum2=sum2+i;
        }
    }
    total=sum1+sum2;
    printf("%d\n",total);
}