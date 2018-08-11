#include <iostream>
#include <conio.h>
using namespace std;

class constructor
{
private : int a;
	int b;
public :
constructor()
{
a = 10;
b = 20;
}
void disp()
{
cout<<a<<endl;
cout<<b<<endl;
}
};
int main (void)
{
constructor c;
c.disp();
getch();
return 0;
}