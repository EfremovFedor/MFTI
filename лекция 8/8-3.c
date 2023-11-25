/*
Среднее арифметическое массива
Считать массив из 12 элементов и подсчитать среднее арифметическое элементов массива. 

Данные на входе: 		12 целых чисел через пробел 
Данные на выходе: 	Среднее арифметическое в формате "%.2f" 

Пример №1
Данные на входе: 		4 -5 3 10 -4 -6 8 -10 1 0 5 7 
Данные на выходе: 	1.08 

Пример №2
Данные на входе: 		1 2 3 4 5 6 7 8 9 10 11 12 
Данные на выходе: 	6.50 
 */


#include <stdio.h>

float sum (float arr[], int len)
{
	float sum=0;
    for (int i = 0; i < len; i++)
			sum+=arr[i];
	return (sum/12);
		
}

int Input (float arr[], int n) 
{
int i;
    for (i = 0; i < n; i++) 
        scanf ("%f", &arr[i]);
    return i;
}

int main(int argc, char **argv)
{
	int N=12;
	float mass[N];
	
	Input(mass,N);
	printf("%.2f",sum(mass,N));
	
	return 0;
}


