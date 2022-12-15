#include <unistd.h>
#include <stdio.h>

int **ft_print_left_col(char *clues, int puzzle[4][4])	
{
	int i;
	int j;
	char putValue4;

	i = 8;
	j = 0;
	putValue4 = '1';
	while (i < 12)
	{
		if (clues[i] == '4')
		{
			while (j < 3)
			{
				puzzle[(i % 4)][j] = putValue4;
				putValue4++;
				j++;
			}
		}
		if (clues[i] == '1')
			puzzle[(i % 4)][0] = '4';
		if (clues[i] == '1' && clues[i + 4] == '2')
			puzzle[i % 4][3] = '3';
		if(clues[i] == '3' && clues[i + 4] == '2')
			puzzle[i % 4][2] = '4';
		if(clues[i] == '2' && clues[i + 4] == '3')
			puzzle[i % 4][1] = '4';
		j = 0;
		i++;
	}
	return (0);
}
