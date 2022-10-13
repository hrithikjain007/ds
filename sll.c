#include"header.h"
void main()
{
	sll *headptr=0;
	int op,c;
	while(1)
	{
		printf("\n 1)add data bigin   2)to dsplay   3)to count  0)exit");
		scanf("%d",&op);
		switch(op)
		{
			case 1:   add_bigin(&headptr);break;
			case 2:  display(headptr);break;
			case 3: c=count(headptr); printf("\nnumber=%d\n",c);break;
			case 0:  exit(0);
		}
	}
}
void add_bigin(sll **ptr)
{
	sll *new;
	new=malloc(sizeof(sll));
	printf("\n enter data \n");
	scanf("%d",&new->n);
	new->next=*ptr;
	*ptr=new;
}
void display(sll *ptr)
{
	if(ptr==0)
	{
		printf("\n no data\n");
		return;
	}
	while(ptr)
	{
		printf("\n%d ", ptr->n);
		ptr=ptr->next;
	}


}

int count(sll *ptr)
  {
          if(ptr==0)
          {
                  printf("\n no data\n");
                  return;
          }
 	int c=0;
          while(ptr)
          {
                c++;  
                  ptr=ptr->next;
          }
  
	return c;
  
  }
  


