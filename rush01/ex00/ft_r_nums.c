#include "sky_fun.h" // a mesma inclusão de header das prototipagens das funções de sempre (ler na main)
#include <stdlib.h> // inclusão da biblioteca que possui as funções malloc e free

int	*get_numbers(char *str) // pega o argumento do usuario, e trascreve em uma chave pra rodar o jogo
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16); // alocação dinâmica para a variavel tab (array(vetor) de ints)
	if (!(tab)) // se ele não conseguir, retorna 0
		return (0);
	i = -1; // começa no -1 porque ja roda incrementando
	j = 0; // varia para contar os numeros inseridos pelo usuario, (tendo que ser todos os 16)
	while (str[++i] != '\0') //while pra passar pela argv[1]
	{
		if ((str[i] >= '0' && str[i] <= '4') // se for um numero de 1 a 4
			&& (j + 1) != 17) //  e tiver menos de 16 salvos, salva ele na saida
			tab[j++] = ft_atoi(str + i); // a função atoi tranforma um char "numero letra, sabe", em um numero do tipo int
		else if (str[i] != ' ' || ft_strlen(str) > 31) // se o resto não forem apenas espaços, ou tiver mais de 31 caracteres
		{
			str[i--] = '\0'; // para o while
			tab[0] = 0; // e zoa o codigo so pra garantir que vai dar erro
		}
	}
	return (tab); // retorna essa array do codigo do jogo pra main rodar a função "solve"
}

int	ft_atoi(char *str) // como dito antes, transforma strings em numeros
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') //se for besteira, pula
		i++;
	while (str[i] == '-' || str[i] == '+') //se for negativo, inverte (desnecessário)
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] >= '0' && str[i] <= '9') //repete ate chegar no final do numero
		nbr = nbr * 10 + (str[i++] - '0'); // joga a casa decimal pra esquerda e adiciona um digito numero no final, referente à posição da array
	if (nbrminus % 2 == 1)
		return (nbr * -1); //põe o numero final negativo se precisar
	return (nbr); //retorna o numero final
}

void	ft_putnbr(int nb) // escreve um numero na tela
{
	unsigned int	nbr; // unsigned é um numero sem "sinal", ou seja, sem engativos, não tem -5 ou +5, só 5 por exemplo

	if (nb < 0) // se for negativo, põe "-" na tela
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10); // escreve os decimais em recursividade, enviando eles de volta pra mesma função sempre divididos por 10
	ft_putchar(nbr % 10 + 48); // escreve os digitos numericos voltando
}
