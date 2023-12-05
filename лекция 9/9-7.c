/*
F11 Практ 3
Сумма минимальна
Написать функцию и программу, демонстрирующую работу данной функции.
Дан целочисленный массив из 30 элементов. Элементы массива могут принимать произвольные целые значения помещающиеся в int. Необходимо создать функцию, которая находит и выводит в порядке возрастания номера двух элементов массива, сумма которых минимальна. 

Данные на входе: 		Последовательность из 30 целых чисел через пробел 
Данные на выходе: 	Два целых числа через пробел 

Пример
Данные на входе: 		1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 
Данные на выходе: 	0 1 
 */


#include <stdio.h>

int Input (int arr[], int n) 
{
int i;
    for (i = 0; i < n; i++) 
        scanf ("%d", &arr[i]);
    return i;
}

void sum (int arr[], int n)
{
	int Min1=99;
	int adreesMin1;
	int Min2=99;
	int adreesMin2;
	for(int i=0; i<n; i++){
		if(arr[i]<Min1){
			Min1=arr[i];
			adreesMin1=i;
		}
	}
	for(int i=0; i<n; i++){
		if(arr[i]<Min2 && arr[i]>Min1){
			Min2=arr[i];
			adreesMin2=i;
		}
	}
	printf ("%d %d",adreesMin1,adreesMin2);
}

int main(int argc, char **argv)
{
	int N=30;
	int mass[N];
	Input(mass,N);
	sum(mass,N);
	
	return 0;
}

