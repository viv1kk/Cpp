#include <iostream>
#include <conio.h>
using namespace std;

class dest
{
private: int a;
public : 
dest()
{
cout<<"Constructor is called..."<<endl;
int a = 10;
}
void disp()
{
cout<<a<<endl;
}
~ dest()
{
cout<<"Object is destroyed...";
}
};
int main (void)
{
dest d;
d.disp();
getch();
return 0;
}