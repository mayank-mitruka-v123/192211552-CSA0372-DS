#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
struct queue
{
int que[size];
int front ,rear;
}q;
int qfull()
{
if(q.rear==size-1)
return 1;
else
return 0;
}
void enqueue(int item)
{
q.front=0;
q.rear=q.rear+1;
q.que[q.rear]=item;
}
int qempty()
{
if(q.front==-1)
return 1;
else
return 0;
}
void dequeue()
{
int item;
item=q.que[q.front];
q.front=q.front+1;
printf("\nThe Deleted element is :%d",item);
}
void display()
{
int i;
for(i=q.front;i<=q.rear;i++)
printf("%d",q.que[i]);
}
void main()
{
int item,choice;
q.front=-1;
q.rear=-1;
clrscr();
printf("\nIMPLEMENTATION OF QUEUE");
while(1)
{
printf("\n MAIN MENU");
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(qfull())
printf("\nQueue is Full");
else
{
printf("\nEnter the number to be inserted:");
scanf("%d",&item);
enqueue(item);
}
break;
case 2:
if(qempty())
printf("\nQueue Underflow");
else
dequeue();
break;
case 3:
if(qempty())
printf("\nQueue is empty");
else
display();
break;
case 4:
exit(0);
break;
}
}
}