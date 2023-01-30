#include<stdio.h>
void main()
{
	int mat1[10][10],mat2[10][10];
	int a,b,i,j;
	//MATRIX_1
	printf("Enter Rows in Matrix 1\n");
	scanf("%d",&a);
	printf("Enter Coloumn in Matrix 1\n");
	scanf("%d",&b);
	if(a!=b)
	{
		printf("Sorry.. It is not a Square Matrix\n");
	}
	else
	{
	
		printf("--Matrix 1---- 1\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				printf("Enter Data\n");
				scanf("%d",&mat1[i][j]);
			}
		}
		//Printing Result  Matrix
		printf("BeforeTransposing a Matrix\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				printf("%d\t",mat1[i][j]);
			}
			printf("\n");
		}
		//Transposing And Storing Matrix
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				mat2[j][i]=mat1[i][j];
			}
		}
		//Printing Result  Matrix
		printf("Transposing a Matrix\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				printf("%d\t",mat2[i][j]);
			}
			printf("\n");
		}		
	}
	
}
