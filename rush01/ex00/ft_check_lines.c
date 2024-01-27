int	check_col_up(int tab[4][4], int pos, int entry[16]) // checa repetições de cima para baixo, recebendo a tabela, a posição horizontal, e as chaves
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max) // sempre checa se a posição na tabela é maior que ela poderia ter
			{
				max = tab[i][pos % 4]; // e se puder, ele incrementa, até que seja o maximo possivel
				count++;
			}
			i++;
		}
		if (entry[pos % 4] != count)
			return (1); // retorna 1 se no final, o codigo daquela devida posição não for o mesmo das contagens de incrementos
	}
	return (0);
}

int	check_row_right(int tab[4][4], int pos, int entry[16]) // checa repetições da direita para a esqueda, recebendo a tabela, a posição vertical, e as chaves
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size) // sempre checa se a posição na tabela é maior que ela poderia ter
			{
				max_size = tab[pos / 4][i]; // e se puder, ele incrementa, até que seja o maximo possivel
				visible_towers++;
			}
		}
		if (entry[12 + pos / 4] != visible_towers)
			return (1); // retorna 1 se no final, o codigo daquela devida posição não for o mesmo das contagens de incrementos
	}
	return (0);
}

int	check_col_down(int tab[4][4], int pos, int entry[16]) // checa repetições de baixo para cima, recebendo a tabela, a posição horizontal, e as chaves
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max) // sempre checa se a posição na tabela é maior que ela poderia ter
			{
				max = tab[i][pos % 4]; // e se puder, ele incrementa, até que seja o maximo possivel
				count++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != count)
			return (1); // retorna 1 se no final, o codigo daquela devida posição não for o mesmo das contagens de incrementos
	}
	return (0);
}

int	check_row_left(int tab[4][4], int pos, int entry[16]) // checa repetições da esqueda para a direita, recebendo a tabela, a posição horizontal, e as chaves
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max) // sempre checa se a posição na tabela é maior que ela poderia ter
			{
				max = tab[pos / 4][i]; // e se puder, ele incrementa, até que seja o maximo possivel
				count++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != count)
			return (1); // retorna 1 se no final, o codigo daquela devida posição não for o mesmo das contagens de incrementos
	}
	return (0);
}
