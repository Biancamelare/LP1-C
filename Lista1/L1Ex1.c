//Alunos: Bianca V.S. Melaré e Jeniffer Aparecida da Silva Faria
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int N, tam1,tam2,i,j,flag=0;
	char nome1[21], nome2[21];
	printf("Digite a quantidade de casos teste: ");
	scanf("%i",&N);
	while(N--)
	{
		fflush(stdin);
		printf("Digite a primeira palavra: ");
		gets(nome1);
		printf("Digite a segunda palavra: ");
		fflush(stdin);
		gets(nome2);
		tam1=strlen(nome1);
		tam2=strlen(nome2);
		if(tam1==tam2)
		{
		
			for(i=0;i<tam1;i++)
			{
				if ((nome1[i] >= 'a' && nome1[i] <='z') && (nome1[i]!= 'a' && nome1[i]!= 'e' && nome1[i]!= 'i' && nome1[i]!= 'o' && nome1[i]!= 'u'))
			    {
			    	if ((nome2[i] >= 'a' && nome2[i] <='z') && (nome2[i]!= 'a' && nome2[i]!= 'e' && nome2[i]!= 'i' && nome2[i]!= 'o' && nome2[i]!= 'u'))
					{
						if (nome1[i]== nome2[i])
						{
							flag=1;
							continue;
						}
						else
						{
							flag=0; 
							break;
						}
						
					}	
				} 
				if (nome1[i]== 'a' && nome1[i]== 'e' && nome1[i]== 'i' && nome1[i]== 'o' && nome1[i]== 'u')
				{
					if (nome2[i]== 'a' && nome2[i]== 'e' && nome2[i]== 'i' && nome2[i]== 'o' && nome2[i]== 'u')
						flag=1;
					else
						break;
				}	 
			}
			if(flag==1)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
