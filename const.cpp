#include <iostream>
#include <conio.h>
using namespace std;

class test
{
int value;
public:
test(int v = 0){
value = v;
}
int getval()
const
{return value; }
};
int main (void)
{
test t(6);
cout<<t.getval();
getch();
return 0;
}