/*
Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре. 

Данные на входе: 		10 целых чисел через пробел 
Этот же массив отсортированный по последней цифре 

Пример №1
Данные на входе: 		14 25 13 30 76 58 32 11 41 97 
Данные на выходе: 	30 11 41 32 13 14 25 76 97 58 

Пример №2
Данные на входе: 		109 118 100 51 62 73 1007 16 4 555 
Данные на выходе: 	100 51 62 73 4 555 16 1007 118 109 
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

void SwapArr(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i]   = arr[j];
    arr[j]   = temp;
}

 
void Sort (int *arr,int n)
{
	int cout = 0;
    for(int i=n-1; cout<n; cout++)
    {
        for(int j=i; j>0; j--){
			if(arr[j-1]%10 > arr[j]%10){
               SwapArr(arr,j-1,j);
            }
        }
    }
}


int main(void)
{
	int N=10;
	int mass[N];
	
	Input(mass,N);
	Sort(mass,N);
	Print(mass,N);
	
	return 0;
}
