#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "functions.h"

// всё по заданию сделал кроме тестирования фукций. У меня 3 фукции нахождения точек пересечения(для каждого пересечения) и 3 функции нахождения площади(для каждой функции).
// не понял, что нужно тестировать 


int AbsFlag=0;                           // переменные для командной строки
int StepFlag=0;


int main(int argc,char* argv[])
{
    int res=0;                          // здесь считываю аргументы командной строки. Если в аргументе есть 1, то меняю значение переменной флага
 
    while((res=getopt(argc,argv,"ha:s:"))!=-1)
    {
        switch (res)
        {
            case 'h': printf("argumet -a = 1 if you need print abscis  -s = 1 if you need print Step");
            break;
            case 'a':
                AbsFlag=atoi(optarg);
            break;
            case 's':
                StepFlag=atoi(optarg);
            break;
        }      
    }
    float abscisF1F2, abscisF2F3,abscisF3F1;                // переменные для точек пересечения графиков по оси x
    abscisF1F2 = rootFindLineSearchF1F2(0,5,0.01);          // вычисляю 3 точки пересечения графиков с помощью функций
    abscisF2F3 = rootFindLineSearchF2F3(0,5,0.01);
    abscisF3F1 = rootFindLineSearchF3F1(0,5,0.01);

    float SqureF1 = integralF1(abscisF3F1,abscisF1F2,1000);   // вычисляю площать между крайними точками пересечения и двумя фигурами между
    float SqureF2 = integralF2(abscisF2F3,abscisF1F2,1000);
    float SqureF3 = integralF3(abscisF3F1,abscisF2F3,1000);

    float Squre = SqureF1-SqureF2-SqureF3;  // вычисляю площадь искомой фигуры
    printf("calcIntegralSquare = %f\n",Squre);
    return 0;
}
