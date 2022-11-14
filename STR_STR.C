#include<stdio.h>
#include<conio.h>


char *str_str(char a[],char b[])
{

char *x="(null)";
int i=0,j,k;


if(strlen(a)>strlen(b))
while(a[i]!='\0');
  {
  j=i;
  k=0;


while(a[j]==b[k]&&b[k]!='\0')
  {
  j++;
  k++;
  }
  if(b[k]=='\0')
  {
  x=a+i;
  breack;
  }
  i++;
  }
  return x;
  }


  int main(void)
  {
  char *str1,*str2,*ptr;
  clrscr();


printf("Enter string 1:");
gets(str1);

printf("Enter string 2:");
gets(str2);


ptr=str_str(str1,str2);
printf("The substring is:%s\n",ptr);
ptr=str_str(str1,str2);
printf("The substring is:%s\n",ptr);

 getch();
 return 0;
 }







