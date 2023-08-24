#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*front=NULL,*rear=NULL,*new_node;
void enqueue()
{
new_node=(struct node*)malloc(sizeof(struct node));
printf("\Enter the data to create:");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(rear==NULL)
{
rear=new_node;
front=new_node;
}
else
{
rear->next=new_node;
rear=new_node;
}}
void dequeue()
{
struct node*temp;
if(front==NULL)
printf("\n\nQueue is empty\n" );
else
{
printf("\nItem deleted:%d\n",temp->data);
temp=front;
front=front->next;
free(temp);
}
}
void display()
{
struct node *temp=front;
if(temp==NULL)
printf("\n\nQueue is empty\n");
else
{
printf("\n\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
void main()
{
int ch;
clrscr();
do
{
printf("\n\n1.Enqueue\n2./Dequeue\n3.Display\n4.Exit\n");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\n\nInvalide choice.Please try again...\n");
}}
while(ch<4);
getch();
}