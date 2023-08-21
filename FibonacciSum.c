#include<stdio.h>
int main()
{
int n,i,j,t,f,s,sum=0;
printf("Enter number of terms : ");
scanf("%d",&n);
f=0;
s=1;
t=f+s;
printf("The fibonacci series upto %d terms are : \n",n);
printf("%d\t%d",f,s);
for(i=2;i<=n;i++)
{
t=f+s;
f=s;
s=t;
sum+=t;
printf("\t%d",t);
}
printf("The sum of fibonacci series upto %d terms is %d",n,sum);
return 0;
}

