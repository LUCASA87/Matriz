/* 
Escrever um programa que leia uma matriz 12X12 com números inteiros e positivos. Após a
entrada de dados:
a) Calcule a média dos números armazenados na matriz e crie o vetor1 com os elementos
maiores ou iguais a média;
b) Com a média calculada, crie o vetor2 com os elementos menores do que a média;
c) Crie o vetor3 com os elementos pares da matriz;
d) Crie o vetor4 com os elementos ímpares da diagonal principal.
Ao final do programa, exibir os elementos armazenados na matriz em formato de matriz e os 4
vetores criados.


*/

#include <stdio.h>
#define l 12
#define c 12
int main(void)
{
	int matriz[l][c];
	int *vetor1,*vetor2,*vetor3,*vetor4;
	int soma=0,linha,coluna,cont=0,cont2=0,cont3=0,cont4=0;
	int v1=0,v2=0,v3=0,v4=0,a=0,b=0,c1=0,d=0;
	float media;
	
	for( linha = 0 ; linha < l ; linha++ )//coletar inteiros positivo.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			printf("Informe um numero interiro positivo: ");
			scanf("%d",&matriz[linha][coluna]);	
		}
	}
	
	printf("A matriz eh :\n");
	

	for( linha = 0 ; linha < l ; linha++ )//Mostrando a matriz
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			printf("'%d' ",matriz[linha][coluna]);
		}
		printf("\n");
	}
	for( linha = 0 ; linha < l ; linha++ )//calculo dos inteiros
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			soma=soma+matriz[linha][coluna];
		}
	}
	media=(float)soma/(l*c);
	
	//---------------------------------------------------------------------------------------------------
	
	for( linha = 0 ; linha < l ; linha++ )//calculo maiores e iguais a média.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(matriz[linha][coluna] >= media )
			{
				cont++;
			}
			
		}
	}
	vetor1 = (int *)malloc(cont * sizeof(int));
	for( v1 = 0 ; v1 < cont ; v1++ )//definindo o tamanho do vetor1.
	{
		vetor1[v1]=v1;
	}
	
	for( linha = 0 ; linha < l ; linha++ )//convertendo menores que a media em vetor1.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(matriz[linha][coluna] >= media )
			{
				vetor1[a]=matriz[linha][coluna];
				a++;
			}
		}
	}
	printf("\nVetor 1 = ");//Mostrar o vetor1,
	for(a=0;a<cont;a++)
	{
		printf("'%d' ",vetor1[a]);
	}
	printf(".");
	
	//--------------------------------------------------------------------------------------
	
	for( linha = 0 ; linha < l ; linha++ )//Calculado menores que a média.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(matriz[linha][coluna] < media)
			{
				cont2++;
			}
			
		}
	}
	vetor2 = (int *)malloc(cont2 * sizeof(int));
	for( v2 = 0 ; v2 < cont2 ; v2++ )//definindo o tamanho do vetor2.
	{
		vetor2[v2]=v2;
	}
	
	for( linha = 0 ; linha < l ; linha++ )//convertendo menores que a media em vetor2.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(matriz[linha][coluna] < media )
			{
				vetor2[b]=matriz[linha][coluna];
				b++;
			}
		}
	}
	printf("\nVetor 2 = ");//Mostrar o vetor2,
	for(b=0;b<cont2;b++)
	{
		printf("'%d' ",vetor2[b]);
	}
	printf(".");
	
	//--------------------------------------------------------------------------------------
	
		for( linha = 0 ; linha < l ; linha++ )//calculo dos pares.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(matriz[linha][coluna] % 2 == 0)
			{
				cont3++;
			}
			
		}
	}
	vetor3 = (int *)malloc(cont3 * sizeof(int));
	for( v3 = 0 ; v3 < cont3 ; v3++ )//definindo o tamanho do vetor3.
	{
		vetor1[v3]=v3;
	}
	
	for( linha = 0 ; linha < l ; linha++ )//convertendo menores que a media em vetor3.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(matriz[linha][coluna] % 2 == 0 )
			{
				vetor3[c1]=matriz[linha][coluna];
				c1++;
			}
		}
	}
	printf("\nVetor 3 = ");//Mostrar o vetor3,
	for(c1=0;c1<cont3;c1++)
	{
		printf("'%d' ",vetor3[c1]);
	}
	printf(".");
	
	//---------------------------------------------------------------------------------------------------
		for( linha = 0 ; linha < l ; linha++ )//calculo diagonal principal.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(linha == coluna && matriz[linha][coluna]  % 2 != 0)
			{
				cont4++;
			}
		}
	}
	vetor4 = (int *)malloc(cont4 * sizeof(int));
	for( v4 = 0 ; v4 < cont ; v4++ )//definindo o tamanho do vetor4.
	{
		vetor4[v4]=v4;
	}
	
	for( linha = 0 ; linha < l ; linha++ )//calculo dos pares.
	{
		for( coluna = 0 ; coluna < c ; coluna++ )
		{
			if(linha == coluna && matriz[linha][coluna] % 2 != 0)
			{
				vetor4[d]=matriz[linha][coluna];
				d++;
			}
		}
	}
	printf("\nVetor 4 = ");//Mostrar o vetor4,
	for(d=0;d<cont4;d++)
	{
		printf("'%d'",vetor4[d]);
	}
	printf(".");

}
