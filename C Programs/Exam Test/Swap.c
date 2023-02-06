#include<stdio.h>
void main()
{
    int a;
    int b;
    printf("Enter the First Number");
    scanf("%d",&a);
    printf("Enter the Second Number");
    scanf("%d",&b);
    printf("Before Swapping\na=%d b=%d\n",a,b);
    a=(a+b);
    b=(a-b);
    a=(a-b);
    printf("After Swapping\na=%d b=%d\n",a,b);
}
