/*
Переставить цифры
Переставить цифры в числе так, чтобы получилось максимальное число. 
Данные на входе: 		Одно целое не отрицательное число 
Данные на выходе: 	Целое неотрицательное число 

Пример №1
Данные на входе: 		1229 
Данные на выходе: 	9221 

Пример №2
Данные на входе: 		19 
Данные на выходе: 	91
 */


#include <stdio.h>                                               // решил через массив. Массив сделал фиксированной длины = 10. Сделать динамический массив не получилось. Вывожу максимальное число. Остальное нули.

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
        for(int j=i; j<0; j--){
			if(arr[j-1]%10 > arr[j]%10){
               SwapArr(arr,j-1,j);
            }
        }
    }
}

int main(int argc, char **argv)
{
	int digit;
	scanf("%d", &digit);
	int mass[10]={0,0,0,0,0,0,0,0,0,0};
	for (int i=0; digit>0; digit=digit/10,i++){
		mass[i]= digit%10;
	}
	Print(mass,10);
	Sort(mass,10);
	Print(mass,10);
	
	
	return 0;
}

