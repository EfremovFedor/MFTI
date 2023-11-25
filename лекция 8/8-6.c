/*
Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента. 

Данные на входе: 		12 целых чисел через пробел 
Данные на выходе: 	12 целых чисел через пробел 

Пример №1
Данные на входе: 		4 -5 3 10 -4 -6 8 -10 1 0 5 7 
Данные на выходе: 	1 0 5 7 4 -5 3 10 -4 -6 8 -10 

Пример №2
Данные на входе: 		1 2 3 4 5 6 7 8 9 10 11 12 
Данные на выходе: 	9 10 11 12 1 2 3 4 5 6 7 8 
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
 
void Sdvig (int *arr, int n)
{
	int rev = 0;
	for (int i=0; i!=4; i++){
		rev=arr[i+8];
		arr[i+8]=arr[i+4];
		arr[i+4]=arr[i];
		arr[i]=rev;
	}
}

int main(void)
{
	int N=12;
	int mass[N];
	
	Input(mass,N);
	Sdvig(mass,N);
	Print(mass,N);
	
	return 0;
}

