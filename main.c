#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
// Aqui estão as variaveis globais
char tabuleiro[4][4];
char informacoes[2][255];


// Aqui estão as declarações de funções
char turnos();
char limpaTabuleiro();
void nomes();
void jogo();
void turnomaquina();
int conferir();
// Função Main
int main()
{
	printf("Bem vindo Jogador, enfrente este computador lendario!\n");
	limpaTabuleiro();
	nomes();
	jogo();
	return 0;
}

// Codificação das funções antes declaradas
char limpaTabuleiro()
{
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			tabuleiro[i][j] = '#';
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%c     ", tabuleiro[i][j]);
		}
		printf("\n\n");
	}
	printf("O tabuleiro já está pronto para uso! Ebaaa!\n");
}
void nomes()
{
	char temporario;
	printf("Ola aventureiro! Diga-me seu nome: \n");
	scanf("%s", informacoes[1]);
	informacoes[1][101] = '0';
	printf("Voce jogara contra o computador! De um nome a ele.\n");
	scanf("%s", informacoes[2]);
	informacoes[2][101] = '0';

}
void turnomaquina()
{

}
void jogo()
{
	int velha, i, j;
	while(velha != 1)
	{
		int turnos;
		for(turnos = 1; turnos < 3; turnos++)
		{
			//printf("Turno do: \n");
			for(i = 0; i < 3; i++)
			{
				for(j = 0; j < 3; j++)
				{
					printf("%c     ", tabuleiro[i][j]);
				}
				printf("\n\n");
			}
			if(turnos == 1)
			{
				int pi, pj;
				printf("Digite a linha para alteracao:\n");
				scanf("%d", &pi);
				printf("Digite a coluna para alteracao:\n");
				scanf("%d", &pj);
				if(tabuleiro[pi][pj] == '#')
					tabuleiro[pi][pj] = 'O';
				else
					printf("Invalido, como punicao, perdeu a jogada!\n");
			}
			else
			{
				turnomaquina();
			}
			velha = conferir();
		}
	}
}
int conferir()
{
	
}