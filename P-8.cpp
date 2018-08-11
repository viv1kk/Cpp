// 10:19 PM 26-09-2017
// demonstrates need for setw manipulator

#include <iostream>
using namespace std;

int main (void)
{
long pop1 = 245154262, pop2 = 7894, pop3 = 389523;
cout << "LOCATION " << "POP." << endl << "Portcity " << pop1 << endl << "Hightown " << pop2 << endl << "Lowville " << pop3 << endl;

return 0;
}