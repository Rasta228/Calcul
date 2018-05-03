#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

#define Pi 3.1415

long double  MainFunctions (long long  Op, long double  Num1, long double  Num2)
{
    long double  Answer;
    switch (Op)
    {
        case 6:
        {
            Answer=Num1+Num2;
            break;
        }
        case 7:
        {
            Answer=Num1-Num2;
            break;
        }
        case 8:
        {
            Answer=Num1*Num2;
            break;
        }
        case 9:
        {
            Answer=Num1/Num2;
            break;
        }
    }
    return Answer;
}

long long Fact(long long  n)
{
    if (n == 1)
        return 1;
    else
        return n*Fact(n-1);
}



 long double Trigonometry( long long Op,  long double var)
{
    switch(Op)
    {
        case 10:
        {
            return sin(var * Pi/180);
            break;
        }
        case 11:
        {
            return cos(var * Pi/180);
            break;
        }
        case 12:
        {
            if (var == 90 || var == 270)
            {
                return 0;
                break;
            }
            else
            {
                return tan(var * Pi/180);
                break;
            }
        }
        case 13:
        {
            if (var == 0 || var == 180 || var == 360)
            {
                return 0;
                break;
            }
            else
            {
                return 1/tan(var * Pi/180);
                break;
            }
        }
        case 14:
        {
            return asin(var) * 180/Pi;
            break;
        }
        case 15:
        {
            return acos(var) * 180/Pi;
            break;
        }
        case 16:
        {
            return atan(var) * 180/Pi;
            break;
        }
        case 17:
        {
            return (Pi/2 - atan(var)) * 180/Pi;
        }
        default: return 0;
    }
}



long double Stepen (long double Num1,long long Number)
{   
	long double temp=Num1;
    if (Number==0) temp=1;
    else if (Number==1) temp=temp;
    else if (Number==-1) temp=1/temp;
    else if (Number>1) for (int i=2;i<=Number;i++) temp=temp*Num1;
    else
    {
        Number=Number*-1;
        for (int i=2;i<=Number;i++) temp=temp*Num1;
        temp=1/temp;
    }
    return temp;
}
long double lg10(long double N)
{
    N=log10(N);
    return N;
}

long double lgE(long double N)
{
    N=log(N);
    return N;
}


float Procent(float Num1, float Num2)
{
	Num1=Num1/100.0;
	Num2=Num2*Num1;
	return Num2;
}




