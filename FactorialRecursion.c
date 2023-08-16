#include<stdio.h>
long int Factorial(int n);
int main()
{
    int n;
    printf("Enter a number : ") ;
    scanf("%d", &n);
    printf("Factorial of %d = %ld",n, Factorial(n)) ;
}
long int Factorial(int n) 
{
	if(n>=1) 
    	return n*Factorial(n-1);
    else
    	return 1;
}    