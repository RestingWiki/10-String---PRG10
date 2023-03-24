#include <iostream>
#include <string>
using namespace std;


/////////////////////////
// Function definition //
/////////////////////////
string toHexaDecimal(int n);
char toChara(int digit);


/////////////////
int main() {


	// User's input
	int a = 4097;
	cout << toHexaDecimal(a) << endl;



	return 0;
}


/////////////////////////
// Function definition //
/////////////////////////
string toHexaDecimal(int n) {

    if (n < 16)
		return string("") + toChara(n);
	else
		return toHexaDecimal(n / 16) + toChara(n % 16);
}
char toChara(int digit) {
	if (0 <= digit && digit <= 9)
		return (digit + '0');
	else
	{
		return (digit - 10 + 'A');
	}
}
