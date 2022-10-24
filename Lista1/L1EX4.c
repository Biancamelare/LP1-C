//Alunos: Bianca V.S. Melaré e Jeniffer Aparecida da Silva Faria
#include <stdio.h>
#include <stdlib.h>

struct Data 
{
	int dia, mes, ano;
};

int calcular( struct Data);


int main()
{	
    struct Data data;
	int diaSemana;
	char mes[7][20]={"Domingo","Segunda-Feira","Terça-Feira","Quarta-Feira","Quinta-Feira","Sexta-Feira","Sabado"};
	do{
		printf("Informe a data: \n");
		scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
		if(data.dia !=0 && data.mes!=0 && data.ano!=0 )
		{
			diaSemana = calcular(data);
			printf("%d/%d/%d: %s\n\n",data.dia,data.mes,data.ano,mes[diaSemana]);
		}
	} while (data.dia !=0 && data.mes!=0 && data.ano!=0 );

	return 0;
}

int calcular(struct Data data)
{	
    int d, m, a, s;
    int diaSemana;
	d = data.dia;
	if(data.mes==1 || data.mes==2)
	   m=data.mes+10;
	else 
		m=data.mes-2; 
	a= data.ano % 1000;
	s= data.ano / 100;
	diaSemana = ((int)(2.6*m-0.1)+d+a+(a/4)+(s/4)-2*s) % 7;
	if(diaSemana<0)
		diaSemana = diaSemana+7;
	return diaSemana;
}



