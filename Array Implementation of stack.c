#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
struct stack
{
 int s[size];
 int top;
}st;
int stfull()
{
 if(st.top>=size-1)
  return 1;
 else
  return 0;
}
void push(int item)
{
 st.top++;
 st.s[st.top]=item;
}
int stempty()
{
 if(st.top==-1)
  return 1;
 else
  return 0;
}
int pop()
{
 int item;
 item=st.s[st.top];
 st.top--;
 return (item);
}
void display()
{
 int i;
 if(stempty())
  printf("\nStack is empty");
 else
 {
  for(i=st.top;i>=0;i--)
   printf("\n%d",st.s[i]);
 }
}
void main()
{
 int item,choice;
 st.top=-1;
 clrscr();
 printf("****Array Implementation Of Stack****");
 do
 {
  printf("\n1.Push 2.Pop 3.Display 4.Exit");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch (choice)
  {
   case 1:
     printf("\nEnter the item to be pushed:");
     scanf("%d",&item);
     if(stfull())
      printf("\nStack is full!");
     else
      push(item);
     break;
   case 2:
     if(stempty())
      printf("Stack Empty!Underflow!!");
     else
      item=pop();
      printf("\nThe popped element is %d",item);
     break;
   case 3:
     display();
     break;
   case 4:
     exit(0);
  }
 }while(choice<5);
 getch();
}