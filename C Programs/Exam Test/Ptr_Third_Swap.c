#include <stdio.h>
void s(int *a, int *b)
{
    *a=(*a+*b);
    *b=(*a-*b);
    *a=(*a-*b);
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