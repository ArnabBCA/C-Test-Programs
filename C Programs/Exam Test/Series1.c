#include<stdio.h>
void main()
{
    int n;
    int i;
    int sum=0;
    int x=0;
    printf("Enter the nth Tearm");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        x=x+sum;      
    }
    printf("%d\n",x);
}