#include "../library/files.h"
#include "../library/files.c"
/*int main (int argc, char *argv[])
{
	while (argc >= 1)
	{
		argv[1] = lines;
		argv[2] = colums;
	}
	return 0;
}
*/ 

char *generateMap(int columns, int lines, char c)
{
	int size = columns * lines + lines;
	char *map = (char *) malloc (size +1);
	int i = 0;
	int j = 1;
	while (i < size)
	{
		map[i] = c;
		if(j == columns)
		{
			map[i] = '\n';
			j = 0;
		}
		i++;
		j++;
	}
	return map;
}

int	main(void)
{
	char *map = generateMap(5,5,'.');
	files_write("map.txt", map);
	printf("%s",map);
}

