/*
Сумма положительных элементов
Считать массив из 10 элементов и подсчитать сумму положительных элементов массива. 

Данные на входе: 		10 целых чисел через пробел 
Данные на выходе: 	Одно целое число - сумма положительных элементов массива 

Пример №1
Данные на входе: 		4 -5 3 10 -4 -6 8 -10 1 0 
Данные на выходе: 	26 

Пример №2
Данные на входе: 		1 -2 3 -4 5 -6 7 -8 9 0 
Данные на выходе: 	25  
 */


#include <stdio.h>
int sum (int arr[], int len)
{
	int sum=0;
    for (int i = 0; i < len; i++)
		if (arr[i]>0){
			sum+=arr[i];
		}
	return (sum);
		
}

int Input (int arr[], int n) 
{
int i;
    for (i = 0; i < n; i++) 
        scanf ("%d", &arr[i]);
    return i;
}

int main(int argc, char **argv)
{
	int N=10;
	int mass[N];
	
	Input(mass,N);
	printf("%d",sum(mass,N));
	
	return 0;
}

