/*
Точная степень двойки
Написать логическую рекурсивную функцию и используя ее определить является ли введенное натуральное число точной степенью двойки.
int is2pow(int n)
Данные на входе: 		Одно натуральное число. 
Данные на выходе: 	YES или NO 

Пример №1
Данные на входе: 		8 
Данные на выходе: 	YES 

Пример №2
Данные на входе: 		7 
Данные на выходе: 	NO
 */


#include <stdio.h>

int is2pow(int n)
{
	if(n%2==0&&n>2){
		n=n%2 + is2pow(n/2);
	}
	n=n%2;
	return(n);
}

int main(void)
{
	int a;
	scanf("%d", &a);
	is2pow(a) ? printf("NO") : printf("YES");
	return 0;
}

