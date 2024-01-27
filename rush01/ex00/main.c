#include "sky_fun.h" // inclui o "header "qualquercoisa.h", que contém a prototipagem de todas as funções de uso global. Assim, elas podem ser usadas aqui
#include <stdlib.h>

int	main(int argc, char **argv) // A int main, que recebe aqueles 2 parâmetros
{
	int	tab[4][4]; // declaração da matriz inteira tab  de 4 x 4 espaços (16), em que vai ser armazenada a resolução do jogo
	int	*entry;	// declaração do ponteiro entry, em que vai ser armazenado o código de jogo inserido

	ft_form_blank(4, tab); // preenche com 0 todas as posições da matriz tab, isso é necessário. nos argumentos, 4 é o inteiro do tamanho dela ( 4 x 4 se vocês se lembram.)
	if (argc != 2) // se o numero de argumentos, ou seja, parametros inseridos pelo usuario da hora de rodar não for exatamente 1 ( o  código do jogo.), ele vai retornar erro e parar
	{
		ft_putstr("Error\n"); //escreve erro com quebra de linha
		return (1); // retorna 1
	}
	entry = get_numbers(argv[1]); //pega os números do parâmetro do usuario, e coloca organizado numa variavel
	if (solve(tab, entry, 0) == 1) // um if, em que se o jogo, com a função "solve" sendo o que começa a resolução --V
	{
		display_solution(tab); // ela vai mostrar a resoluçao na tela com essa função de print recebendo a "tab"
		free(entry); // libera a alocação dinamica de memória da variavel entry
		return (0); // e parar o programa com return 0
	}
	free(entry); // a mesma liberação da alocação dinamica de memória da variavel entry em caso de falha
	ft_putstr("Error\n"); // ou escrever error com quebra de linha se não der
	return (1); // e retornar 1
}
