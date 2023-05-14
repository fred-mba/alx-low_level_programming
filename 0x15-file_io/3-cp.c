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
	int file_from, file_to, bytes_read, bytes_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cpfile_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_write = write(file_to, buffer, bytes_read);
		if (bytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(file_from);
	close_file(file_to);

	return (0);
}

/**
*close_file - close fie from and file to
*@FD_file: file desscriptor
*Return: Void
*/
void close_file(int FD_file)
{
	if (close(FD_file) == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", FD_file);
		exit(100);
	}
}
