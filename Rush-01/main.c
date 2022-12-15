#include <unistd.h>
#include <stdio.h>

void ft_print_string(char *str);
int **ft_print_top_row(char *clues, int puzzle[4][4]);
int **ft_print_bot_row(char *clues, int puzzle[4][4]);
int **ft_print_left_col(char *clues, int puzzle[4][4]);
int **ft_print_right_col(char *clues, int puzzle[4][4]);
void ft_print_array(int puzzle[4][4]);

int main(int args, char *argv[])
{
	char *error = "error";
	char tab[17];	
	int i = 0 * args;
	int j = 0;
	int k = 0;
	int puzzle[4][4];
	while (argv[1][i])
		i++;
	while(j < i)
	{
		if(argv[1][j] != ' ')
		{
		   if(argv[1][j] > '0' && argv[1][j] < '5')
			{
				tab[k] = argv[1][j];
				j++;
				k++;
			}
			else
			{
				ft_print_string(error);
				return (0);
			}
		}
		j++;		
	}
	int x = 0;
	int y = 0;
	while(x < 4)
	{
		while(y < 4)
		{
			puzzle[x][y] = '0';
			y++;
		}
		y = 0;
		x++;
	}
	tab[16] = '\0';
	ft_print_string(tab);
	ft_print_top_row(tab, puzzle);
	ft_print_bot_row(tab, puzzle);
	ft_print_left_col(tab, puzzle);
	ft_print_right_col(tab, puzzle);
	ft_print_array(puzzle);
}

void ft_print_string(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);	
}

void ft_print_array(int puzzle[4][4])
{
	int x = 0;
	int y = 0;

	while (x < 4)
	{
		while (y < 4)
		{
			write(1, &puzzle[x][y], 1);
			write(1, " ", 1);
			y++;
		}
		x++;
		y = 0;
		write(1, "\n", 1);
	}
}
