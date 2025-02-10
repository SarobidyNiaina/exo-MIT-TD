#include <stdio.h>
int main ( )
{
	int n;
	printf("veuillez entrez le nombre à identifier:");
	scanf("%d", &n);
	if(n<0)
	{
		printf("%d est negatif", n);
	}
	else
	{
	printf("%d est un nombre positif", n);
	}
	return (0);
}
