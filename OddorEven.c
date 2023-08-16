#include<stdio.h>
int main()
{
	int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    if(n<0) 
    	printf("Enter positive integer.") ;
    if(n%2==0) 
    	printf("%d is even.", n) ;
    else
    	printf("%d is odd",n);
    return 0;
}  