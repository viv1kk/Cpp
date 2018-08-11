// 09:38 PM 24-09-2017
// Area of Circle version 2 using const

#include <iostream>
using namespace std;
int main (void)
{
float a, c;
const float b = 3.14159F;
cout <<"Enter the Radius of Circle : ";
cin >>a;
c = b * a * a;
cout <<"The Area of Circle of Radius "<<a<<" is "<<c;
return 0;
}