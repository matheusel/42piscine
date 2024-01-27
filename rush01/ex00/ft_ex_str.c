#include "sky_fun.h" // ler na main
#include <unistd.h> // biblioteca do write

void	ft_putchar(char c) //função basica pra por uma char na tela
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src) // função que copia uma string para outra
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str) // função que escreve uma string na tela
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str) // função que checa e retona o numero de caracteres de uma string
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
