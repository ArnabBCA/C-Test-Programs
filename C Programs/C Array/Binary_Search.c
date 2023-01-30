#include<stdio.h>
int binary(int arr[20],int num,int high,int low)
{
	int mid;
	if(low>high)
	{	
		return -1;
	}
	else
	{
		mid=(low+high)/2;
		if(arr[mid]==num)
		{
			return mid;
		}
		else if(arr[mid]<num)
		{
			return binary(arr,num,high,mid+1);
		}
		else
		{
			return binary(arr,num,mid-1,low);
		}	
	}	
}
void main()
{
	int num;
	int i,low,high,size;
	int arr[20];
	printf("enter the array size\n");
	scanf("%d",&size);
	printf("Enter the elements in sorted order\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&num);
	low=0;
	high=size-1;
	if(binary(arr,num,high,low)<0)
	{
		printf("Element not found\n");
	}
	else
	{
		printf("%d",binary(arr,num,high,low));
	}	
}