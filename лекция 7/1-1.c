/*
В обратном порядке
Дано целое неотрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками. 
Данные на входе: 		Одно неотрицательное целое число 
Данные на выходе: 	Последовательность цифр введенного числа в обратном порядке через пробел 

Пример №1
Данные на входе: 		15 
Данные на выходе: 	5 1 

Пример №2
Данные на входе: 		54321 
Данные на выходе: 	1 2 3 4 5
 */


#include <stdio.h>

void digit(int a)
{
	printf("%d ",a%10);
	if (a>9) digit(a/10);	
}
int main(void)
{
	int a;
	scanf("%d",&a);
	digit(a);
	return 0;
}

