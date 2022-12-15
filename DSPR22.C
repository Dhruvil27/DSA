#include<stdio.h>
#include<conio.h>

void main()
{
void selection_sort(int[],int);
int a[10],n,i;
clrscr();
printf("\n How Many Number enter in List \n");
scanf("%d",&n);

printf("\n Enter the Number in list: \n");


for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}


selection_sort(a,n);
getch();
}

void selection_sort(int b[],int n)
{
 int i,j,temp;

 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
  if(b[j]>b[j+1])
 {

   temp=b[j];
   b[j]=b[j+1];
   b[j+1]=temp;
   }
 }
}

printf("\n Display the Sorted list");
for(i=0;i<n;i++)
{
printf("\n%d",b[i]);
}
}