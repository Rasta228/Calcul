#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
void StrNum(long long *Numt,long double *Numf, int c)
{
	char st[9999],str[9999];
	int Minus,MinusK,ZapK,j,temp,i,len;
	double Zap;
	do
	{
		for (i=0;i<99;i++) st[i]=0;
		st[i]=st[i];
		scanf("%s",str);
		len=strlen(str);
		Minus=1;MinusK=0;Zap=1;ZapK=0;temp=1;j=0;
		for (i=0;i<len;i++)
		{
			if (str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='.' || str[i]=='-' )
			{
					
				if (str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9')	
				{
					st[j]=str[i];
					//printf("%c",st[j]);
					j++;
					if (ZapK==1) Zap=Zap*10.0;
				}
				else if (str[i]=='.')
				{
					ZapK++;
					if (ZapK>1) temp=0;
				}
				else
				{
					Minus=Minus*(-1);
					MinusK++;
					if (MinusK>1 || i!=0) temp=0;
				}
			}
			else temp=0;
		}
	if (c==1 && len>15) temp=0;
	if (c==2 && len>19) temp=0;
	if (c==1 && Zap>1) temp=0;
	if (temp==0) printf("Enter correct Number:");
	}while (temp==0);
	if (c==1)
	{	
		switch (str[0])
		{
			case '0': {*Numt=0;break;}
			case '1': {*Numt=1;break;}
			case '2': {*Numt=2;break;}
			case '3': {*Numt=3;break;}
			case '4': {*Numt=4;break;}
			case '5': {*Numt=5;break;}
			case '6': {*Numt=6;break;}
			case '7': {*Numt=7;break;}
			case '8': {*Numt=8;break;}
			case '9': {*Numt=9;break;}
		}
		for( i = 1; i <=j; i++) 
		{	
			switch (str[i])
			{
				case '0': {*Numt=*Numt*10+0;break;}
				case '1': {*Numt=*Numt*10+1;break;}
				case '2': {*Numt=*Numt*10+2;break;}
				case '3': {*Numt=*Numt*10+3;break;}
				case '4': {*Numt=*Numt*10+4;break;}
				case '5': {*Numt=*Numt*10+5;break;}
				case '6': {*Numt=*Numt*10+6;break;}
				case '7': {*Numt=*Numt*10+7;break;}
				case '8': {*Numt=*Numt*10+8;break;}
				case '9': {*Numt=*Numt*10+9;break;}
			}
		}
		*Numt=*Numt*Minus;

	}
	
	
	
	if (c==2)
	{	
		switch (str[0])
		{
			case '0': {*Numf=0.0;break;}
			case '1': {*Numf=1.0;break;}
			case '2': {*Numf=2.0;break;}
			case '3': {*Numf=3.0;break;}
			case '4': {*Numf=4.0;break;}
			case '5': {*Numf=5.0;break;}
			case '6': {*Numf=6.0;break;}
			case '7': {*Numf=7.0;break;}
			case '8': {*Numf=8.0;break;}
			case '9': {*Numf=9.0;break;}
		}
		for( i = 1; i <=j; i++) 
		{	
			switch (str[i])
			{
				case '0': {*Numf=*Numf*10.0+0.0;break;}
				case '1': {*Numf=*Numf*10.0+1.0;break;}
				case '2': {*Numf=*Numf*10.0+2.0;break;}
				case '3': {*Numf=*Numf*10.0+3.0;break;}
				case '4': {*Numf=*Numf*10.0+4.0;break;}
				case '5': {*Numf=*Numf*10.0+5.0;break;}
				case '6': {*Numf=*Numf*10.0+6.0;break;}
				case '7': {*Numf=*Numf*10.0+7.0;break;}
				case '8': {*Numf=*Numf*10.0+8.0;break;}
				case '9': {*Numf=*Numf*10.0+9.0;break;}
			}
		}
		*Numf=*Numf/Zap;
		if (Minus==-1) *Numf=*Numf*(-1.0);
	}
}
