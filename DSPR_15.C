#include<stdio.h>
#include<conio.h>


struct node
{
int data;
struct node*next;
};
typedef struct node ll;

void main()
{
int ch,c;
ll *root,*p,*newnode;

root=NULL;

clrscr();
while(ch<3)
{
printf("Press 1 for creating Link list and Inserting New Node in sorted link.\n");
printf("Press 2 for Display New Link List.\n");
printf("Press 3  for Delete Link List.\n");
printf("\nEnter Your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
newnode=(ll*)malloc(sizeof(11));

			printf("Enter Data for New Node:");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
if(root==NULL)
{
  root=newnode;
}

else
{
p=root;
if(newnode->data<root->data)
{
newnode->next=root;
root=newnode;
}


else if(newnode ->data>=root->data)
{
while(p->next!=NULL&&(p->data<-newnode->data&&p->next->data&&p->next->data<-newnode->data))
{
p=p->next;

newnode->next=p->next;
p->next=newnode;
}
}

break;

case 2:
p=root;
while(p!=NULL)
{
printf("%U->%d\n",p,p->data);
p=p->next;
}
break;

case 3:
c=0;
p=root;
while(p!=NULL)
{
p=p->next;
c++;
}
printf("\n Number Of Node:%d",c);
break;
}
getch();
}
getch();
}
}
