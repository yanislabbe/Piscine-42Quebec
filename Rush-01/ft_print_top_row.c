#include <unistd.h>
#include <stdio.h>

int **ft_print_top_row(char *clues, int puzzle[4][4])	
{
	int i;
	int j;
	char putValue4;

	i = 0;
	j = 0;
	putValue4 = '1';
	while (i < 4)
	{
		if (clues[i] == '4')
		{
			while (j < 4)
			{
				puzzle[j][i] = putValue4;
				putValue4++;
				j++;
			}
		}
		if (clues[i] == '1')
			puzzle[0][i] = '4';
		if (clues[i] == '1' && clues[i + 4] == '2')
			puzzle[3][i] = '3';
		if (clues[i] == '3' && clues[i + 4] == '2')
			puzzle[2][i] = '4';
		if(clues[i] == '2' && clues[i + 4] == '3')
			puzzle[2][i] = '3';
		j = 0;
		i++;
	}
	return (0);
}
