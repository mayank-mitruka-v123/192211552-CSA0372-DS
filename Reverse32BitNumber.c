#include<stdio.h>
int main()
{
int i,n,rem,rev,temp;
printf("Enter a number : ");
scanf("%d",&n);
temp=n;
rev=0;
while(temp)
{
rem=temp%10;
rev=rev*10+rem;
temp/=10;
}
if(n<0)
printf("%d is reverse of %d",rev,n);
else
printf("%d is reverse of %d",rev,n);
return 0;
}

