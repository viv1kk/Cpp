// 07:44 PM 02-10-2017
// test signed and unsigned integers

#include <iostream>
using namespace std;

int main (void)
{
int Var= 1500000000;
Var = (Var * 10) / 10;		// value beyond memory
cout << "Var = " << Var <<endl;
Var = 1500000000;
Var = (static_cast <double>(Var) * 10) / 10;
cout << "Var = " << Var << endl;

return 0;
}