
#include <stdio.h>

int main(void)
{
	int a,b,c,d,f,min;
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&f);
	min = a<b ? a : b;
	min = b<c ? b : c;
	min = c<d ? c : d;
	min = d<f ? d : f;
	printf("%d", min);
	return 0;
}

