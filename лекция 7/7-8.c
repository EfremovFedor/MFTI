/*
Сколько раз встречается символ a
Дана строка из английских символов, пробелов и знаков препинания. В конце строки символ точка. Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного потока ввода и возвращает целое число - количество символов 'a' в данной строке.
int acounter(void)
Используя данную функцию решить задачу.

Данные на входе: 		Строка состоящая из английских букв, пробелов и знаков препинания. В коне строки символ '.' 
Данные на выходе: 	Одно целое число. 

Пример №1
Данные на входе: 		abcd a. 
Данные на выходе: 	2 

Пример №2
Данные на входе: 		Hello world. 
Данные на выходе: 	0 
 */


#include <stdio.h>
int acounter(void)
{
	int cout=0;
	char c;
	if ((c = getchar()) != '.'){
		if (c == 'a'){
			cout+=1;
		}
		cout += acounter();
		return(cout);
	}
	return (cout);
}
int main(void)
{
	printf("%d",acounter());
	return 0;
}

