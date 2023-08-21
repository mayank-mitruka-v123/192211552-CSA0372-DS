#include<stdio.h>
int main()
{
	int row,col,arr[500][500],i,j;
	printf("Enter number of rows : \n");
	scanf("%d",&row);
	printf("Enter number of columns : \n");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter row %d col %d element : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  ",&arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}

