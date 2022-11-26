#include<iostream.h>
#include<conio.h>



int fact(int n)
 {
  if(n > 1)
 {
    return n * fact(n - 1);
  }
  else
    return 1;
}

int main()
 {

  int n;
  clrscr();
  cout << "Enter a Number: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << fact(n);
  getch();
   return 0;
   }
   

