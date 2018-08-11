#include <iostream>
#include <conio.h>
using namespace std;

class constructor
{
private : 
	int a;
	int b;
public :
int area()
{
return a * b;
}
constructor(int x, int y)
{
a = x;
b = y;
}
};
int main (void)
{
constructor c1(5, 9);
constructor c2(12, 4);
cout <<"Value 1 : "<<c1.area()<<endl;
cout <<"Value 2 : "<<c2.area()<<endl;
getch();
return 0;
}