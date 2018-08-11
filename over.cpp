#include <iostream>
#include <conio.h>
using namespace std;

class mad
{
int a, b;
float c;
float d, e;
public : 
int area(int, int);
float area (float);
double area(double, double);
};
int mad :: area(int a, int b)
{
return a * b;
}
float mad :: area(float c)
{
return 3.14 * c * c;
}
double mad :: area(double d, double e)
{
return d * e;
}
int main (void)
{
mad a;
cout<<a.area(3, 4)<<endl;
cout<<a.area(12.0)<<endl;
cout<<a.area(2.0, 5.0)<<endl;
getch();
return 0;
}
