#include <stdio.h>
#include <math.h>

extern int AbsFlag;       // значения переменных с флагом печати абсцис и количества шагов
extern int StepFlag;

float f1(float x)          // функции нахождения значения y для каждой функции. 3 функции   
{
return 0.6*x+3;
}

float f2(float x)
{
return pow((x-2),3)-1;
}

float f3(float x)
{
return 3/x;
}



float rootFindLineSearchF1F2(float xl, float xr, float eps)   // 3 фукции нахождения точек пересечения по оси x 
 {
float x, minx = xl, nextstep;
nextstep = fabs(xr-xl)/(1/eps); //разбиваем на отрезки интервал
int stepcount=0;
for(x=xl; x<xr; x += nextstep, stepcount++) {               // в цикле нахожу минимальное совпадение по оси y. Минимальное значение и есть точка пересечения.
    if (fabs((f2(x))-(f1(x))) < fabs((f2(minx))-(f1(minx)))){
    minx=x;
    }
}
if (AbsFlag==1){
    printf("Line Search root1 = %f\n",minx);
}
if (StepFlag==1){
    printf("Find root for %d steps\n",stepcount);
}
//статистика
return minx;
}

float rootFindLineSearchF2F3(float xl, float xr, float eps)
 {
float x, minx = xl, nextstep;
nextstep = fabs(xr-xl)/(1/eps); //разбиваем на отрезки интервал
int stepcount=0;
for(x=xl; x<xr; x += nextstep, stepcount++) {
    if (fabs((f2(x))-(f3(x))) < fabs((f2(minx))-(f3(minx)))){
    minx=x;
    }
}
if (AbsFlag==1){
    printf("Line Search root1 = %f\n",minx);
}
if (StepFlag==1){
    printf("Find root for %d steps\n",stepcount);
}
//статистика
return minx;
}

float rootFindLineSearchF3F1(float xl, float xr, float eps)
 {
float x, minx = xl, nextstep;
nextstep = fabs(xr-xl)/(1/eps); //разбиваем на отрезки интервал
int stepcount=0;
for(x=xl; x<xr; x += nextstep, stepcount++) {
    if (fabs((f3(x))-(f1(x))) < fabs((f3(minx))-(f1(minx)))){
    minx=x;
    }
}
if (AbsFlag==1){
    printf("Line Search root1 = %f\n",minx);
}
if (StepFlag==1){
    printf("Find root for %d steps\n",stepcount);
}
//статистика
return minx;
}

extern float integralF1(float xl, float xr, size_t n)          // нахождение площади фигуры для каждой фукции между 2-х точек по оси x
{
    float sum = 0;
    float h = (xr-xl)/n;
    for(size_t i=0; i<n; i++) {
        sum += f1(xl);
        xl += h;
    }
return sum*h;
}

extern float integralF2(float xl, float xr, size_t n)
{
    float sum = 0;
    float h = (xr-xl)/n;
    for(size_t i=0; i<n; i++) {
        sum += f2(xl);
        xl += h;
    }
return sum*h;
}

extern float integralF3(float xl, float xr, size_t n)
{
    float sum = 0;
    float h = (xr-xl)/n;
    for(size_t i=0; i<n; i++) {
        sum += f3(xl);
        xl += h;
    }
return sum*h;
}