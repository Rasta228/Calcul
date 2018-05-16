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
  long double Answer = 1;
    if ( n < 0) {Answer=0; return Answer;}
    else if ( n == 0) {Answer=1; return Answer;}
    else
    {
      for (int i = 1; i <= n; i++)
    Answer = Answer * i;
      return Answer;
	   }
	}

long double Trigonometry( long long Op,  long double Num1)
{
 long double  Answer;
   switch(Op)
   {
       case 10:
       {
     Answer=sin(Num1);
           return Answer;
           break;
       }
       case 11:
       {

           Answer=cos(Num1);
           return Answer;
           break;
       }
       case 12:
       {
           if (Num1 == Pi || Num1 == Pi*3/2)
           {
               return 0;
               break;
           }
           else
           {
               Answer=tan(Num1);
       return Answer;
               break;
           }
       }
       case 13:
       {
           if (Num1 == 0 || Num1 == Pi || Num1 == Pi*2)
           {
               return 0;
               break;
           }
           else
            {
       Answer=1/tan(Num1);
       return Answer;
               break;
           }
       }
       case 14:
       {

     Answer=asin(Num1);
     return Answer;
           break;
       }
       case 15:
       {
     Answer=acos(Num1);
     return Answer;
           break;
       }
       case 16:
       {
     Answer=atan(Num1);
     return Answer;
           break;
       }
       case 17:
       {
     Answer=(Pi/2 - atan(Num1));
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
