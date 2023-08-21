#include<stdio.h>
int main()
{
	int reg,i,n,arr[500],e;
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
	printf("\nEnter reg no to be searched : ");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(e==arr[i])
			printf("Reg no %d is found at index %d,e,i);
	}
	return 0;
}

