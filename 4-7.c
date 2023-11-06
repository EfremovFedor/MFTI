
#include <stdio.h>

int main(void)
{
	int a,b,c,d,f, max;
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&f);
	max = a>b ? a : b;
	max = b>c ? b : c;
	max = c>d ? c : d;
	max = d>f ? d : f;
	printf("%d", max);
	return 0;
}

