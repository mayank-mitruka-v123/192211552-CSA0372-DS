#include<stdio.h>

int main()
{
	int n1, n2,n3, i,j, a[500], b[500], c[500];
    printf("Enter number of elements in array1 : ");
    scanf("%d", &n1) ;
    for(i=0;i<n1;i++) 
    {
    	printf(" Enter element %d : ", i+1) ;
        scanf("%d", &a[i]) ;
    }
    
    printf("Enter number of elements in array2 : ");
    scanf("%d", &n2) ;
    for(i=0;i<n2;i++) 
    {
    	printf(" Enter element %d : ", i+1) ;
        scanf("%d", &b[i]) ;
    }
    n3=0;
    for(i=0;i<n1;i++) 
    {
    	c[n3]=a[i];
        n3+=1;
    }
    for (i = 0;i<n2;i++)
    {
        c[n3] = b[i];
        n3+=1;
    }
    printf ("\n\n") ;
    for(i=0;i<n3;i++) 
    {
    	printf("%d\t", c[i]) ;
    }
    return 0;
}