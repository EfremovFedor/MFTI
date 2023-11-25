/*
Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1. 

Данные на входе: 		10 целых числе через пробел 
Данные на выходе: 	Одно число, которое встречается чаще других. 

Пример
Данные на входе: 		4 1 2 1 11 2 34 11 0 11 
Данные на выходе: 	11
 */


#include <stdio.h>

int Input (int arr[], int n) 
{
int i;
    for (i = 0; i < n; i++) 
        scanf ("%d", &arr[i]);
    return i;
}

int func(int *arr,int n)
{
	int digit = 0; 
	int coutA = 0;
	for (int i=0; i<n;i++){
		int coutB = 0;
		for(int j=9; j>=0; j--){
			if(arr[i]==arr[j]){
				coutB++;
			}
		}
		if (coutA < coutB){
			digit=arr[i];
			coutA=coutB;
		}
	}
	return (digit);
}

int main(int argc, char **argv)
{
	int N=10;
	int mass[N];
	Input(mass,N);
	printf("%d ",func(mass,N));
	
	return 0;
}

