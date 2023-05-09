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
	int txt_file, total, rcount;
	char buffer[BUFSIZE];

	if (filename == NULL)
	{
		return (0);
	}
	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
	{
		return (0);
	}
	total = 0;
	rcount = 1;
	while (letters > BUFSIZE && rcount != 0)
	{
		rcount = read(txt_file, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, rcount);
		total += rcount;
		letters -= BUFSIZE;
	}
	rcount = read(txt_file, buffer, letters);
	write(STDOUT_FILENO, buffer, rcount);
	total += rcount;
	close(txt_file);
	return (total);
}
