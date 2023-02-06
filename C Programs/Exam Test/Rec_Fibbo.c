#include<stdio.h>
int fib(int i)
{
    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return 1;
    }
    else
    {
        return(fib(i-2)+fib(i-1));
    }
}
void main()
{
    int n;
    int i;
    printf("Enter the nth Term");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",fib(i));
    }
}