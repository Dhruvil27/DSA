#include<stdio.h>
#include<conio.h>


void str_cat(char sou[],char dest[])
{
int i=0,j=0;
i=str_len(sou);

while(dest[j]!='\0');
  {
  sou[i]=dest[j];
  j++;
  i++;
  }
   sou[i]='\0';
   }
   void main()
   {
   char a[20],b[10];
   clrscr();
   printf("Enter String:");
   gets(a);
   printf("Enter String:");
   gets(b);
   str_cat(a,b);

   printf("String is %s",a);
   printf("String is %s",a);
   getch();
   }



