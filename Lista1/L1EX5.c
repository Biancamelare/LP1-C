//Alunos: Bianca V.S. Melaré e Jeniffer Aparecida da Silva Faria
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
	char cpf[15];
	int cpfNum[11];
	int digitado[2];
	int digitoValido[2];
	int i,j=0,cont=0,contIgual=0,contNum=0,somaNum=0,resto,primeiroDig,soma2=0,segundoDig;
	do{
	    j=0,cont=0,contIgual=0,contNum=0,somaNum=0,soma2=0;
		printf("\nDigite o CPF: ");
		fflush(stdin);
		gets(cpf);
		for(i=0;i<15;i++)
		{
			if(cpf[i]== '0')
				cont +=1;
		}
		if(cont==11)
		{
			exit(1);
		}
		
		for(i=0;i<15;i++)
		{			
			if(cpf[i]>='0' && cpf[i]<='9')
			{
				cpfNum[j]=cpf[i]-48;
				j++;
			}
	   }
		for(i=0;i<11;i++)
		{
			if(cpfNum[i]==cpfNum[i+1])
				contIgual++;				
		}
		if(contIgual == 10)
		{
			printf("Invalido- Todos os digitos sao iguais");
			continue;
		}
		
		for(i=0;i<9;i++)
		{
			somaNum += cpfNum[i]*(i+1) ;
		}
		
		resto=somaNum % 11;
		if(resto==10)
		{
			primeiroDig=0;
		}
		else
		{
			primeiroDig=resto;
		}
		
		
		for(i=0;i<9;i++)
		{
			soma2+=cpfNum[i]*(11-i);
		}
		soma2= soma2 + (primeiroDig*2);
	
		
		segundoDig=(soma2*10) % 11;
		if(segundoDig==10)
		{
			segundoDig=0;
		}
	
		
		digitado[0]=cpfNum[9];
		digitado[1]=cpfNum[10];
		
		digitoValido[0]=primeiroDig;
		digitoValido[1]= segundoDig;
		
		if(digitado[0]==digitoValido[0]  && digitado[1]==digitoValido[1])
		{
			printf("Valido\n");
		}
		else
		{
			printf("Invalido- Esperado: %d%d, encontrado: %d%d\n",digitoValido[0],digitoValido[1],digitado[0],digitado[1]);
		}
	
	}while(cont!=11);
	
	return 0;
}
