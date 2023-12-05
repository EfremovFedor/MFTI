/*
F4 Практ 1
Цифры в строке
Написать функцию и программу, демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество. Функция должно строго соответствовать прототипу:

void print_digit(char s[])

Данные на входе: 		Строка из английских букв, пробелов, знаков препинания и цифр 
Данные на выходе: 	Функция должна принимать на вход строку и выводить на печать по формату: Цифра пробел количество. 

Пример
Данные на входе: 		Hello123 world77. 
Данные на выходе: 	1 1 2 1 3 1 7 2 
 */


#include <stdio.h>
int Scanf (char arr[])
{
	char c;
	int i=0;
	while((c=getchar()) != '.'){
		arr[i++]=c;
	}
	arr[i]='\0';
	return i;
}

void print_digit(char s[])
{
	char digit;
	for (digit ='1';digit<='9';digit++){
		int i=0,cout=0;
		while(s[i]!=0){
			if(s[i]==digit){
				cout++;
			}
			i++;
		}
		if (cout>0){
			printf("%c %d ",digit,cout);
		}
	}

}

int main(void)
{
	int N=20;
	char mass[N];
	Scanf(mass);
	print_digit(mass);
	
	
	return 0;
}

