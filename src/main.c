#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "calc.h"
int main ()
{
    int Operation,temp,n,Answer,Number;
    float answer,Num1,Num2;
    printf("---------------------------Calculator---------------------------\n ");
    printf("1.Addition    2.Subtraction    3.Multiplication    4.Division\n");
    printf("5.Factorial");
    
    
    
    while (1)
    {
        printf("Enter operation number");
        scanf("%d",&Operation);
        if(Operation==1 || Operation==2 || Operation==3 || Operation==4) temp=1;
        if(Operation==5) temp=2;
        if(Operation==13) temp=4;
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
                break;
            }
            case (2):
            {
                printf("Enter number");
                scanf("%d",&n);
                Answer=Fact (n);
                printf("Fac%d=%d",n,Answer);
                break;
            }
            case (4):
            {
                printf("Enter number");
                scanf("%f",&Num1);
                printf("Enter stepen'");
                scanf("%d",&Number);
                answer=Stepen (Num1,Number);
                printf("%f^(%d)=%f",Num1,Number,answer);
                break;
            }
        }
    }
    return  0;
}

