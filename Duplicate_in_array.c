#include<stdio.h>
int main()
{
	int i,j,n,arr[500],dup;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : \n",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nDuplicate elements are : \n");
	for(i=0;i<n;i++)
	{
		dup=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
				printf("\t%d",arr[i]);
		}
	}
	return 0;
}
