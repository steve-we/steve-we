/*
 Filename:
 Author:Hu Wen
 Time:Apr 29 ,2022
 Function:
 */
#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(string str);
int main() {
	string str;
	cin >> str;
	if(isPalindrom(str)) {
	cout << "true" << endl;
	}else{
	cout << "false" << endl;
	}
}

bool isPalindrom(string str) {
	int len = str.length();
	if(str.length() < 2) {
		return true;
	}else {
		return str[0] == str[len - 1] && isPalindrom(str.substr(1, len -2));
	}
}
