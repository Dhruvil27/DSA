#include<iostream.h>
#include<conio.h>
int fibo(int n)
   {
   if((n==1)||(n==0))
    {
      return 0;
   }
   if (n==2)
    return 1;
   else
   {
      return fibo(n-1)+fibo(n-2);
   }
}
int main()
   {
   int x , i=0;
   clrscr();
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "Fibonnaci Series : ";
   while(i <=x)
     {
      cout << " " << fibo(i);
      i++;
   }
   getch();
   return 0;
}