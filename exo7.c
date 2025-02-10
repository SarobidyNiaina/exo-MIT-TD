
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int d, nb,i,max;
	printf("entrez le nombre des nombres:");
	scanf("%d", &nb);
	printf("entrez le nb numero 1:");
	scanf("%d", &max);
	for (i=2;i<=nb;i++)
	{
		printf("entrez le nb numero %d :", i);
		scanf("%d", &d);
		if (max<d)
		{
			max=d;
		}
	}
	printf("%d est la valeur max\n",max);
	return (0);
}
