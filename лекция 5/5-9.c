/*
B13
Количество четных и нечетных цифр
Подсчитать количество четных и нечетных цифр числа. 

Данные на входе:		Одно целое неотрицательное число. 
Данные на выходе:	Два числа через пробел. Количество четных и нечетных цифр в числе. 

Пример №1
Данные на входе:		1234 
Данные на выходе:	2 2 

Пример №2
Данные на входе:		787 
Данные на выходе:	1 2 
 */


#include <stdio.h>

int main(void)
{
	int a,digit,count_chet=0,count_ne_chet=0;
	printf("enter a>=0 \n");
	scanf("%d",&a);
	if (a>0){
		while(a!=0){
			digit=a%10;
			a=a/10;
			if (digit%2==0){
				count_chet++;
			}
			if (digit%2!=0){
				count_ne_chet++;
			}
		}
	}
	else{
		printf("wrong namber");
	}
	printf("%d %d", count_chet,count_ne_chet);
	
	return 0;
}

