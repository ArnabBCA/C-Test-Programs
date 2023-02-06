#include <stdio.h>
void s(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a;
    int b;
    printf("Enter the First Number");
    scanf("%d",&a);
    printf("Enter the Second Number");
    scanf("%d",&b);

    s(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;
}