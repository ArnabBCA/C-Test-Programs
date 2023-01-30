#include<stdio.h>
void main()
{
	int a[20][20],b[20][20],s[20][20];
	int c,r,i,j;
	printf("enter row");
	scanf("%d",&r);
	printf("enter coloumn");
	scanf("%d",&c);
	printf("matrix 1\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("enter a[%d][%d] data",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix 2\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("enter b[%d][%d] data",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d \t",s[i][j]);
		}
		printf("\n");
	}
}

