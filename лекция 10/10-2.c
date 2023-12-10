/*
G4 ДЗ 1
По одному разу
В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом. Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел в файл .txt в лексикографическом порядке. 

Данные на входе: 		Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов. 
Данные на выходе: 	Маленькие английские буквы через пробел. 

Пример №1
Данные на входе: 		hello world 
Данные на выходе: 	o 


Данные на входе: 		aabcd bcef 
Данные на выходе: 	b c 
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
	f=fopen("10-2.txt","r+");
	while ((c=fgetc(f)) !=  EOF && c!='\n'){
		mass[i]=c;
		i++;
		cout++;
	}
	fclose(f);
	f=fopen("10-22.txt", "w");
	int probel=0;
	for (i=0;i<cout;i++){
		if (mass[i]==' '){
			probel=i;
		}
	}
	for(int i=0;i<probel;i++){
		int ch=0;
		int ct=0;
		for (int j=probel;j<cout;j++){
			if (mass[i]==mass[j]){
				ct++;
			}
		}
		for(int k=probel-1;k>=0;k--){
			if(k==i){
				ch--;
			}
			if(mass[i]==mass[k]){
				ch++;
			}
		}
		if(ct==1&&ch==0){
			fprintf(f,"%c ",mass[i]);
		}
	}
	fclose(f);
	return 0;
}

