#include<stdio.h>
void selec(int arr[],int size)
{
    int i;
    int j;
    int min;
    int temp;
    for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
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
    selec(arr,size);
    display(arr,size);
}