#include <stdio.h>
int main ( )
{
	int d, n, g;
	float som, fact;
	do
	{
		do
		{
			printf("entrez le nombre N(n>0):");
			scanf("%d", &n);
			if(n<=0)
			{
				printf("erreur veuillez entrez un entier positif\n");
			}
		}
		while(n<=0);
		fact=1.0;
		som=0.0;
		for(g=1 ; g<=n ; g++)
		{
			fact = fact * g;
			som = som + (1.0/fact);
		}
		som = som + 1.0;
		printf(" la somme est %.6f\n", som);
		printf("voulez vous recommencer ?(0pour non ou 1pour oui)\n");
		scanf("%d", &d);
	}while(d==1);
	printf(" A plus alors!!\n");
	return (0);
}

