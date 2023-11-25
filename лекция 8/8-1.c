/*
Среднее арифметическое чисел
Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива. 

Данные на входе: 		5 целых ненулевых чисел через пробел 
Данные на выходе: 	Одно число в формате "%.3f" 

Пример №1
Данные на входе: 		4 15 3 10 14 
Данные на выходе: 	9.200 

Пример №2
Данные на входе: 		1 2 3 4 5 
Данные на выходе: 	3.000 
 */


#include <stdio.h>
int Input (float arr[], int n) 
{
int i;
    for (i = 0; i < n; i++) 
        scanf ("%f", &arr[i]);
    return i;
}

int main(void)
{
	int N=5;
	float mass [N];
	Input(mass,N);
	
	printf("%3f", (mass[1]+mass[2]+mass[3]+mass[4]+mass[0])/5);
	
	
	return 0;
}

