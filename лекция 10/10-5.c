/*
G9 ДЗ 4
Удалить повторяющиеся символы
В файле .txt строка из меленьких и больших английских букв, знаков препинания и пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в файл .txt. 

Данные на входе: 		Строка из меленьких и больших английских букв, знаков препинания и пробелов. Размер строки не более 1000 сивмолов. 
Данные на выходе: 	Строка из меленьких и больших английских букв. 

Пример
Данные на входе: 		abc cde def 
Данные на выходе: 	abcdef  
 */


#include <stdio.h>
void sort (char arr[],int n)
{
	for(int i=0;i<n;i++){
		int cout=0;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cout++;
			}
		}
		if(cout==0&&arr[i]!=' '){
			printf("%c",arr[i]);
		}
	}
}

int main(int argc, char **argv)
{
	FILE *f;
	int N=1000;
	char mass[N];
	char c;
	int i=0;
	int cout=0;
	f=fopen("10-5.txt","r");
	while ((c=fgetc(f)) !=  EOF && c!='\n'){
		mass[i]=c;
		i++;
		cout++;
	}
	fclose(f);
	sort(mass,cout);
	
	return 0;
}

