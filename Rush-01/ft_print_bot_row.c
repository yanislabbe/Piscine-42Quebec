#include <unistd.h>
#include <stdio.h>

int **ft_print_bot_row(char *clues, int puzzle[4][4])	
{
	int i;
	int j;
	char putValue4;

	i = 4;
	j = 3;
	putValue4 = '1';
	while (i < 8)
	{
		if (clues[i] == '4')
		{
			while (j >= 0)
			{
				puzzle[j][(i % 4)] = putValue4;
				putValue4++;
				j--;
			}
		}
		if (clues[i] == '1')
		{
			puzzle[3][i] = '4';
		}
		if (clues[i] == '1' && clues[i - 4] == '2')
			puzzle[0][(i % 4)] = '3';
		if (clues[i] == '3' && clues[i - 4] == '2')
			puzzle[1][(i % 4)] = '4';
		j = 3;
		i++;
	}
	return (0);
}
