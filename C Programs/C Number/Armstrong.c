#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int count=0;
    int sum=0;
    printf("Enter the Number");
    scanf("%i",&num);
    int copy1=num;
    int copy2=num;
    while(copy2>0)              //To count How Many Digits
    {
        copy2=copy2/10;     
        count++;
    }
    while(num>0)
    {
        int rem=num%10;
        sum=sum+round(pow(rem, count));        // The pow() function takes values of type double as its arguments and returns a value of type double. But the function does not always work with integers.
        num=num/10;                            // Two methods to work
    }                                          // eg = (int)(pow(4, 3) + 1e-9); and 2nd option is to round.
    if(copy1 == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not A Armstrong Number");
    }
    return 0;
}