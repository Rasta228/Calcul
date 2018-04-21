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

