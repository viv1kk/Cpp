// 09:45 PM 24-09-2017
// Area of Circle version 3 using define

#include <iostream>
#define PI 3.14159
using namespace std;

int main (void)
{
float a, b;
cout <<"Enter the Radius of Circle : ";
cin >>a;
b = PI * a * a;
cout <<"The Area of circle of Radius "<<a<<" is "<<b;
return 0;
}