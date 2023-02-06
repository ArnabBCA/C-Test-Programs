#include<stdio.h>
int main()
{
    int n;
    int i;
    float sum=0.0;
    int fact=1;
    printf("Enter the nth Term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+((double)i/(double)fact);
        printf("%d %d\n",i,fact);
    }
    printf("%f\n",sum);
}