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
	dup=0;
	for(i=0;i<n;i++)
	{
		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
				dup+=1;
		}
		if(dup==2)
			printf("\n%d is repeated twice.",arr[i]);
		else
			printf("\n\n%d",dup);
	}
	return 0;
}
