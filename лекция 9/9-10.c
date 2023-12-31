/*
F16 ДЗ 
Клетки
Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х цветов, например, черного и белого (см. рисунок). Каждая клетка имеет координату, состоящую из буквы и цифры. Горизонтальное расположение клетки определяется буквой от A до H, а вертикальное – цифрой от 1 до 8. Заметим, что клетка с координатой А1 имеет черный цвет. Требуется по заданной координате определить цвет клетки.


Данные на входе: 		В единственной строке записана координата клетки на шахматной доске: всего два символа – буква и цифра (без пробелов). 
Данные на выходе: 	В выходной файл нужно вывести «WHITE», если указанная клетка имеет белый цвет и «BLACK», если она черная. 

Пример №1
Данные на входе: 		C3 
Данные на выходе: 	BLACK 

Пример №2
Данные на входе: 		G8 
Данные на выходе: 	WHITE 
 */


#include <stdio.h>
void Scanf (char arr[])
{
	for(int i=0;i<2;i++){
		scanf("%c",&arr[i]);
	}
}

int main(void)
{
	int mass[8][8];
	int i,j;
	int a=0;
	int b=1;
	for(i=0;i<8;i++){                      // сделал многомерный массив и присвоил клеткам в шахматном порядке значения 1 и 0
		for(j=0;j<8;j++){
			if((i+j)%2!=0){
				mass[i][j]=b;
			}
			else{
				mass[i][j]=a;
			}
		}
	}

	
	char arr[2];
	Scanf(arr);
	int cout=0;
	int KorGor;
	int KorVert;
	for(char c='A';c!='H';c++){             // считываю символы и определяю координаты по горизонтали и вертикали. Другого способа перевода C3 и G8 из char в int не придумал
		cout++;
		if (arr[0]==c){
			KorGor=cout;
		}
	}
	cout=0;
	for(char p='1';p!='9';p++){
		cout++;
		if (arr[1]==p){
			KorVert=cout;
		}
	}

	
	
	mass[KorGor][KorVert] ? printf("WHITE" ): printf("BLACK");      // по кординатам проверяю, что в клетке 0 или 1
	
	
	return 0;
}
