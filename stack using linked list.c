#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
}
*top=NULL;
void push() 
{
  struct Node *temp;
  int val;
  printf("enter a value\n "); 
  scanf("%d",&val);
  temp=(struct Node*) malloc (sizeof(struct Node));
  temp->data=val;
  if(top==NULL)
    temp->next=NULL;
  else
     temp->next=top;
  top=temp;
  printf(" one value inserted into stack\n ");
}
void pop() 
{
  if(top==NULL) 
   printf(" stack underflow\n ");
  else
  {
    struct Node *temp=top;
    printf(" deleted element:%d\n",temp->data);
    top=temp->next;
    free(temp);
  }
}
void display() 
{
  if(top==NULL)
   printf("stack is empty\n ");
  else
  {
    struct Node *temp=top;
    while(temp->next!=NULL) 
    {
     printf("%d--->",temp->data);
     temp=temp->next;
    }
    printf("%d--->NULL\n",temp->data);
  }
}
void main() 
{
int ch;
int e=1;
printf(" stack using linked list \n");
while(e) 
{
printf("__________menu__________");
printf("\n\t1.push \n\t2.pop \n\t3.display \n\t4.exit\n"); 
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch) 
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:e=0;
       printf("exiting from the program\n");
       break;
default:printf("enter a valid choice \n");
}
}
}
