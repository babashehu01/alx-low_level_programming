#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists or -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int _strlen;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (_strlen = 0; text_content[_strlen]; _strlen++)
			;

		wr = write(fd, text_content, _strlen);

		if (wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
