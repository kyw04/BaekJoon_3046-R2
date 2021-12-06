#include <iostream>
using namespace std;
/* 
(R1 + R2) / 2 = S
R1 + R2 = 2S
R2 = 2S - R1
*/
int main()
{
	int R1, S;
	cin >> R1 >> S;
	cout << S * 2 - R1;
}