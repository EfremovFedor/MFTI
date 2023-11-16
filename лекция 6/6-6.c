/*
Цифры по возрастанию

Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу.

int grow_up(int n)

Данные на входе: 		Одно целое не отрицательное число 
Данные на выходе: 	YES или NO 

Пример №1
Данные на входе: 		258 
Данные на выходе: 	YES 

Пример №2
Данные на входе: 		528 
Данные на выходе: 	NO  
 */


#include <stdio.h>

int grow_up(int a)
{
	int digit_a, digit_b;
	while(a!=0){
		digit_a = a%10;
		a = a/10;
		digit_b = a%10;
		if (digit_a<digit_b){
			break;
		}
	}
	return (1);
}
	
int main(void)
{
	int a;
	scanf("%d",&a);
    grow_up(a)? printf("yes"):printf("no");
	return 0;
}

