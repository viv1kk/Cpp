// 05:17 PM 26-10-2017
// demonstration for prefix and postfix of increment operator

#include <iostream>
using namespace std;

int main (void)
{
int count = 10;
cout << "count = " << count << endl;	// shows 10
cout << "count = " << ++count << endl;	// shows 11 (prefix)
cout << "count = " << count << endl;	// shows 11
cout << "count = " << count++ << endl;	// shows 11 (postfix)
cout << "count = " << count << endl;	// shows 12
return 0;
}