/* 
* Sistemas de Informa��o & An�lise e Desenvolvimento de Sistemas
* Algoritmos

* -------------------------
* Objetivo do Programa:
/* A matr�cula dos alunos da Faculdade Dom Bosco � formada pelas seguintes informa��es: os quatro 
(04) primeiros caracteres indicam o ano em que o aluno se matriculou na Faculdade; o pr�ximo 
caractere indica o semestre (1 � para o primeiro; 2 � para o segundo); o pr�ximo caractere indica o 
curso ( 1 � ADM; 2 � ADS; 3 � CON; 4 � ENG; 5 � DIR; 6 � SIS; 7 � PSI; 8 � LOG ) e os 
pr�ximos seis (06) s�o n�meros aleat�rios que formam identificadores �nicos (esta informa��o n�o 
� relevante para a solu��o do problema). Escrever um programa que leia um n�mero indeterminado 
de matr�culas e ao final da leitura mostre as seguintes informa��es:
a. total de alunos para cada curso;
b. percentual de alunos do curso de ADS e SIS, sobre o total de alunos lidos;
c. total de alunos matriculados por semestre;
d. qual o curso com o menor n�mero de matr�culas

 
*/






#include <stdio.h>
#include <string.h>
#include <locale.h>
#define x  12


int main()
{   
    int i,mat[x],cont=0;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,def=0;
    int sm1=0,sm2=0,sm3=0,resultado;
    float PADS,PSIS;
    char cond;
    setlocale(LC_ALL, "Portuguese");
   

    
	
	    do
	    
	    {
	    	resultado=0;//zerando o res para condi��o da resposta.
	    	cont++;
	        printf("Digite a matr�cula de 12 n�meros, ap�s digitar cada n�mero pressione ENTER.\n");
	        for(i=0;i<x;i++)
	        {
	            scanf("%d",&mat[i]);//entrada de dados.
	        }
	        
	        //--------------------------------------------------------------------------------------
	        
	        switch (mat[5])//inicio teste quantos alunos por curso
			{
	            case 1:
	            {
	                c1++; 
	            }
	            break;
	            
	             case 2:
	 			{
	                c2++; 
	            }
	            break;
	            
	            case 3:
	            {
	                c3++; 
	            }
	            break;
	            
	            case 4:
	            {
	                c4++; 
	            }
	            break;
	            
	            case 5:
	            {
	            	c5++;
	            }
	            break;
	            
	            case 6:
	            {
	                c6++; 
	            }
	            break;
	            
	            case 7:
	            {
	                c7++; 
	            }
	            break;
	            
	            case 8:
	            {
	                c8++;
	            }
	            break; 
	    	}
	    	//--------------------------------------------------------------------------------------  
	    	
	        switch (mat[4])//teste total de alunos matriculados por semestre
	        {
	            case 1:
	            {
	                sm1++; 
	            }
	            break;
	            
	            case 2:
	            {
	                sm2++; 
	            }
	            break;
	    	}
	    	//--------------------------------------------------------------------------------------
	    	setbuf(stdin, NULL);
	    	printf("Deseja continuar? S/N.\n"  );//teste para continuar.
		    scanf("%c",&cond);
		    
		   	
		   	if ((cond=='s')||(cond=='S'))
		   	{
		   	  resultado=1;	
			}
			if((cond=='n')||(cond=='N'))
		   	{
		   	  resultado=1;	
			}
			
			while(resultado!=1)
			{
				setbuf(stdin, NULL);
	    		printf("Resposta inv�lida digite S/N para continuar.\n " );
				scanf("%c",&cond);	
				if ((cond=='s')||(cond=='S'))
		   	{
		   	  resultado=1;	
			}
			if((cond=='n')||(cond=='N'))
		   	{
		   	  resultado=1;	
			}
			}
	    
	        
	    }while((cond=='s')||(cond=='S'));
	    
	    printf("\n\n");
	    
	    PADS=(float)(100*c2)/cont;//calculo percentual ADS
	    PSIS=(float)(100*c6)/cont;//calculo percentual SIS
	   
	    
		//a. total de alunos para cada curso;
		printf("Foi matriculado em cada curso: ");
		printf("ADM=%d; ADS=%d; CON=%d; ENG=%d; DIR=%d; SIS=%d; PSI=%d; LOG=%d.\n",c1,c2,c3,c4,c5,c6,c7,c8);
		
		 printf("\n-------------------------------------------------------------------------------------------------\n\n");
		
		//b. percentual de alunos do curso de ADS e SIS, sobre o total de alunos lidos;
		printf("O percentual de alunos do curso de ADS � %.2f e em SIS � %.2f.\n", PADS,PSIS);
		printf("\n-------------------------------------------------------------------------------------------------\n\n");
		//c. Total de alunos matriculados por semestre;
		printf("O total de aluno matriculado por semestre �:\n1� Semestre: %d e 2� Semestre: %d.\n",sm1,sm2);
		printf("\n-------------------------------------------------------------------------------------------------\n\n");
		//d. qualprintf("\n\n"); o curso com o menor n�mero de matr�culas;
		if(c1<c2 && c1<c3 && c1<c4 && c1<c5 && c1<c6 && c1<c7&& c1<c8)//Teste curso 1
		{
			printf("O curso com o maior n�meros de matriculas � o ADM.");
		}
		else  if(c2<c1 && c2<c3 && c2<c4 && c2<c5 && c2<c6 && c2<c7 && c2<c8)//teste curso 2
		{
			printf("O curso com o maior n�meros de matriculas � o ADS.");
		}
		else  if(c3<c1 && c3<c2 && c3<c4 && c3<c5 && c3<c6 && c3<c7 && c3<c8)//teste curso 3
		{
			printf("O curso com o maior n�meros de matriculas � o CON.");
		}
		else if(c5<c1 && c5<c2 && c5<c3 && c5<c4 && c5<c6&& c5<c7 && c5<c8)//teste curso 5
		{
			printf("O curso com o maior n�meros de matriculas � o DIR.");
		}
		else if(c6<c1 && c6<c2 && c6<c3 && c6<c4 && c6<c5 && c6<c7 && c6<c8)//teste curso 6
		{
			printf("O curso com o maior n�meros de matriculas � o SIS.");
		}
		else if(c7<c1 && c7<c2 && c7<c3 && c7<c4 && c7<c5 && c7<c6 && c7<c8)//teste curso 7
		{
			printf("O curso com o maior n�meros de matriculas � o PSI.");
		}
		else if(c8<c1 && c8<c2 && c8<c3 && c8<c4&& c8<c5&& c8<c6&& c8<c7)//teste curso 8
		{
			printf("O curso com o maior n�meros de matriculas � o LOG.");
		}
		else 
		{
			printf("Houve mais de um curso com o n�mero iguais de matr�culas.");
		}
		
	
	return 0;

}



