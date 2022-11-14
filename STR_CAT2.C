#include<stdio.h>
#include<conio.h>


void str_cat_app(char x[],char sou[],char dest[])

{
int i=0,j=0,k=0;
i=str_len(sou);

while(sou[i]!='\0');
  {
  x[i]=sou[i];
  k++;
  i++;
  }

   while(dest[j]!='\0')
   {
   x[k]=dest[j];
   j++;
   i++;
   }
   x[k]='\0';
   }




   void main()
   {
   char a[20],b[10],x;
   {
   str_cat_app(x,a,b);

   printf("String is %s",x);
   getch();
   }
   }