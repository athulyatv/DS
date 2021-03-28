#include<stdio.h>
int SIZE=3;
void push(int a[], int *last) 
{
 if(*last>=SIZE-1)
 {
   printf("stack overflow\n");
 }
 else
 {
  *last += 1;
  printf("enter the element\n");
  scanf("%d",&a[*last]);
  printf("%d pushed into stack\n",a[*last]);
 }
} 
void pop(int a[], int *last) 
{
int ele;
if(*last>-1)
{
ele=a[*last];
*last-=1;
printf("value poped from stack\n",ele);
}
else
printf("stack underflow\n");
}
void display(int a[], int *last) 
{
int i;
if(*last<0)
{
printf("stack is empty\n");
return;
}
else
{
printf("stack elements are\n");
for(i=0;i <= *last;i++)
 printf("%d\t",a[i]);
}
}
int main()
{
int arr[SIZE];
int last=-1;
int ch, e=1;
while(e) 
{
printf("\nstack using array\n");
printf("_________menu_________\n");
printf("\n\t 1.push \n\t 2.pop \n\t 3.display \n\t 4.exit\n"); 
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch) 
{
case 1:push(arr, &last);
       break;
case 2:pop(arr, &last);
       break; 
case 3:display(arr, &last);
       break;  
case 4:e=0;
       printf("exiting from the program");
       break;
default:printf("enter a valid option ");
}
}
return 0;
}
