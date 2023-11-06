
#include <stdio.h>

int main(void)
{
	float X, XX, Y, YY, k, b;
	scanf("%f %f %f %f", &X,&Y,&XX,&YY);
	k=(YY-Y)/(XX-X);
	b=YY-(YY-Y)/(XX-X)*XX;
	printf("%.2f %.2f", k,b);
	
	return 0;
}

