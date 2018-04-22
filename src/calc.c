#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

#define Pi 3.1415

float MainFunctions (int Op, float Num1, float Num2)
{
    float Answer;
    switch (Op)
    {
        case 1:
        {
            Answer=Num1+Num2;
            break;
        }
        case 2:
        {
            Answer=Num1-Num2;
            break;
        }
        case 3:
        {
            Answer=Num1*Num2;
            break;
        }
        case 4:
        {
            Answer=Num1/Num2;
            break;
        }
    }
    return Answer;
}

int Fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n*Fact(n-1);
}



float Trigonometry(int Op, float var)
{
    switch(Op)
    {
        case 6:
        {
            return sin(var * Pi/180);
            break;
        }
        case 7:
        {
            return cos(var * Pi/180);
            break;
        }
        case 8:
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
        case 9:
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
        case 10:
        {
            return asin(var) * 180/Pi;
            break;
        }
        case 11:
        {
            return acos(var) * 180/Pi;
            break;
        }
        case 12:
        {
            return atan(var) * 180/Pi;
            break;
        }
        case 13:
        {
            return (Pi/2 - atan(var)) * 180/Pi;
        }
        default: return 0;
    }
}



float Stepen (float Num1, int Number)
{		float temp=Num1;
		for (int i=2;i<=Number;i++) temp=temp*Num1;
		return temp;
}
	

