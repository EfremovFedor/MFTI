#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	scanf( "%d %d %d",&a, &b, &c);
	float f=(a+b+c)/3;
	printf("%.2f", f);
	return 0;
}

