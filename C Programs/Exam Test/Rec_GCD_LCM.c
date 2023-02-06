#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return(gcd(b,a%b));
    }
}
void main()
{
    int lcm;
    int a;
    int b;
    int result;
    printf("Enter First Number\n");
    scanf("%d",&a);
    printf("Enter Second Number\n");
    scanf("%d",&b);
    result=gcd(a,b);
    lcm=(a*b)/result;
    printf("GCD=%d\n",result);
    printf("LCM=%d\n",lcm);
}