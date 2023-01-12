#include<iostream.h>
#include<conio.h>

struct node{
int data;
struct node *next,*prev;
};
int c=0;
void cre_node(struct node **r,int info)
{
int pos,x,m=0;


struct node*newnode,*p;
newnode=newnode;
newnode->data=info;
newnode->next=NULL;
newnode->prev=NULL;

if(*r==NULL)
{
*r=newnode;
c++;
}

else
{
cout<<"Enter Position.";
cin>>x;
if(x<=c+1)
{
p=*r;
m=1;
if(x==1)
{
newnode->next=*r;
(*r)->prev=newnode;
*r=newnode;
c++;
}
else
{
while(m<x-1)
{
p=p->next;
m++;
}

newnode->next=p->next;
newnode->prev=p;
p->next->prev=newnode;
p->next=newnode;
c++;
}
}
else if(x<=0||x>c)
{
cout<<" Invalid Psition.";
}
}
  }
void display(struct node *r)
 {

  struct node *p;
  p=r;
  while(p!=NULL)
  {
  cout<<p->prev->data<<"("<<p->prev<<")<---"<<p->data<<"("<<p<<")--->"<<p->next->data<<")"<<p->next<<")"<<endl;

  p=p->next;
  }
  }


  void main()
  {
  int n,ch=0,c;
  struct node *root;
  root=NULL;
  do{
  clrscr();
  cout<<"Press 1 to insert newnode.\n Press 2 to display list";
  cout<<"Enter Your choice:";
  cin>>ch;

 switch(ch){
 case 1:
 cout<<"Enter element:";
 cin>>n;
 cre_node(&root,n);
 break;

 case 2:
 display(root);
 break;
 default:
 cout<<"Thank You!";
 break;
 }
 cout<<"Press 0 to continue.\n Press 1 to Exit.";
 cin>>c;
 }
 while(c==0);
 getch();
}
