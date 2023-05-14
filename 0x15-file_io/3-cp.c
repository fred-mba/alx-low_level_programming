#include "main.h"

#define BUFFER_SIZE 1024
/**
 *main - copies the content of a file to another file.
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 successfully copied file_from to file_to
 */
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	size_t bytes_read;

	if (argc != 3)
	{
		printf("Usage: %s cpfile_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = fopen(argv[1], "rb");
	if (file_from == NULL)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "wb");
	if (file_to == NULL)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		fclose(file_to);
		exit(99);
	}
	while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, file_from)) > 0)
	{
		fwrite(buffer, 1, bytes_read, file_to);
	}
	if (fclose(file_to) == EOF)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(file_to));
		exit(100);
	}
	if (fclose(file_from) == EOF)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(file_from));
		exit(100);
	}

	return (0);
}
