#include "sky_fun.h" // ler na main

int	check_double(int tab[4][4], int pos, int num) // checa se o numero
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
	return (0);
}

int	check_case(int tab[4][4], int pos, int entry[16]) // vai rodar o test de check row para todas as orientações, e retornar 1 caso alguma delas não passe como deveria
{ // ela recebe a tabela, a posição que está sendo checada, e o código do jogo
	if (check_row_left(tab, pos, entry) == 1) // esqueda para direita
		return (1);
	if (check_row_right(tab, pos, entry) == 1) // direita para esquerda
		return (1);
	if (check_col_down(tab, pos, entry) == 1) // baixo para cima
		return (1);
	if (check_col_up(tab, pos, entry) == 1) // ima para baixo
		return (1);
	return (0); // e retorna zero se der tudo certo
}
