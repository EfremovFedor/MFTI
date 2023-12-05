/*
F2 ДЗ 2
Четные в начало
Написать функцию и программу, демонстрирующую работу данной функции, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[])

Данные на входе: 		Функция принимает на вход целые числа 
Данные на выходе: 	Отсортированный исходный массив 

Пример №1
Данные на входе: 		20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
Данные на выходе: 	20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1 

Пример №2
Данные на входе: 		1 0 1 0 1 
Данные на выходе: 	0 0 1 1 1 
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

void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void SwapArr(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i]   = arr[j];
    arr[j]   = temp;
}


void sort_even_odd(int arr[], int n)
{
	int i,j=0;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]%2==1){
				SwapArr(arr,j,i);
			}
		}
	} 
}


int main(int argc, char **argv)
{
	int N=20;
	int mass[N];
	int cout = Input (mass,N);
	sort_even_odd(mass,cout);
	Print(mass,cout);
	
	return 0;
}


