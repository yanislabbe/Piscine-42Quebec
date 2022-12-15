#include <unistd.h>

int **ft_print_right_col(char *clues, int puzzle[4][4])	
{
	int i;
	int j;
	char putValue4;

	i = 12;
	j = 3;
	putValue4 = '1';
	while (i < 16)
	{
		if (clues[i] == '4')
		{
			while (j >= 0)
			{
				puzzle[(i % 4)][j] = putValue4;
				putValue4++;
				j--;
			}
		}
		else if (clues[i] == '1')
		{
			puzzle[(i % 4)][3] = '4';
		}
		j = 3;
		i++;
	}
	return (0);
}
