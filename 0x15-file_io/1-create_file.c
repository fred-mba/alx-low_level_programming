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
	FILE *new_file;
	size_t text_len = strlen(text_content);
	size_t bytes_written;

	new_file = fopen(filename, "w");
	if (new_file == NULL)
	{
		return (-1); /*if file fails to open*/
	}

	if (text_len > 0)
	{
		bytes_written = fwrite(text_content, sizeof(char), text_len, new_file);
		if (bytes_written < text_len)
		{
			fclose(new_file); /*write fails*/
			return (-1);
		}
	}

	fclose(new_file);

	if (access(filename, F_OK) == 0)
		chmod(filename, S_IRUSR | S_IWUSR);

	return (1); /*created successfully*/
}
