#include "sky_fun.h"

void	ft_form_blank(int n, int tab[n][n]) // preenche a tabela com 0's em todas as posições, pra começar
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			tab[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	display_solution(int tab[4][4]) // mostra o resultado final na tela se tudo der certo
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j < 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	solve(int tab[4][4], int entry[16], int pos) // função recursiva que roda posição a posição, todos os quadros, e os preenche com os numeros apropriados possiveis para resolução do jogo
{
	int	size;

	if (pos == 16) // se ele chegar aqui, ele acabou as iterações de recursividade, e vai começar a voltar pela escada
		return (1); // retornando 1
	size = 0;
	while (++size <= 4) // variavel para contar repetições de lado
	{
		if (check_double(tab, pos, size) == 0) // checagens de duplicados (continua se não tiver)
		{
			tab[pos / 4][pos % 4] = size; // colocamento de um predio do tamanho de side, na posição adequada à iteração
			if (check_case(tab, pos, entry) == 0) //checa as possibilidades de preenchimento na vertical e horizontal dessa posição, e o faz se der
			{
				if (solve(tab, entry, pos + 1) == 1) // entra na recursividade, chamando a si mesmo, usando a proxima posição
					return (1); // e volta
			}
			else // ou, se não der pra definir um valor apropriado agora, mantém em o
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0); // e retorna 0 tendo dado tuudo certo;, afinal se a primeira iteração achar um problema, ele vai parar e retornar erro por ser impossivel alocar algum valor sem quebrar as regras
}
