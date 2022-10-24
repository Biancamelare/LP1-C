//Alunos: Bianca V.S. Melaré e Jeniffer Aparecida da Silva Faria
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main()
{
	char meses[3][10] = {"Janeiro", "Fevereiro","Marco"};
	int PecaMes [3][3];
	float GranaPeca [3][2];
	float GranaMes [3][2];
	int i,j,x;
	float aux;
	

	for(i=0;i<3;i++) 
	{
		printf("%s\n",meses[i]);
		for(j=0;j<3;j++) 
		{
			printf("Pecas produzidas [P%i]: ",j+1);
			scanf("%i",&PecaMes[i][j]);
		}
	}
	
	printf("\n\n\n");
	

	for(i=0;i<3;i++) 
	{
	    printf("P%i\n",i+1);
		for(j=0;j<2;j++) 
		{
		    if (j==0)
				printf("Custo: ");
			else
				printf("Lucro: ");
			scanf("%f",&GranaPeca[i][j]);
		}
	}
	

		for( i= 0;  i< 3; i++) 
		{
		for(j= 0;  j< 2; j++) 
		{
			GranaMes[i][j] = 0;
			for(x = 0; x < 3; x++) 
			{
				aux = aux + (PecaMes[i][x] * GranaPeca[x][j]);
			}
			GranaMes[i][j] = aux;
			aux = 0;
		}
		}
	
	printf("\n\n\nMatriz Grana Mes \n\n ");

    printf("\t\tCusto\tLucro\n");
	for( i= 0;  i< 3; i++) 
	{
		if (strlen(meses[i])> 8 )	
			printf("%s\t",meses[i]);
		else
			printf("%s\t\t",meses[i]);
		for( j= 0; j < 2; j++) 
		{
			printf("%6.f", GranaMes[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
