#include <stdio.h>
int main()
{
    int i;
    int num;
    int arr[20];
    printf("Enter the number");
    scanf("%d",&num);
    for(i=0;num>0;i++)    
    {    
        arr[i]=num%2;    
        num=num/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",arr[i]);    
    }    
    return 0;
}