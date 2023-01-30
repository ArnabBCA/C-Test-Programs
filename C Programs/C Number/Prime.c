#include <stdio.h>
void prime(int num)
{
    int count=0;
    int i=1;
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2 || num==1)
    {
        printf("%d PRIME ",num);
    }
    else
    {
        printf("%d not PRIME ",num);
    }   
}
int main()
{   
    int num;
    printf("Enter the NUMBER\n");
    scanf("%d",&num);
    prime(num);
    return 0;
}