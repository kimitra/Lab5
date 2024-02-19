// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char translate(char c, const vector<char>& cypher) {
	if (c >= 'A' && c <= 'Z') {
		return cypher[c - 'A'];
	}
	else if (c >= 'a' && c <= 'z') {
		char upperCaseLetter = c - 32;
		char upperCaseCode = cypher[upperCaseLetter - 'A'];
		return upperCaseCode + 32;
	}
	else {
		return c;
	}
}

int main() {
	vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
	
	string text;
	cout << "Input text to cypher: ";
	getline(cin, text);

	string translatedText;
	for (char c : text) {
		translatedText += translate(c, cypher);
	}

	cout << "Encoded Message: \"" << translatedText << "\"" << endl;

	return 0;
}