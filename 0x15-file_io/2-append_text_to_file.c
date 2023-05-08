#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (access(filename, W_OK) == 0 ? 1 : -1);
	}

	FILE *file = fopen(filename, "a");
	{
		return (-1);
	}

	size_t text_len = strlen(text_content);
	size_t bytes_written = fwrite(text_content, sizeof(char), text_len, file);

	fclose(file);

	return (bytes_written == text_len ? 1 : -1);
}
