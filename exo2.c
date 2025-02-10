#include <stdio.h>
int main ( )
{
	int a, b, r;
	printf("entrez a:");
	scanf("%d", &a);
	printf("entrez b:");
	scanf("%d", &b);
	r = a + b;
	if(r<0)
	{
		printf("la somme est negatif car a+b=%d\n", r);
	}
	else
	{
		printf("la somme est positif car a+b=%d\n", r);
	}
	return (0);
}
