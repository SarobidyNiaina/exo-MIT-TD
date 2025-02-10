#include <stdio.h>
int main ( ) 
{
	int i, nb, coe, coeT;
	float moy=1.0, note;
	printf("entrez le nombre de notes:");
	scanf("%d", &nb);
	coeT=0.0;
	for(i=1 ; i<=nb ; i++)
	{
		printf("entrez le note numero %d: ", i);
		scanf("%f", &note);
		printf("entrez coeff:");
		scanf("%d", &coe);
		coeT = coeT + coe;
		moy = ((moy*(coeT-coe)+(note*coe)))/(coeT);
	}
	printf("votre moyenne est %f", moy);
	return (0);
}
