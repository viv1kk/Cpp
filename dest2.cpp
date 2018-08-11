#include <iostream>
#include <conio.h>

using namespace std;

class dest
{
private:
int a;
public:
void disp()
{
a = 50;
cout<<a;
}
dest();
~dest();
};
dest :: dest()
{
cout<<"Constructor is Called...";
}
dest :: ~dest()
{
cout<<"Destructor, Object is Destroyed";
}
int main (void)
{
dest d;
d.disp();
getch();
return 0;
}