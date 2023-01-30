#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,r2,c1,c2,i,j,n1,n2,k;
	printf("enter row of first matrix\n");
	scanf("%d",&r1);
	printf("enter coloumn of first matrix\n");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter elements of first matrix\n");
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter row of 2nd matrix\n");
	scanf("%d",&r2);
	printf("enter coloumn of 2nd matrix\n");
	scanf("%d",&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("enter elements of 2nd matrix\n");
			scanf("%d",&b[i][j]);
		}
	}	
	if(c1==r2)
	{
	
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<r2;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
		   		printf("%d\t",c[i][j]);	
			}
			printf("\n");
		}
	}
	else
	{
		printf("matrix multiplication can't be possible \n");
	}
}
