#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "calc.h"
int main ()
{	
	int Operation,temp;
	float answer,Num1,Num2;
	printf("---------------------------Calculator---------------------------\n ");
	printf("1.Addition    2.Subtraction    3.Multiplication    4.Division\n");
	
	
	
	
	while (1)
	{
		printf("Enter operation number");
		scanf("%d",&Operation);
		if(Operation==1 || Operation==2 || Operation==3 || Operation==4) temp=1;
		switch (temp)
		{
			case (1):
			{
				printf("Enter first number");
				scanf("%f",&Num1);
				printf("Enter second number");
				scanf("%f",&Num2);
				answer=MainFunctions (Operation,Num1,Num2);
				switch (Operation)
				{
					case 1:
					{
					printf("%f+%f=%f",Num1,Num2,answer);
					break;
					}
					case 2:
					{
					printf("%f-%f=%f",Num1,Num2,answer);
					break;
					}	
					case 3:
					{
					printf("%f*%f=%f",Num1,Num2,answer);
					break;
					}
					case 4:
					{
					printf("%f/%f=%f",Num1,Num2,answer);
					break;
					}
				}
				
			}
		}
	}
	return  0;
}
