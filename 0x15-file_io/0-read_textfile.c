#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer to the file
 *@letters: characters in the file
 *where letters is the number of letters it should read and print
 *returns the actual number of letters it could read and print
 *
 *Return: if the file can not be opened or read, return 0
 *	- if filename is NULL return 0
 *	- if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer = NULL;
	ssize_t total_read = 0;

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	total_read = fread(buffer, 1, letters, file);
	if (total_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[total_read] = '\0';
	printf("%s", buffer);

	fclose(file);
	free(buffer);

	return (total_read);
}
