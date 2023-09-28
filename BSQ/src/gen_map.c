#include "../include/files.h"
double genPourcentage()
{
	return (double)rand() / (double)RAND_MAX;
}

char *generateMap(int columns, int lines, float density, char empty, char obstacle)
{
	int size = columns * lines + lines;
	char *map = (char *) malloc (size +1);
	int i = 0;
	int j = 1;
	while (i < size)
	{
		if (genPourcentage() <= density)
		{
			map[i] = obstacle;
		}
		else 
			map[i] = empty;
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

int main (int argc, char *argv[])
{
	char *map;
	if (argc >= 1)
	{
		map = generateMap(atoi(argv[1]), atoi(argv[2]), atof(argv[3]), '.', 'o');
	}
	files_write("map.txt", map);
	printf("%s", map);
	return 0;
}

/*int	main(void)
{
	char *map = generateMap(200,200,'.', 'o', .1);
	files_write("map.txt", map);
	printf("%s",map);	
}
*/
