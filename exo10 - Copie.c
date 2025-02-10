#include <stdio.h>
int main ( )
{
	int n, i, r, j;
	printf("entrez le nombrer N:");
	scanf("%d", &n);
	r=1;
	j=1;
	if(n==0)
	{
		printf("veillez donnez un nombre different de 0, le noob!\n");
     	}
	if(n<0)
	{
		n=(-n);
		j=(-n);
	}
	for(i=j ; i<=n ; i++)
	{
		r=n%i;
		if(r==0)
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
	
