#include<stdio.h>
int main()
{
	int n,i,j,f=1;
    printf("Enter a number : ");
    scanf("%d",&n) ;
    for(i=1;i<=n;i++)
    {
    	f*=i;
    }
    printf("Factorial of %d is %d", n,f) ;
    return 0;
}