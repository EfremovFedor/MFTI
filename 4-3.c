
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	int a=t%10, b=t/10%10, c=t/100%10;
	if (a>b&&a>c){
		printf("%d",a);
	}
	else if (b>c){
		printf("%d", b);
	}
	else{
		printf("%d", c);
	}
	return 0;
}

