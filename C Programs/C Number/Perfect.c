#include <stdio.h>
void perfect(int num)
{
    int i;
    int sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not a Perfect Number\n");
    }
}
int main()
{   
    int num;
    printf("Enter the NUMBER\n");
    scanf("%d",&num);
    perfect(num);
    return 0;
}
