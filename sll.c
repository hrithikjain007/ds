#include"header.h"
void main()
{
	sll *headptr=0;
	int op,c;
	while(1)
	{
		printf("\n 1)add data bigin   2)to dsplay   3)to count  4)delete  5) swap  6) alter  7)multiple 8) bsort  9)ssort  0)exit");
		scanf("%d",&op);
		switch(op)
		{
			case 1:   add_bigin(&headptr);break;
			case 2:  display(headptr);break;
			case 3: c=count(headptr); printf("\nnumber=%d\n",c);break;
			case 4: delete(&headptr);break;
			case 5: swap(headptr);break;
			case 6: alter(&headptr);break;
			case 7: multiple(&headptr);break;
			case 8: bsort(headptr);break;
			case 9: ssort(headptr);break;
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
                  return 0;
          }
 	int c=0;
          while(ptr)
          {
                c++;  
                  ptr=ptr->next;
          }
  
	return c;
  
  }
 void delete(sll **ptr)
{
   sll *del ,*pre ;
	int c,pos,i;
	del=*ptr;
    if(*ptr==0)
	{
	printf("\n no nodes to delete\n");
	return;
	}
	     printf("\nenter position\n");
		scanf("%d",&pos);
             c=count(*ptr);  
		if(c==1)
		{
			*ptr=0;
			free(del);

		} 
		else
		{
			for(i=1;i<=c;i++)
			{
			   if(pos==i)
				{
					if(pos==1)
					{
						*ptr=(*ptr)->next;
						free(del);
						return;
					}


					else
					{
					     	pre->next=del->next;
						free(del);
						return;	
					}				
					
				}  
 					pre=del;
					del=del->next;
					
			}
		}

}


void swap(sll *ptr)
{
sll *a,*b,temp;
int x,y,c,i;
printf("\nenter the numbers\n");
scanf("%d%d",&x,&y);
c=count(ptr);
for(i=1;i<=c;i++)
{
    if(i==x)
	a=ptr;
	if(i==y)
	b=ptr;
ptr=ptr->next;
}
  temp.n=a->n;
a->n=b->n;
b->n=temp.n;
}

void alter(sll **ptr)
{
sll  *x,*h;
x=h=*ptr;
while(h)
{
h=h->next;
x->next=h->next;
free(h);
h=x->next;
}
}                     

void multiple(sll **ptr)
{
  sll *new[100],*s;
   int i,c;
	
    printf("\nenter number of new data\n");
	scanf("%d",&c);
        for(i=0;i<c;i++)
	{
          new[i]=malloc(sizeof(sll));
          printf("\n enter data \n");
          scanf("%d",&(new[i])->n);
          (new[i])->next=*ptr;
          *ptr=new[i];
	}
      s=*ptr;
     while(s!=0)
	s=s->next;
	for(i=0;i<c;i++)
	{
          s->next=new[i];
	}

}


   void bsort(sll *ptr)
	{
	 if(ptr==0)
	{
	printf("\n printf no data to sort\n");
	return;
	}
	int c,i,j;
	sll *p,*q,temp;
	c=count(ptr);
         p=ptr;
       //  q=p->next;
	for(i=0;i<c-1;i++)
	{
		q=p->next;
		for(j=0;j<c-1-i;j++)
		{
		   if((p->n)>(q->n))
			{
				temp.n=p->n;
				(p->n)=(q->n);
				(q->n)=temp.n;
				
			}
			q=q->next;
			
		}
			p=p->next;
	}
}


void ssort(sll *ptr)
{
if(ptr==0)
{
printf("\nno data\n");
return;
}
int c,i,j;
sll *p,*q,temp;
c=count(ptr);
	p=ptr;
 for(i=0;i<c;i++)
	{
              q=p->next;
	for(j=i+1;j<c;j++)

		{
                     if((p->n)>(q->n))
			{
				temp.n=p->n;
				p->n=q->n;
				q->n=temp.n;
			}
			q=q->next;
			}
		p=p->next;
          }
}















































