/*
E19 ДЗ *
Цифры по порядку
Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N. 

Данные на входе: 		Одно натуральное число N 
Данные на выходе: 	Цифры через пробел 

Пример
Данные на входе: 		54412 
Данные на выходе: 	5 4 4 1 2 
 */


#include <stdio.h>

void func (int n)
{ 
	int digit = n%10; 
	if (n>10){
		n=n/10;
		func(n);
	}
	printf ("%d ", digit);
}

int main(int argc, char **argv)
{
	int digit;
	scanf("%d", &digit);
	func(digit);
	
	return 0;
}

