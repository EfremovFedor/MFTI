/*
F15
Больше по модулю
Написать функцию и программу, демонстрирующую работу данной функции, которая определяет в массиве, состоящем из положительных и отрицательных чисел, сколько элементов превосходят по модулю максимальный элемент. Прототип функции
int count_bigger_abs(int n, int a[]);

Данные на входе: 		Функция получает размер массива и массив целых чисел 
Данные на выходе: 	Функция возвращает целое число раное количеству элементов превосходящих по модулю максимальный элемент. 

Пример
Данные на входе: 		1 -20 3 4 -50 6 7 8 9 10.
Данные на выходе: 	2 
 */


#include <stdio.h>
int Input(int arr[], int n)
{
int i,num;                          
	while(scanf("%d",&num)==1){
		arr[i++] = num;
	}  
    return i;
}

void count_bigger_abs(int n, int arr[])
{
	int Max=0;
	int digits=0;
	for(int i=0;i<n;i++){
		if(arr[i]>Max){
			Max=arr[i];
		}
	}
	for(int j=0;j<n;j++){
		if(arr[j]>Max || arr[j]<-Max){
			digits++;
		}
	}
	
	printf("%d",digits);
}

int main(void)
{
	int N=20;
	int mass[N];
	int cout = Input(mass,N);
	count_bigger_abs(cout,mass);
	
	return 0;
}

