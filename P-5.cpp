// 06:00 PM 23-09-2017
// demonstrates floating point variables

#include <iostream>
using namespace std;
int main (void)
{
float a;
cout <<"Enter the radius of Circle : ";
cin >>a;
float b = (22.0 / 7.0) * a * a;
cout <<"The Area of Circle of radius "<<a <<" is "<<b;
return 0;
}