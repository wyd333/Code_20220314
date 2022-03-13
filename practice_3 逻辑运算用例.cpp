#include<stdio.h>
/*main(){
	int a,b,c;
	a = 0;
	b = 10;
	c = a && b;
	printf("%d\n",c);
}*/

int main()
{
	int a,b,c,d,e;
	a = 1000;
	b = 0;
	c = a&&b;
	d = a||b;
	e = !a;
	printf("%d %d %d\n",c,d,e);
	return 0;
}
