#include <iostream>
#include <string>
using namespace std;


/////////////////////////
// Function definition //
/////////////////////////
void replace(string& s1, string& s2, string& s3);


int main() {

	// User's input
	string s1, s2, s3;

	cout << "Initial string: ";
	getline(cin, s1);

	cout << "String to be replaced: ";
	getline(cin, s2);

	cout << "String to replace with: ";
	getline(cin, s3);

	replace(s1, s2, s3);

	cout << "New string: " << s1 << endl;

	return 0;
}

void replace(string& s1, string& s2, string& s3) {
	string:: size_type pos = s1.find_first_of(s2);


	while (pos != string::npos)
	{
		s1.erase(pos,s2.length());
		s1.insert(pos, s3);
		pos = s1.find_first_of(s2);
	}



}