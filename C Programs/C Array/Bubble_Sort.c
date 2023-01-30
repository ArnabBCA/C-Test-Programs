#include<stdio.h>
void bubble(int arr[],int size)
{
    int i;
    int j;
    int temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void display(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void main()
{
    int i;
    int arr[20];
    int size;
    printf("Enter Array Size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter The Elements");
        scanf("%d",&arr[i]);
    }
    bubble(arr,size);
    display(arr,size);
}