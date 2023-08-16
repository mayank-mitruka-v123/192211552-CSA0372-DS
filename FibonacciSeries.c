#include<stdio.h>
int main()
{
    int t,f,s,i,n;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    f=0;
    s=1;
    t=f+s;
    printf("Fibonacci series upto %d terms : \n");
    printf("%d\t%d", f, s) ;
    for(i=2;i<n;i++) 
    {
    	t=f+s;
        f=s;
        s=t;
        printf("\t%d",t) ;
    }
    return 0;
}