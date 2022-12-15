#include <unistd.h>

void	print_four(char view[]);

void	print_four(char	view[])
{
	int y;
	int x;
	int v;
	int c;
	
	v = 0;
	c = 4;
	x = 0;
	y = 0;

	while (view[v])
	{
			if (view[v] == '1')
			{
				write(1, &c, 1);
				x++;
				v++;
			}
		if (x == 3)
		{
			y + 3;
			if (y > 3)
			{
			return (c);
			}
		}
		else
		x++;
		v++;
	}
}
