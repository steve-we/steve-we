/*
 Filename:
 Author:Hu Wen
 Time:Apr 29 ,2022
 Function:
 */
#include<iostream>
using namespace std;
int main()
{
	double x;
	int arr[5][4] = { 0 };  //����Ա���1-4����Ʒ���1-5��
	int i, j,sum=0,s=0;
	cout << "����Ա���1-4����Ʒ���1-5" << endl;
	cout << "�����������Ʒ��ţ�����Ա��ź͵���������ܶ�м�ո���������롰0 0 0���������룩�� " << endl;
	while (1)
	{
		cin >> i >> j >> x;
		if (0 == i)break;
		arr[i-1][j-1] += x;
	}
	cout << "\t1\t" << "2\t" << "3\t" << "4\t"<<"sum" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << i + 1 << "\t";
		for (j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "\t";
			sum += arr[i][j];
		}
		cout <<sum<< endl;
		sum = 0;
	}
	cout << "sum\t";
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 5; i++)
		{
			s += arr[i][j];
		}
		cout << s << "\t";
		s = 0;
	}
	return 0;
}
