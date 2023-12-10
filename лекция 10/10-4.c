/*
G8 ДЗ 3
Числа в массив
В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл .txt. 

Данные на входе: 		Строка из английских букв, цифр и знаков препинания 
Данные на выходе: 	Последовательность целых чисел отсортированная по возрастанию 

Пример
Данные на входе: 		data 48 call 9 read13 blank0a 
Данные на выходе: 	0 9 13 48 
 */


#include <stdio.h>

int digit(char arr[],int mass[],int n)
{
	int cout=0;
	for(int i=0;i<n;i++){
		if(arr[i]>='0'&&arr[i]<='9'){
			if(arr[i+1]>='0'&&arr[i+1]<='9'){
				mass[cout]=(arr[i]-48)*10+(arr[i+1]-48);
				cout++;
			}
			else if(arr[i-1]<'0'||arr[i-1]>'9'){
				mass[cout]=arr[i]-48;
				cout++;
			}
		}
	}
	return cout;
}

void sort (int arr[],int n)
{
	int tmp;
	for(int i=0;i<n/2;i++){
		for(int j=n-1;j>0;j--){
			if (arr[i]>arr[j]){
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}

void print (int mass[],int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",mass[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	FILE *f;
	int N=1000;
	char mass[N];
	char c;
	int i=0;
	int cout=0;
	f=fopen("10-4.txt","r");
	while ((c=fgetc(f)) !=  EOF && c!='\n'){
		mass[i]=c;
		i++;
		cout++;
	}
	fclose(f);
	int arr[cout];
	int n=digit(mass,arr,cout);
	sort(arr,n);
	print(arr,n);
	
	return 0;
}

