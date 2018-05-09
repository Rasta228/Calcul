#ifndef _calcul_calc_h
#define _calcul_calc_h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long double  MainFunctions (long long Op, long double  Num1, long double  Num2);
long long Fact(long long  n);

 long double Trigonometry( long long Op,  long double var);

long double Stepen (long double Num1,long long Number);
long double lgE(long double N);
long double lg10(long double N);
long double Procent(float Num1, float Num2);
void StrNum(long long *Numt,long double *Numf, int c);
#endif
