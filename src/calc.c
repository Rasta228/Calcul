#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

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

float Stepen (float Num1, int Number)
{		float temp=Num1;
		for (int i=2;i<=Number;i++) temp=temp*Num1;
		return temp;
}
	
