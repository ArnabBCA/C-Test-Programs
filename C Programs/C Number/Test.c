
#include <stdio.h>
int main()
{
	int arr[50];
	int key,i,k,x,j,temp,min;
	printf("Enter number of elements in array:\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("Enter the elements:\n");
		scanf("%d",&arr[i]);
	}
	printf("Before Sorting\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0;i<k-1;i++)
	{
		min=i;
		for(j=i+1;j<k;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("After Sorting\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",arr[i]);
	}	
}