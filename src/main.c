#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "calc.h"
int main ()
{
    int Operation,n,Answer,Number;
    float answer,Num1,Num2;
    
    
    while (1)
    {	printf("                   ************                    \n");              
        printf("                   *Calculator*                          Valid\n");
	printf("                   ************                        Character   \n");
        printf("**************************************************** _____________\n");
        printf("*1.x^y           6.x+y    10.sin(x)    14.arcsin(x)* |'7','8','9'|\n");
        printf("*2.x!            7.x-y    11.Cos(x)    15.arccos(x)* |'4','5','6'|\n");
        printf("*3.x%%y           8.x*y    12.tg(x)     16.arctg(x) * |'1','2','3'|\n");
        printf("*4.lg(x)         9.x/y    13.ctg(x)    17.arcctg(x)* |    '0'    |\n");
        printf("*5.ln(x)                                           * |    '.'    |\n");
        printf("*                    0.Exit                        * |___________|\n");
	printf("****************************************************\n");
        printf("Enter operation number: ");
        scanf("%d",&Operation);
        switch (Operation)
        {
            case 1:
            {
                printf("Enter x:");
                scanf("%f",&Num1);
                printf("Enter y:");
                scanf("%d",&Number);
                answer=Stepen (Num1,Number);
                printf("%.3f^(%d)=%.3f",Num1,Number,answer);
                break;
            }
            case 2:
            {
                printf("Enter x:");
                scanf("%d",&n);
                Answer=Fact (n);
                printf("Fac(%d)=%d",n,Answer);
                break;
            }
	    case 3:
            {
				printf("Enter x:");
				scanf("%f",&Num1);
				printf("Enter y:");
				scanf("%f",&Num2);
				answer=Procent(Num1,Num2);
				Num1=Num1/100.0;
				printf("(%.3f)*%.3f=%.3f",Num1,Num2,answer);
				break;
	    }
            case 4:
            {
                printf("Enter x:");
                scanf("%f",&Num1);
                answer=lg10(Num1);
                printf("lg(%0.f)=(%f)",Num1,answer);
                break;
            }
            case 5:
            {
                printf("Enter x:");
                scanf("%f",&Num1);
                answer=lgE(Num1);
                printf("ln(%0.f)=(%f)",Num1,answer);
                break;
            }
            case 6:
            {
                
                printf("Enter x:");
                scanf("%f",&Num1);
                printf("Enter y:");
                scanf("%f",&Num2);
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3f+%.3f=%.3f",Num1,Num2,answer);
                break;
            }
            case 7:
            {     printf("Enter x:");
                scanf("%f",&Num1);
                printf("Enter y:");
                scanf("%f",&Num2);
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3f-%.3f=%.3f",Num1,Num2,answer);
                break;
            }
            case 8:
            {     printf("Enter x:");
                scanf("%f",&Num1);
                printf("Enter y:");
                scanf("%f",&Num2);
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3f*%.3f=%.3f",Num1,Num2,answer);
                break;
            }
            case 9:
            {
                printf("Enter x:");
                scanf("%f",&Num1);
                do
                {
                    printf("Enter y:");
                    scanf("%f",&Num2);
                    if(Num2==0) printf("Error\n");
                }while(Num2==0);
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3f/%.3f=%.3f",Num1,Num2,answer);
                break;
            }
            case 10:
            {
                float angle;
                printf("Enter x: ");
                scanf("%f",&angle);
                printf("Sin(%.3f) = %.3f\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 11:
            {
                float angle;
                printf("Enter x: ");
                scanf("%f",&angle);
                printf("Cos(%.3f) = %.3f\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 12:
            {
                float angle;
                printf("Enter x: ");
                scanf("%f",&angle);
                if (Trigonometry(Operation, angle) == 0)
                    printf("Does not exist");
                else
                    printf("Tg(%.3f) = %.3f\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 13:
            {
                float angle;
                printf("Enter x: ");
                scanf("%f",&angle);
                if (Trigonometry(Operation, angle) == 0)
                    printf("Does not exist");
                else
                    printf("Ctg(%.3f) = %.3f\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 14:
            {
                float sinus;
                do{
                    printf("Enter x: ");
                    scanf("%f", &sinus);
                    if(sinus < -1 || sinus > 1)
                        printf("Error\n");
                }while(sinus < -1 || sinus > 1);
                printf("Arcsin(%.3f)= %.2f\n", sinus, Trigonometry(Operation, sinus));
                break;
            }
            case 15:
            {
                float cosine;
                do{
                    printf("Enter x: ");
                    scanf("%f", &cosine);
                    if(cosine < -1 || cosine > 1)
                        printf("Error\n");
                }while(cosine < -1 || cosine > 1);
                printf("Arccos(%.3f) = %.3f\n", cosine, Trigonometry(Operation, cosine));
                break;
            }
            case 16:
            {
                float tangent;
                printf("Enter x: ");
                scanf("%f", &tangent);
                printf("Arctg(%.3f) = %.3f\n", tangent, Trigonometry(Operation, tangent));
                break;
            }
            case 17:
            {
                float cotangent;
                printf("Enter x: ");
                scanf("%f", &cotangent);
                printf("Arcctg(%.3f) = %.3f\n", cotangent, Trigonometry(Operation, cotangent));
                break;
            }
        }
        
        if (Operation==0) break;
        printf("\n");
    }
    return  0;
}
