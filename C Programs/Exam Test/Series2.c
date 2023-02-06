// 1 + 1/2^2 + 1/3^3 + 1/4^4 .... + 1/N^2
#include<stdio.h>
int main()
{
    int n;
    int i;
    int x=0 ;
    int z=1;
    float sum=0.0;
    printf("Enter the nth Term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+(i+1)*(i+1);
        sum=sum+((double)z/(double)x);
        //printf("%d %d\n",z,x);
        x=0;
    }
    printf("%f\n",sum+1);
}