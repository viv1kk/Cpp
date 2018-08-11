#include <iostream>
#include <conio.h>
using namespace std;

int main (void)
{
int a;
for (a = 1; a <= 10; a++)
{
if (a == 6)
{
cout<<"six being skipped.\n";
continue;
}
cout <<a<<endl;
}
getch();
return 0;
}