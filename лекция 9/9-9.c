/*
Сумма в интервале
Написать функцию и программу, демонстрирующую работу данной функции, которая возвращает сумму элементов в заданном отрезке [from, to] для массива. Прототип функции
int sum_between_ab(int from, int to, int size, int a[]) 

Данные на входе: 		Функция принимает концы отрезка from и to, размер массива, массив целых чисел 
Функция возвращает сумму элементов в интервале [from, to] 

Пример №1
Данные на входе: 		4 6 1 2 3 4 5 6 7 8 9 10. 
Данные на выходе: 	15 

Пример №2
Данные на входе: 		6 4 1 2 3 4 5 6 7 8 9 10 
Данные на выходе: 	15 
 */

#include <stdio.h>

void Input(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
}

int count_between (int from, int to, int size, int arr[])
{
	int a,b=0;
	for (int i=2;i<size;i++){
		if (arr[i]==from){
			a=i;
		}
		if(arr[i]==to){
			b=i;
		}
	}
	int sum=0;
	if(a<b){
		for(int j=a;j<=b;j++){
			sum=sum+arr[j];
		}
	}
	else{
		for(int j=b;j<=a;j++){
			sum=sum+arr[j];
		}
	}
	return sum;
}

int main(void)
{
	int N=30;
	int mass[N];
	Input(mass,N);
	int a=mass[0];
	int b=mass[1];
	printf("%d", count_between(a,b,N,mass));

	
	return 0;
}

