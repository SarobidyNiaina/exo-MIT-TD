#include <stdio.h>
int main ( )
{
	int a, b , c, d;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);
	d=a;
	a=c;
	c=d;
	printf("a=%d , b=%d , c=%d\n", a, b ,c);
	return (0);
}
