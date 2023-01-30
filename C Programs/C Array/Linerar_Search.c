#include<stdio.h>
int linear(int arr[],int size,int num)
{
	int i;
    int k=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            printf("Element found at %d position",i);
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("Element not found");
    }
}
void main()
{
	int num;
	int i,low,high,size;
	int arr[20];
	printf("enter the array size\n");
	scanf("%d",&size);
	printf("Enter the element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&num);
    linear(arr,size,num);
}