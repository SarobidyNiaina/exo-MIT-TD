#include <stdio.h>
int main ( )
{
	int i, coe, coet, nb;
	float moy=0.0, n;
	printf("entrez le nombre de notes:");
	scanf("%d", &nb);
	coet=0.0;
	for(i=1 ; i<=nb ; i++)
	{
		printf("entrez la note numero%d:", i);
		scanf("%f", &n);
		while(n<0 || n>20)
		{
			printf("rentrez la note(0<n<20) numero%d:", i);
			scanf("%f", &n);
		}
		printf("entrez coef=");
		scanf("%d", &coe);
		while(coe<1 || coe>10)
		{
			printf("rentrez le coe(1<coe<7)=");
			scanf("%d", &coe);
		} 	
		coet=coe+coet;
		moy=((moy*(coet-coe))+(n*coe))/coet;
	}
	printf("votre moyenne est %f", moy);
	return (0);
}
