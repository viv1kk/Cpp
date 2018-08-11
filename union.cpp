#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;

union data
{
int x;
float y;
char z[10];
};

int main (void)
{
union data d;
d.x = 10;
d.y = 12.5;
strcpy(d.z,"Copied");
cout<<d.x<<endl<<d.y<<endl<<d.z<<endl;
getch();
return 0;
}