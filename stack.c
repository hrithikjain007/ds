#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
 int num;
struct stack *next;
}stack;
stack *headptr=0;
void push();
void pop();
void display();

int main()
{
int op;
 while(1)
{
printf("\n enter the option\n");
scanf("%d",&op);
switch(op)
{
case(1): push();break;
case(2): pop();break;
case(3):display();break;
case(4):exit(0);
}
}
}

void push()
{
stack *new;
new=malloc(sizeof(stack));
printf("enter the number");
scanf("%d",&new->num);
new->next=headptr;
headptr=new;
}
void pop()
{
if(headptr==0)
{
printf("stack underflow");
return;
}
stack *del=headptr;
printf("%d deletenum ",del->num);
headptr=headptr->next;
free(del);
}
void display()
{
if(headptr==0)
{
printf("\nno data \n");
return;
}
stack *temp=headptr;
while(temp)
{
printf("num=%d",temp->num);
  temp =temp->next;
}
}




