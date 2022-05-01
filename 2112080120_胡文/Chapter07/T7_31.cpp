/*
 Filename:
 Author:Hu Wen
 Time:Apr 29 ,2022
 Function:
 */
#include<iostream>
using namespace std;

void stringReverse(string a,int len)
{
	cout << a[len - 1];
	if (0 == len - 1)return;
	return stringReverse(a, len - 1);
}

int main()
{
	string A = "abcdef";
	int len = 6;
	stringReverse(A, len);
	return 0;
}

