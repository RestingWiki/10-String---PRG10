#include <iostream>
#include <string>
using namespace std;


/////////////////////////
// Function definition //
/////////////////////////
bool checkPalindromes(const string& line);
void reverse(string& s, string::size_type left, string::size_type right);


int main() {
	// User's input
	string s1, s2;

	cout << "Input string: ";
	getline(cin, s1);

	if (checkPalindromes(s1))
		cout << "This is a palindromes!" << endl;
	else
		cout << "This isn't a palindromes" << endl;


	return 0;
}


/////////////////////////
// Function definition //
/////////////////////////
bool checkPalindromes(const string& line) {

	// Create a copy of the string 
	string s2 = line;
	
	// Convert to uppercase
	for (int i = 0; i < s2.length(); i++)
	{
		if (97 <= s2.at(i) && s2.at(i) <= 122)
			s2.at(i) -= 32;
	}
	
	// Replace special letter, whitespace
	string::size_type wStart, wEnd;
	string delimeter = " :',";
	int pos = s2.find_first_of(delimeter);

	while (pos != string::npos)
	{
		s2.erase(pos,1);
		pos = s2.find_first_of(delimeter);
	}

	string s3 = s2;
	// Reverse the string then compare
	reverse(s3,0, s3.length()-1);

	return (s2 == s3);
}
void reverse(string& s, string:: size_type left, string::size_type right) {
	if (left >= right)
	{
		return;
	}
	else
	{
		char temp = s.at(left);
		s.at(left) = s.at(right);
		s.at(right) = temp;
		reverse(s,++left,--right);
	}
}