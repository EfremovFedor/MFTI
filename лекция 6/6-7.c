/*
Сумма цифр равна произведению

Составить логическую функцию, которая определяет, верно ли, что в данном числе сумма цифр равна произведению.

int is_happy_number(int n)

Данные на входе: 		Целое не отрицательное число 
Данные на выходе: 	YES или NO 

Пример №1
Данные на входе: 		123 
Данные на выходе: 	YES 

Пример №2
Данные на входе: 		528 
Данные на выходе: 	NO
 */


#include <stdio.h>

int is_happy_number(int a)
{
	int sum=0,pr=1;
	while(a!=0){
		sum += a%10;
		pr *= a%10;
		a/=10;
	}
	return (sum==pr);
}
	
int main(void)
{
	int a;
	scanf("%d",&a);
    is_happy_number(a) ? printf("yes") : printf("no");
	return 0;
}

