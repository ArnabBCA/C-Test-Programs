#include<stdio.h>
void main()
{
    int i;
    int n1;
    int n2;
    int gcd;
    int lcm;
    int min;
    printf("Enter First Number\n");
    scanf("%d",&n1);
    printf("Enter Second Number\n");
    scanf("%d",&n2);
    min=(n1<n2)?n1:n2;
    for(i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    printf("GCD=%d\nLCM=%d",gcd,lcm);
}
