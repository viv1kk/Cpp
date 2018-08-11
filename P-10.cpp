// 02:41 PM 02-10-2017
// tests signed and unsigned integers

#include <iostream>
using namespace std;

int main (void)
{
int signedvar = 1500000000;		// signed variable
unsigned int unsignedvar = 1500000000;	// unsigned variable

signedvar = (signedvar * 2) / 3;	// calculation exceeds the range
unsignedvar = (unsignedvar * 2) / 3;	// calculation within range

cout << "  Signed var = "<< signedvar <<endl;
cout << "Unsigned var = "<< unsignedvar <<endl;

return 0;
}