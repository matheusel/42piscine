void	ft_putnbr(int nb); // função que escreve número na tela, recebendo o numero
void	ft_putchar(char c); // função que escreve char na tela, recebendo ele
void	ft_putstr(char *str); //função que põe uma string na tela, recebendo ela
void	ft_form_blank(int n, int tab[n][n]); // função que preenche o tabuleiro inicialmente com '0's em todas as posições
void	display_solution(int tab[4][4]); // função que mostra o resultado final na tela, e recebe o tabuleiro
int		solve(int tab[4][4], int entry[16], int pos); // função que roda as funções que resolvem o jogo, recursivamente, e recebe o tabuleiro, o codigo, e a posição que ele rodou por ultimo
int		ft_atoi(char *str); // função que transcrece uma string num numero int
int		ft_strlen(char *str); // função que contra quantos carateres tem numa string
int		*get_numbers(char *str); // recebe os parametros do usuario e faz alguns testes
int		check_double(int tab[4][4], int pos, int num); // função que checa repetições
int		check_case(int tab[4][4], int pos, int entry[16]); // função que checa a possibilidade de preenchimento de cada posição do tabuleito
int		check_col_up(int tab[4][4], int pos, int entry[16]); // case para cima->baixo
int		check_row_right(int tab[4][4], int pos, int entry[16]); // case para direita->esquerda
int		check_col_down(int tab[4][4], int pos, int entry[16]); // case para baixo->cima
int		check_row_left(int tab[4][4], int pos, int entry[16]); // case para esquerda->direita
