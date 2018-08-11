#include <iostream>
#include <conio.h>
using namespace std;

class constructor
{
private : 
	int a;
	int b;
public :
constructor(int, int);
int area()
{
return a * b;
}
};
constructor :: constructor(int x, int y)
{
a = x;
b = y;
}
int main (void)
{
constructor c1(2,5);
constructor c2(5,8);
cout<<"Value 1 : "<<c1.area();
cout<<"\nValue 2 : "<<c2.area();
getch();
return 0;
}