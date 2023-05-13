#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 *@filename: pointer to the filename
 *@text_content: text to append in the existing text
 *Do not create file if it does not exist
 *If text_content is NULL, do not add anything to the file
 *Return: 1 on success and -1 on failure
 *	- If filename is NULL return -1
 *	- Return 1 if the file exists and -1 if the file does not exist
 *	or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, num_written, i;

	/*open existing file for appending*/
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1); /*if filename is NULL*/
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;
	num_written = write(file, text_content, i);
	if (num_written == -1)
	{
		close(file); /*failed to write content in the file*/
		return (-1);
	}
	close(file);

	return (1);
}
