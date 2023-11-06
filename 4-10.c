
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a<4){
		printf("winter");
	}
	else if (a>3&&a<7){
		printf("spring");
	}
	else if (a>6&&a<10){
		printf("summer");
	}
	else if (a>9&&a<13){
		printf("autumn");
	}
	else {
		printf("wrong namber");
	}
	
	return 0;
}

