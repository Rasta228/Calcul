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
    printf("5.Factorial\n");
    printf("6.Sin(x)    7.Cos(x)     8.Tg(x)     9.Ctg(x)    10.Arcsin(x)    11.Arccos(x)    12.Arctg(x) 13.Arcctg(x)\n");
    
    
    
    
    while (1)
    {
        printf("Enter operation number: ");
        scanf("%d",&Operation);
        if(Operation==1 || Operation==2 || Operation==3 || Operation==4) temp=1;
        if(Operation==5) temp=2;

        if(Operation==6 || Operation==7 || Operation==8 || Operation==9 || Operation==10 || Operation==11 || Operation==12 || Operation==13) temp=3;
        
        if(Operation==14) temp=4;

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

            case (3):
            {
                
                switch (Operation)
                {
                    case 6:
                {
                    float angle;
                    printf("Enter the angle value: ");
                    scanf("%f",&angle);
                    printf("Sin(%f) = %.3f\n", angle, Trigonometry(Operation, angle));
                    break;
                }
                case 7:
                {
                    float angle;
                    printf("Enter the angle value: ");
                    scanf("%f",&angle);
                    printf("Cos(%f) = %.3f\n", angle, Trigonometry(Operation, angle));
                    break;
                }
                case 8:
                {
                    float angle;
                    printf("Enter the angle value: ");
                    scanf("%f",&angle);
                    if (Trigonometry(Operation, angle) == 0)
                        printf("Does not exist");
                    else
                        printf("Tg(%f) = %.3f\n", angle, Trigonometry(Operation, angle));
                    break;
                }
               case 9:
                {
                    float angle;
                    printf("Enter the angle value: ");
                    scanf("%f",&angle);
                    if (Trigonometry(Operation, angle) == 0)
                        printf("Does not exist");
                    else
                        printf("Ctg(%f) = %.3f\n", angle, Trigonometry(Operation, angle));
                    break;
                }
                case 10:
                {
                    float sinus;
                    printf("Enter the value of the sin(x): ");
                    scanf("%f", &sinus);
                    printf("Arcsin(%f)= %.2f\n", sinus, Trigonometry(Operation, sinus));
                    break;
                }
                case 11:
                {
                    float cosine;
                    printf("Enter the value of the cos(x): ");
                    scanf("%f", &cosine);
                    printf("Arccos(%f) = %.8f\n", cosine, Trigonometry(Operation, cosine));
                    break;
                }
                case 12:
                {
                    float tangent;
                    printf("Enter the value of the tg(x): ");
                    scanf("%f", &tangent);
                    printf("Arctg(%f) = %.2f\n", tangent, Trigonometry(Operation, tangent));
                    break;
                }
                case 13:
                {
                    float cotangent;
                    printf("Enter the value of the ctg(x): ");
                    scanf("%f", &cotangent);
                    printf("Arcctg(%f) = %.2f\n", cotangent, Trigonometry(Operation, cotangent));
                    break;
                }
                }
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

