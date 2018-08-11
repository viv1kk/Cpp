#include <iostream>
#include <conio.h>
using namespace std;

class chk
{private :
int a;
public:
constructor();
void disp();
constructor(int, int);
chk :: constructor()
{
a = 0;
}
chk :: constructor(int x, int y)
{
a = x * y;
}
void chk :: disp();
{
cout<<a<<endl;
}
};
int main (void)
{
chk b;
chk b2(10, 15) ;
b.disp();
b2.disp();
getch();
return 1;
}