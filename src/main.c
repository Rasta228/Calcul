#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "calc.h"

int main ()
{
	long long Numt;
	long double Numf;
    long long Operation,n,Answer,Number;
    long double answer,Num1,Num2;
    int c,f;
    Num2=Answer=1;
    Num2=Num2;
    Answer=Answer;
    while (1)
    {	printf("                   ************                    \n");              
        printf("                   *Calculator*                          Valid\n");
		printf("                   ************                        Character   \n");
        printf("**************************************************** _____________\n");
        printf("*1.x^y           6.x+y    10.sin(x)    14.arcsin(x)* |'7','8','9'|\n");
        printf("*2.x!            7.x-y    11.Cos(x)    15.arccos(x)* |'4','5','6'|\n");
        printf("*3.x%%y           8.x*y    12.tg(x)     16.arctg(x) * |'1','2','3'|\n");
        printf("*4.lg(x)         9.x/y    13.ctg(x)    17.arcctg(x)* |'-','0','.'|\n");
        printf("*5.ln(x)                                           * |           |\n");
        printf("*                    0.Exit                        * |___________|\n");
		printf("****************************************************\n");
		c=1;
        do {
		printf("Enter operation number: ");
        f=StrNum(&Numt,&Numf,c);
        Operation=Numt;
   
		}while(Operation<0 || Operation>18 || f==0);
        switch (Operation)
        {
            case 1:
            {	
				c=2;
				do {
                printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
                Num1=Numf;
                c=1;
                do {
                printf("Enter y:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
                Number=Numt;
                answer=Stepen (Num1,Number);
                printf("%.3Lf^(%lld)=%.3Lf",Num1,Number,answer);
                break;
            }
            case 2:
            {
				do {
                printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
                n=Numt;
                Answer=Fact(n);
                printf("Fac(%lld)=%lld",n,Answer);
                break;
            }
	    case 3:
            {
				c=2;
				do {
				printf("Enter x:");
				f=StrNum(&Numt,&Numf,c);
				}while(f==0);
				Num1=Numf;
				do {
				printf("Enter y:");
				f=StrNum(&Numt,&Numf,c);
				}while(f==0);
				Num2=Numf;
				answer=Procent(Num1,Num2);
				Num1=Num1/100.0;
				printf("(%.3Lf)*%.3Lf=%.3Lf",Num1,Num2,answer);
				break;
	    }
           case 4:
            {
				c=2;
				do {
                printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num1=Numf;
                answer=lg10(Num1);
                printf("lg(%Lf)=(%Lf)",Num1,answer);
                break;
            }
            case 5:
            {
				do {
				c=2;
                printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num1=Numf;
                answer=lgE(Num1);
                printf("ln(%0.Lf)=(%Lf)",Num1,answer);
                break;
            }
            case 6:
            {
				
                c=2;
                do {
                printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num1=Numf;
				do {
                printf("Enter y:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num2=Numf;
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3Lf+%.3Lf=%.3Lf",Num1,Num2,answer);
                break;
            }
            case 7:
    
            {   
				c=2;
				do {
				printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num1=Numf;
				do {
                printf("Enter y:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num2=Numf;
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3Lf-%.3Lf=%.3Lf",Num1,Num2,answer);
                break;
            }
            case 8:
            {   
				c=2;
				do {
				printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num1=Numf;
				do {
                printf("Enter y:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num2=Numf;
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3Lf*%.3Lf=%.3Lf",Num1,Num2,answer);
                break;
            }
            case 9:
            {
				c=2;
				do {
                printf("Enter x:");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				Num1=Numf;
                do
                {
					do {
                    printf("Enter y:");
                    f=StrNum(&Numt,&Numf,c);
                    }while(f==0);
					Num2=Numf;
                    if(Num2==0) printf("Error\n");
                }while(Num2==0);
                answer=MainFunctions (Operation, Num1,Num2);
                printf("%.3Lf/%.3Lf=%.3Lf",Num1,Num2,answer);
                break;
            }
            
            
           case 10:
            {
				c=2;
                long double angle;
                do {
                printf("Enter x: ");
				f=StrNum(&Numt,&Numf,c);
				}while(f==0);
				angle=Numf;
                printf("Sin(%.3Lf) = %.3Lf\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 11:
            {
				c=2;
                long double angle;
                do {
                printf("Enter x: ");
                
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				angle=Numf;
                printf("Cos(%.3Lf) = %.3Lf\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 12:
            {
				c=2;
                long double angle;
                do {
                printf("Enter x: ");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				angle=Numf;
                if (Trigonometry(Operation, angle) == 0)
                    printf("Does not exist");
                else
                    printf("Tg(%.3Lf) = %.3Lf\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 13:
            {
				c=2;
                long double angle;
                do {
                printf("Enter x: ");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				angle=Numf;
                if (Trigonometry(Operation, angle) == 0)
                    printf("Does not exist");
                else
                    printf("Ctg(%.3Lf) = %.3Lf\n", angle, Trigonometry(Operation, angle));
                break;
            }
            case 14:
            {
				c=2;
                long double sinus;
                do{
					do {
                    printf("Enter x: ");
                    f=StrNum(&Numt,&Numf,c);
                    }while(f==0);
					sinus=Numf;
                    if(sinus < -1 || sinus > 1)
                        printf("Error\n");
                }while(sinus < -1 || sinus > 1);
                printf("Arcsin(%.3Lf)= %.2Lf\n", sinus, Trigonometry(Operation, sinus));
                break;
            }
            case 15:
            {
				c=2;
                long double cosine;
                do{
					do {
                    printf("Enter x: ");
					f=StrNum(&Numt,&Numf,c);
					}while(f==0);
					cosine=Numf;
                    if(cosine < -1 || cosine > 1)
                        printf("Error\n");
                }while(cosine < -1 || cosine > 1);
                printf("Arccos(%.3Lf) = %.3Lf\n", cosine, Trigonometry(Operation, cosine));
                break;
            }
            case 16:
            {
				c=2;
                long double tangent;
                do {
                printf("Enter x: ");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				tangent=Numf;
                printf("Arctg(%.3Lf) = %.3Lf\n", tangent, Trigonometry(Operation, tangent));
                break;
            }
            case 17:
            {
				c=2;
                long double cotangent;
                do {
                printf("Enter x: ");
                f=StrNum(&Numt,&Numf,c);
                }while(f==0);
				cotangent=Numf;
                printf("Arcctg(%.3Lf) = %.3Lf\n", cotangent, Trigonometry(Operation, cotangent));
                break;
            }
        }
        
        if (Operation==0) break;
        printf("\n");
    }
    return  0;
}
