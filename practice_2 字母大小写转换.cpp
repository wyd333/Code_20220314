#include<iostream>
using namespace std;

/*int main()
{

	char c1,c2;
	c1='a';c2='b';
	c1=c1-32;
	c2=c2-32;
	printf("c1=%c,c2=%c\nc1=%d,c2=%d\n",c1,c2,c1,c2);

	return 0;
}*/

int main()
{
	char c1,c2;
	c1 = 'a';
	c2 = 'b'-('a'-'A');
	printf("%c\n%d",c2);

	return 0;
	
}
