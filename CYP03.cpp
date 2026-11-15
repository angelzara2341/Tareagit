#include <stdio.h>
void main()
{
	//variables
	int dia;
	int mes;
	int anio;
	int diasMes;
	int biciesto;

	scanf_s("%i", &dia);
	scanf_s("%i", &mes);
	scanf_s("%i", &anio);

	if (mes==1 ||mes==3 ||mes==5 ||mes==7 ||mes==8 ||mes==10 ||mes==12)
	{
		diasMes = 31;
	}
	else
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		{
			diasMes =  30;
		}
	
	if (anio < 1582)
	{
		if (anio % 4 == 0)
		{
			biciesto = 1;
		}
		else
		{
			biciesto = 0;
		}
	}
	else
	{
		if (anio % 4 == 0)
		{
			biciesto = 1;
		}
		else
		{
			biciesto = 0;
		}
		if (anio % 100 == 0)
		{
			biciesto = 0;
		}
		if (anio % 400 == 0)
		{
			biciesto = 1;
		}
	}
	if (mes == 2)
		if (biciesto == 1)
		{
			diasMes = 29;
        }
		else
		{
			diasMes = 28;
		}
	
	if (dia == 4 && mes == 10 && anio == 1582)
	{
		dia = 15;
		mes = 10;
		anio = 1582;
	}
	else

	if (dia < diasMes)
	{
		(dia = dia + 1);
	}
	
	else
	{
		if (mes == 12)
		{
			dia = 1;
			mes = 1;
			anio = anio + 1;
		}
		else
		{
			if (dia == diasMes)
			{
				dia = 1;
				mes = mes + 1;
			}
		}
	}
	//salidas
	printf("%2i%3i%5i", dia, mes, anio);
}