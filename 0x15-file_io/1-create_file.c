#include "main.h"

/**
 *create_file - creates a file and writes text_content in a file
 *@text_content: text to be written on a new file
 *@filename: pointer to the new file
 *The created file must have rw------- permissions
 *If text_content is NULL create an empty file
 *Return: 1 on success, -1 if file can not be created, file can not
 *	be written, write “fails”
 */

int create_file(const char *filename, char *text_content)
{
	int new_file,bytes_written, i;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		bytes_written = write(new_file, text_content, i);
		if (bytes_written == -1)
			return (-1);
	}
	close (new_file);

	return (1); /*created successfully*/
}
