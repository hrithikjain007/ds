#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
int n;
struct st *next;
}sll;

void add_bigin(sll**);
void display(sll*);
int count(sll*);
