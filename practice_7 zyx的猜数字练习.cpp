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
//&����������

/*	int a,b,A;
	cout <<"�������������"<<endl;
	cin>>a>>b;
	A=3*a+5*b+3;
	cout<<"A="<<A<<endl;
	return 0;*/
//��������

/*	double a,b,c;
	cout << "input two numbers" << endl;
	cin>>a>>b;
	c=max(a,b);
	cout<<"the squart of maximum = "<<sqrt(c);
	return 0;*/
//�������нϴ�����ƽ��

srand(time(0));
int i, k = 0, m, n, x;
cout << "���漸���أ�ovo" << endl;
cin >> x;
while (k <= x-1)
{
k++;
cout << endl << "��" << k << "��:" << "���һ��" <<k<< "λ����" <<endl<<endl;
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
	{cout <<"��ϲ������ˣ���ϧû�н���"<<endl;
		break;
	}
	else if (n>m)cout<<"���´���"<<endl;
	else cout << "����С��"<<endl;
}
cout << endl;
}
cout<<endl<<endl<<"��Ӯ�ˣ���"<<endl<<endl;
system("pause");
return 0;
	}
