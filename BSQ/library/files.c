#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* files_read(char *path)
{
	FILE *file = fopen(path, "r");
	if (file == NULL)
		return NULL;
	fseek(file, 0, SEEK_END);
	long size = ftell(file);
	rewind(file);

	char *content = (char *) malloc(size +1);
	if (content == NULL)
			return NULL;
	long i = 0;
	char ch = 0;
	while ((ch = fgetc(file)) != EOF)
	{
		content[i] = ch;
		i++;
	}
	content[i] = '\0';
	fclose(file);
	return content;
}
bool 	files_write(char *path, char *str)
{
	FILE *file = fopen(path, "w");
	if (file == NULL)
		return 0;
	long i = 0;
	while (str[i])
	{
		fputc(str[i], file);
		i++;
	}
	fclose(file);
	return 1;

}

