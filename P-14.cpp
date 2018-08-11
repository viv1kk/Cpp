// 11:00 PM 02-10-2017
// demonstrates arithmetic assignment operators

#include <iostream>
using namespace std;

int main (void)
{
int ans = 27;

ans += 10;
cout << ans << ", ";
ans -= 7;
cout << ans << ", ";
ans *= 2;
cout << ans << ", ";
ans /= 3;
cout << ans <<", ";
ans %= 3;
cout << ans <<endl;

return 0;
}