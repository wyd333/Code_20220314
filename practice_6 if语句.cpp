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
		cout << "这个数字大于100哦";
	}
	else
		if(50<c1&&c1<=100)
	{
		cout << "这个数字。。芜？";
	}
	else
		if(0<=c1&&c1<=50)
	{
		cout << "？？怎么越来越小了";
	}
	else
		if(c1<0)
	{
		cout << "傻yx";
	}
	
	return 0;
	//条件语句当中，如果有多个关系，则要用逻辑符号相连接 && 或 ||
}

