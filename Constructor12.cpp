#include <iostream>
#include <conio.h>
using namespace std;

class constructor
{
public :
int a, b; 
constructor()
{
a = 10;
b = 20;
}
};
int main (void)
{
constructor c;
cout<<c.a<<endl<<c.b<<endl;
getch();
return 0;
}