#include<iostream>
using namespace std;

int main()
{
/*	char c1;
	cout << "please input a character:" << endl;
	cin >> c1;
	
	if(c1 == 'a')
	{
		cout << c1;
	}
	else
	{
		c1++;
		cout << c1;
	}*/
	
	int c1 = 0;
	cin >> c1;
	
	if(c1>100)
	{
		cout << "������ִ���100Ŷ";
	}
	else
		if(50<c1&&c1<=100)
	{
		cout << "������֡����ߣ�";
	}
	else
		if(0<=c1&&c1<=50)
	{
		cout << "������ôԽ��ԽС��";
	}
	else
		if(c1<0)
	{
		cout << "ɵyx";
	}
	
	return 0;
	//������䵱�У�����ж����ϵ����Ҫ���߼����������� && �� ||
}

