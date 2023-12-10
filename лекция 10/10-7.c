/*
Заканчивается на a
В файле .txt дано предложение. Необходимо определить, сколько слов заканчиваются на букву 'а'. Ответ записать в файл .txt. 

Данные на входе: 		Строка из английских букв и пробелов не более 1000 символов. 
Данные на выходе: 	Одно целое число 

Пример
Данные на входе: 		Mama mila ramu 
Данные на выходе: 	2 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	FILE *f;
	char n;
	int i=0;
	f = fopen("10-7.txt", "r");
	char mass[30]; 
	while (fscanf(f,"%c",&n) != EOF){
		mass[i]=n;
		i++;
	}
	mass[i]='\n';
	fclose(f);
	int N=strlen(mass);
	int cout=0;
	for(int j=0;j<N-1;j++){
		if(mass[j+1]==' '){
			if(mass[j]=='a'){
				cout++;
			}
		}
	}
	printf("%d",cout);
	return 0;
}

