#include<stdio.h>
int main()
{
    int n;
    int i;
    int a=0;
    int b=1;
    int sum=0;
    printf("Enter the nth Term");
    scanf("%d",&n);
    if(n==1)
    {
        return 0;
    }
    else
    {
        printf("%d\n",a);
        printf("%d\n",b);
        for(i=0;i<n-2;i++)
        {
            sum=a+b;
            printf("%d\n",sum);
            a=b;
            b=sum;
        }
    }
}