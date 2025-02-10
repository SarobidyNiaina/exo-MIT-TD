#include <stdio.h>
int main ( )
{
	int u2, u1, u0, n, i;
//execution du suite de fibonacci
	printf("entrez la valeur de n!\n");
	scanf("%d", &n);
	u0=0;
	u1=1;
	u2=0;
	if(n<2)
	{
		printf("veuillez réentrez un nombre superieur à 2!\n");
		scanf("%d", &n);
	}
		printf("u0= %d..,\n", u0);
		printf("u1= %d..,\n", u1);
	for(i=2 ; i<=n ; i++)
	{
		u2=u1+u0;
		printf("u%d= %d..,\n",i , u2);
		u0=u1;
		u1=u2;
	}
		return (0);
}
