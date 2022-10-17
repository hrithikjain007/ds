#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
char a;
struct st *next ;
}cll;
void add(cll **);
void display(cll *);
void main()
{
cll *headptr=0;
int op;
while(1)
{
printf("\n ENTER the option\n  1)enter data   2)display data   0)  exit");
scanf("%d",&op);
switch(op)
{
case 1: add(&headptr);break;
case 2: display(headptr);break;
case 0: exit(0);
}
}
}
void add(cll **ptr)
{
cll *new;
new=malloc(sizeof(cll));
printf("\n enter data\n");
scanf(" %c",&new->a);
if(*ptr==0)
{
*ptr=new;
new->next=new;
}
else
{
 new->next=*ptr;
 *ptr=new;

}
}
void display(cll *ptr)
{
     cll *new;
   new=ptr;
  
   do
    {
         printf("\n%c",ptr->a);
          ptr=ptr->next;
     }  while(new!=ptr);
   
        printf("\n%c",new->a);
    
}
