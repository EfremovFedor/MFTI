
#include <stdio.h>

int main(void)
{
	int a,b,c,d,f,max,min;
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&f);
	max = a>b ? a : b;
	max = b>c ? b : c;
	max = c>d ? c : d;
	max = d>f ? d : f;
	min = a<b ? a : b;
	min = b<c ? b : c;
	min = c<d ? c : d;
	min = d<f ? d : f;
	printf("%d", max+min);
	
	return 0;
}

