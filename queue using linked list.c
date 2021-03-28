  
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert() 
{
  struct node *temp;
  int val;
  temp=(struct node*) malloc (sizeof(struct node));
  if(temp==NULL)
  {
    printf("queue overflow\n");
    return;
  }  
  else
  {
   printf("enter the value\n");
   scanf("%d",&val);
   temp->data=val;
   temp->next=NULL;
   if(front==NULL)
     front=rear=temp;
   else
   {
    rear->next=temp;
    rear=temp;
   }
  printf(" one value inserted into queue\n ");
}
}
void delete() 
{
 struct node *temp;
 if(front==NULL)
 {
   printf(" underflow \n");
   return;
 }
 else
 {
    temp=front;
    front=front->next;
    printf("%d is deleted from queue\n",temp->data);
    free(temp);
  }
}
void display() 
{
 struct node *temp;
 temp=front;
 if(front==NULL)
 {
   printf("empty queue\n");
   return;
 }
  else
  {
   printf("queue elements are\n");
   while(temp!=NULL) 
   {
     printf("%d\t",temp->data);
     temp=temp->next;
   }
 }
}
int main() 
{
int ch;
int e=1;
while(e) 
{
printf(" \nqueue using linked list \n");
printf("___________menu__________");
printf("\n\t1.insert \n\t2.delete \n\t3.display \n\t4.exit\n"); 
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch) 
{
case 1:insert();
       break;
case 2:delete();
       break;
case 3:display();
       break;
case 4:e=0;
       printf("exiting from the program\n");
       break;
default:printf("enter a valid choice\n ");
}
}
return 0;
}
