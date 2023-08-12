#include "main.h"

/**
  * append_text_to_file - creates a file
  * @filename: name of the file to create
  * @text_content: string to write to the file
  *
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(fd, text_content, text_len);

	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
