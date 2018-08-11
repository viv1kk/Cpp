// 11:15 PM 03-11-2017
/* If you have two fractions, a/b and c/d, their sum can be obtained from the formula
 a     c     a*d + b*c
--- + --- = -----------
 b     d        b*d
For example, 1/4 plus 2/3 is
 1      2    1*3 + 4*2     3 + 8     11
--- + --- = ----------- = ------- = ----
 4     3        4*3          12      12
Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction
with the user might look like this:
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
You can take advantage of the fact that the extraction operator (>>) can be chained to
read in more than one quantity at once:
cin >> a >> dummychar >> b;
Chapter 2
72 */

#include <iostream>
using namespace std;

int main (void)
{
int a=0, b=0, c=0, d=0;
int  f=0, g=0; 
char e = '/';
cout<<"Enter Fraction no. 1 : ";
cin>>a>>e>>b;
cout<<"Enter Fraction no. 2 : ";
cin>>c>>e>>d;
if (e != '/')
{
cout<<"This is not a fraction.";
}
else{
int f = (a*d) + (b*c);
int g = (b*d);
cout<<endl<<"The sum of Above two Fraction is : "<<f<<e<<g<<endl;
}
return 0;
}