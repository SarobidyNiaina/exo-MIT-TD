#include <stdio.h>
#include <math.h>
int main ( )
{
         float a, b ,c ,x, s, delta;
	 printf("entrez a:");
	 scanf("%f", &a);
	 printf("entrez b:");
         scanf("%f", &b);
	 printf("entrez c:");
         scanf("%f", &c);
	if (a==0)
	{
		printf("ce n'est pas une equation quadratique");
	}
		delta = (b*b) -(4*a*c);
	if (delta==0)
	{
		x=(-b/(2*a));
		printf("x: %f", x);
	}
	 if(delta<0)
         {
         	delta=(-delta); 
         	x=(-b-sqrt(delta))/(2*a);
         	s=(-b+sqrt(delta))/(2*a);
         	printf("x: %fi et s: %fi", x, s); 
          }
          if(delta>0)
         { 
         	x=(-b-sqrt(delta))/(2*a);	
         	s=(-b+sqrt(delta))/(2*a);       
         	printf("x: %f et s: %f", x ,s);
	 }
         return (0);
}





