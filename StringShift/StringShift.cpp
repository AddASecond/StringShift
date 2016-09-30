//#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Translation {
public:
	string stringTranslation(string A, int n, int len) {
		// write code here
		string B, C;
		int i;
		for (i = 0; i<len; i++) {
			B = B + A[i];
		}
		for (i = len; i<n; i++) {
			C = C + A[i];
		}
		return C + B;
	}
};

int main() {
	Translation Tr;
	string input,output;
	int n, len;
	cout << "Please input string: \n";
	cin >> input;
	n = input.length();
	cout << "The length of your input is: \n"<< n << '\n';
	cout << "Please input which location you want to split and exchange the 2 parts: \n";
	cin >> len;
	output = Tr.stringTranslation(input,n,len);
	cout << "The string after split and shift is: \n" << output << '\n';
}