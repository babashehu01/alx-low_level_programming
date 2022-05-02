#include "main.h"
/* create_file - a function that creates a file
 * @text_content: content of the file
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, str_len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!fd)
		return (-1);
	if (!text_content)
		text_content = "";
	/* getting the string length */
	for (_strlen = 0; text_content[i] != NULL; _strlen++)
		;
	write(fd, text_content, _strlen);
	close(fd);
	return (1);
}
