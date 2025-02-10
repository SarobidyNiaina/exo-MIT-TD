#include <stdio.h>
int main ( )
{ 	//nombre paire 
	int g, n, i, b, j;
	float r=1.0;
	printf("entrez le nombre n:");
	scanf("%d", &n);
	if(n<=1)
	{
		printf("ESPECE DE CON, RECOMMENCE avec nombre >1!!!\n");
		printf("entrez n:");
		scanf("%d", &n);
	}
	for( i=2 ; i<=n ; i=i+2)
	{
		printf("%d est un nombre paire.\n", i);
		
		if(i==n)
		{
			printf("voulez vous recommencez?? (0 ou 1)\n");
			scanf("%d", &b);
			if(b==1)
			{
				i=2;
				printf("entrez le nombre n:");
				scanf("%d", &n);
				while (n<1)
				{
					printf("reentrez n:");
					scanf("%d", &n);
				}	
			}
		}
	}
	
	return (0);
}
