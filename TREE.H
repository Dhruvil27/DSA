#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>

struct tree{
int d;
struct tree *r;
struct tree *l;
};

typedef struct tree t;
t*p,*q;

void create(int data,t **p)
{
int i;
if(*p==NULL)
{
t*newn;
newn=(t*)malloc(sizeof(t));
newn->d=data;
newn->r=NULL;
newn->l=NULL;

*p=newn;
}
else
{
q=*p;
if(data>q->d)
create(data,&q->r);
else
create(data,&q->l);
}
}

void inorder(t*p)
{
if(p!=NULL)
{
inorder((p->l));
printf("%d\n",p->d);
inorder((p->r));
}
}

void preorder(t*p)
{
if(p!=NULL)
{
printf("%d\n",p->d);
preorder((p->l));
preorder((p->r));
}
}



void posorder(t*p)
{
if(p!=NULL)
{
preorder((p->l));
preorder((p->r));
}
}


void display(t*p)
{
if(p!=NULL)
{
printf("%d<--%d-->%d\n",p->l->d,p->d,p->r->d);

display((p->l));
display((p->r));
}
}



void bst(int x,t*p,int l)
{
if(p==NULL)
{
if(p->d==x)
printf("\n Search element at level %d",l);

else if(c x>p->d)
bst(x,p->l+1);
else if
bst(x,p->l,l+1);
else
printf("Not Found")
}

}