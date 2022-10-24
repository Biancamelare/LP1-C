//Alunos: Bianca V.S. Melaré e Jeniffer Aparecida da Silva Faria
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float distancia (float a, float b, float c, float d); 

int main()
{
	float x1,x2,y1,y2,result;
	do
	{
		system("cls");
		printf("\t\tCalculo de distancia entre pontos \n");
		printf("Primeiro par de pontos\n ");
		printf("Digite X1: \n");
		scanf("%f",&x1);
		printf("Digite Y1: \n");
		scanf("%f",&y1);
		printf("Segundo par de pontos \n ");
		printf("Digite X2: \n");
		scanf("%f",&x2);
		printf("Digite Y2: \n");
		scanf("%f",&y2);
		if (x1 !=0 && x2!=0 && y1!=0 && y2!=0)
		{
			result = distancia (x1, y1, x2, y2);
			printf("A distancia entre os pontos eh de %f \n\n", result );
			getch();
		}
	}while(x1 !=0 && x2!=0 && y1!=0 && y2!=0);
	
	return 0;
}

float distancia (float a, float b, float c, float d)
{
	float result;
	result= sqrt(pow(c-a,2)+pow(d-b,2));
	return result;
}
