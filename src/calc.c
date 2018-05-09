#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

#define Pi 3.14

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
	long double  Answer;
    switch(Op)
    {
        case 10:
        {
			Answer=sin(var);
            return Answer;
            break;
        }
        case 11:
        {	
			
            Answer=cos(var);
            return Answer;
            break;
        }
        case 12:
        {
            if (var == Pi || var == Pi*3/2)
            {
                return 0;
                break;
            }
            else
            {
                Answer=tan(var);
				return Answer;
                break;
            }
        }
        case 13:
        {
            if (var == 0 || var == Pi || var == Pi*2)
            {
                return 0;
                break;
            }
            else
            {
				Answer=1/tan(var);
				return Answer;
                break;
            }
        }
        case 14:
        {
		
			Answer=asin(var);
			return Answer;
            break;
        }
        case 15:
        {
			Answer=acos(var);
			return Answer;
            break;
        }
        case 16:
        {
			Answer=atan(var);
			return Answer;
            break;
        }
        case 17:
        {
			Answer=(Pi/2 - atan(var));
			return Answer;
        }
    }
    return 0;
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


long double Procent(float Num1, float Num2)
{
	Num1=Num1/100.0;
	Num2=Num2*Num1;
	return Num2;
}




