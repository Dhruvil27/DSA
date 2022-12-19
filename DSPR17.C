#include<stdio.h>
#include<conio.h>
#include<string.h>


struct student{

int d;
struct student*next;
};
typedef struct student ll;



int node_count(ll**root)
{
int c=0;
ll*p;
p=*root;

while(p!=NULL)
{
c++;
p=p->next;
}

return c;
}

int node_search(ll**root,int data)
{
int c=0;
ll*p;
p=*root;

while(p!=NULL)
{
c++;
if(p->d=data)
{
break;
}

p=p->next;
}


if(c>0 &&p!=NULL)
return c;
else return-1;
}



void node_delete(ll**root,int data)
{
ll*x,*p;
p=*root;


if(data==(*root)->d)
{
*root=(*root)->next;
free(p);
}

else
if(node_search(&(*root),data)!=-1)
{
while(p!=NULL)
{
if(p->next->d==data)
{
break;
}
p=p->next;
}

x=p->next;
p->next=p->next->next;
free(x);
}
else
printf("Node to be deleted is not found!");
}


void create ll(ll**r,int n)
{
ll*newnode;
newnode=(ll*)malloc(size of(ll));
newnode->d=n;
newnode->next=NULL;
if(r==NULL)
{
*r=newnode;
}

else
{
newnode->next=*r;
*r=newnode;
}
}


void display(ll**r,int n)
{
ll*newnode;
newnode->d=n;
newnode->next=**;
*r=newnode;
}


void insend(ll **r,int n)
{
ll*newnode,*p;
newnode=(ll*)malloc(sizeof(ll));
newnode->d=n;
newnode->next=NULL;
p=*r;

while(p->next!=NULL)
{
p=p->next;
}

p->next=newnode;
}



void display(ll**root)
{
ll*p;
p=root;

while(p!=NULL)
{
printf("\n:%d",p->d);
p=p->next;
}
}


void main()
{
int ch,n,pos;
ll*root,*p,*newnode;

root=NULL;
clrscr();
{

}
printf("Press 1 for creating Link list:");
printf("Peess 2 for Inserting New Node in the Beginning.\n");
printf("Press 3 for Inserting New Node in the end.\n");
printf("Press 4 for Delete Node by Data.\n");
printf("Press 5 for For Search Node by data.\n");
printf("Press 6 for count  Node.\n");
printf("Press 7 for Display Link List.\n");
scanf("%d",&ch);


swich(ch)
{
case 1:
printf("Enter Number:");
scanf("%d",&n);

createll(&root,n);
break;

case 2:

printf("Enter Number:");
scanf("%d",&n);
insbeg(&root,n);

break;

case 3:
printf("Enter Number:");
scanf("%d",&n);
insend(&root,n);
break;


case 4:
printf("Enter Node to be deleted.");
scanf("%d",&n);
node_delete(&root,n);
break;


case 5:
printf("Enter Node to be searched.");
scanf("%d",&n);


pos=node_search(&root,n);
if(pos!=-1)
printf("Node Found at Position %d");
else
printf("Node not available!");
break;


case 6:
printf("Total Number Of node are%d",node_count(&root));
break;
caset;
display(&root);
break;
printf("Thank You");
break;
}
printf("\n Press1 to continue");
scanf("%d",&ch);

while(ch==1);
getch();
}

