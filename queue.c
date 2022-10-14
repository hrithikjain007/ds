#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
int num;
struct queue *next;

}queue;
queue *headptr=0;
void inqueue();
void dequeue();
void display();
int main()
{
int op;
while(1);
{
printf("enter choice");
scanf("%d",&op);
switch(op)
{
case 1:inqueue();break;
case 2:dequeue();break;
case 3:display();break;
case 4:exit(0);
}
}
}
void enqueue()
{
queue *new,*last;
new=malloc(sizeof(queue));
printf("enter the number");
scanf("%d",&new->num);
new->next=0;
 if(headptr==0)
headptr=new;
else
{
last=headptr;
while(last->next)
{
 last=last->next;
}
}
}
void dequeue()
{
if(headptr==0)
{
printf("stack underflow");
 return;

}
queue *del=headptr;
printf("del=%d",del->num);
headptr=headptr->next;
free(del);
}
void display()
{
queue *temp;
if(headptr==0)
{
printf("empty queue");
  return;
}
while(temp)
{
printf("%d",temp->num);
temp=temp->next;

}
}

