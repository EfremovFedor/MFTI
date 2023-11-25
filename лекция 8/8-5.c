/*
 * 999.c
Инверсия каждой трети
Считать массив из 12 элементов и выполнить инверсию для каждой трети массива. 

Данные на входе: 		12 целых чисел через пробел 
Данные на выходе: 	12 целых чисел через пробел 

Пример №1
Данные на входе: 		4 -5 3 10 -4 -6 8 -10 1 0 5 7 
Данные на выходе: 	10 3 -5 4 -10 8 -6 -4 7 5 0 1 

Пример №2
Данные на входе: 		1 2 3 4 5 6 7 8 9 10 11 12 
Данные на выходе: 	4 3 2 1 8 7 6 5 12 11 10 9
 */


#include <stdio.h>

int Input (int arr[], int n) 
{
int i;
    for (i = 0; i < n; i++) 
        scanf ("%d", &arr[i]);
    return i;
}

void Print(int *arr,int len)
{
int i;
for (i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void HalfInv (int *arr, int n)
{
	int pos = 0;
	for (int i=0; i<n; i++){
		if (i==0 || i==4 || i==8){
			pos = arr[i];
			arr[i] = arr[i+3];
			arr[i+3] = pos;
		}
		if (i==1 || i==5 || i==9){
			pos = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = pos;
		}
	}
}
	
int main(void)
{
	int N=12;
	int mass[N];
	
	Input(mass,N);
	HalfInv(mass,N);
	Print(mass,N);
	
	return 0;
}

