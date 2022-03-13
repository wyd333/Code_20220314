#include<iostream>
using namespace std;
#include<math.h>

int main()
/*{
	double a,b,c,s,area;
	cout << "input a,b,c\n";//printf
	cin >> a >> b >> c;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout << "a=" << a << ", b=" << b << ", c=" << c << ", s=" << s << "\n";
	cout << "area=" << area << endl;

}*/
	

	/*double a,b,c,delt,x1,x2;
	a = 0;
	b = 0;
	c = 0;
	delt = 0;
	
	delt = b*b-4*a*c;
	cout << "please input three numbers:\n ";
	cin >> a >> b >> c;
	if(delt>0)
	{
		x1 = (-b+sqrt(delt-4*a*c))/(2*a);
		x2 = (-b-sqrt(delt-4*a*c))/(2*a);
		cout << x1 << x2 << endl;
	}
	else
	{
		cout << "error" << endl;
	}*/
	//期望a=1，b=3，c=2.预期输出值为-1，-2?.但并没有得到预期的结果，打印了一个error
	
	{
		
	double a,b,c,delt,m,n,x1,x2;
	a = 0;
	b = 0;
	c = 0;
	m = 0;
	n = 0;
	delt = 0;
	
	

	cout << "please input three numbers:\n ";
	cin >> a >> b >> c;
	delt = b*b-4*a*c;
	m = -b/(2*a);
	n = sqrt(delt)/(2*a);
	if(delt>0)
	{
		x1 = m+n;
		x2 = m-n;
		cout << x1 << x2 << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	return 0;
}

