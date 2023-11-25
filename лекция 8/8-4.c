/*
Инверсия половинок
Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива. Необходимо изменить считанный массив и напечатать его одним циклом. 

Данные на входе: 		10 целых элементов массива через пробел. 
Данные на выходе: 	10 целых элементов массива через пробел. 

Пример №1
Данные на входе: 		4 -5 3 10 -4 -6 8 -10 1 0 
Данные на выходе: 	-4 10 3 -5 4 0 1 -10 8 -6 

Пример №2
Данные на входе: 		1 2 3 4 5 6 7 8 9 10 
Данные на выходе: 	5 4 3 2 1 10 9 8 7 6 
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
		if (i<=2){
			pos = arr[i];
			arr[i] = arr[4-i];
			arr[4-i] = pos;
		}
		if (i==5){
			pos=arr[i];
			arr[i]=arr[9];
			arr[9]=pos;
		}
		if (i==6){
			pos=arr[i];
			arr[i]=arr[8];
			arr[8]=pos;
		}
	}
}
	
int main(void)
{
	int N=10;
	int mass[N];
	
	Input(mass,N);
	HalfInv(mass,N);
	Print(mass,N);
	
	return 0;
}

