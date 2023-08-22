#include<stdio.h>
int main()
{
	int n,i,j,k,a[10][10],b[10][10],c[10][10],r,col;
	printf("Enter no. of rows : ");
	scanf("%d",&r);
	printf("Enter no. of columns : ");
	scanf("%d",&col);
	
	//Matrix 1 elements
	printf("Enter Matrix 1 elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter row %d col %d element : ",i+1,j+1);
			scanf("%d",&a[i][j]);

		}
	}

	//Matrix 2 elements
	printf("Enter Matrix 2 elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter row %d col %d element : ",i+1,j+1);
			scanf("%d",&b[i][j]);

		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=0;
			for(k=0;k<col;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	//Printing Multiplied matrix
	printf("\nResultant matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
