#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;

int main()
{
/*	int a = 2;
	int b = 7;
	int c = 0;
	
	c = a&b;
	printf("%d\n",c);
	
	return 0;*/
//&代表与运算

/*	int a,b,A;
	cout <<"请键入两个数字"<<endl;
	cin>>a>>b;
	A=3*a+5*b+3;
	cout<<"A="<<A<<endl;
	return 0;*/
//数字运算

/*	double a,b,c;
	cout << "input two numbers" << endl;
	cin>>a>>b;
	c=max(a,b);
	cout<<"the squart of maximum = "<<sqrt(c);
	return 0;*/
//求两数中较大数的平方

srand(time(0));
int i, k = 0, m, n, x;
cout << "想玩几关呢？ovo" << endl;
cin >> x;
while (k <= x-1)
{
k++;
cout << endl << "第" << k << "关:" << "请猜一个" <<k<< "位数。" <<endl<<endl;
m = rand() % 9 + 1;
for(i=1;i<=k-1;i++)
m = m*10 + rand() % 10;
while(1)
{
	cin >> n;
	while(!cin)
	{
		cin.clear();
		cin>>n;
	}
	if(n==0)
	cin>>n;
	if(n==m)
	{cout <<"恭喜您答对了，可惜没有奖励"<<endl;
		break;
	}
	else if (n>m)cout<<"您猜大了"<<endl;
	else cout << "您猜小了"<<endl;
}
cout << endl;
}
cout<<endl<<endl<<"您赢了，芜"<<endl<<endl;
system("pause");
return 0;
	}
