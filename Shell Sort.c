#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,j,k,temp,n;
clrscr();
printf("\nenter the no of elements");
scanf("%d",&n);
printf("\nenter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=n/2;i>0;i=i/2)
{
for(j=i;j<n;j++)
{
for(k=j-i;k>=0;k=k-i)
{
if(a[k+i]>=a[k])
break;
else
{temp=a[k];
a[k]=a[k+i];
a[k+i]=temp;   }}}}
printf("\n the sorted elements are\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();}