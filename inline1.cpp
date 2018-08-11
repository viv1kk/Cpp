#include <iostream>
#include <conio.h>
using namespace std;

inline int square(int a)
{
return a * a;
}
int main (void)
{
cout<<"The square of 3 is "<<square(3);
getch();
return 0;
}