/*
G5 ДЗ 2
Заменить a на b
В файле .txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в .txt. 

Данные на входе: 		Строка из маленьких и больших английских букв, знаков препинания и пробелов. 
Данные на выходе: 	Строка из маленьких и больших английских букв, знаков препинания и пробелов. 

Пример
Данные на входе: 		aabbccddABCD 
Данные на выходе: 	bbaaccddBACD 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int N=1000;
	char mass[N];
	char c;
	int i=0;
	int cout=0;
	f=fopen("10-3.txt","r");
	while ((c=fgetc(f)) !=  EOF && c!='\n'){
		mass[i]=c;
		i++;
		cout++;
	}
	fclose(f);
	f=fopen("10-33.txt", "w");
	for(int i=0;i<cout;i++){
		if (mass[i]=='a'){
			fprintf(f,"%c",'b');
		}
		else if (mass[i]=='b'){
			fprintf(f,"%c",'a');	
			}
		else if (mass[i]=='A'){
			fprintf(f,"%c",'B');
		}
		else if (mass[i]=='B'){
			fprintf(f,"%c",'A');
		}
		else{
			fprintf(f,"%c",mass[i]);
		}
	}
	fclose(f);
	return 0;
}

