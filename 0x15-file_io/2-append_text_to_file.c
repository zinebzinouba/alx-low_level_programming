#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file. Return 1 if the
 *  file exists and -1 if the file does not exist or if you do not have the
 *  required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, len, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content ==  NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	bytes_written = write(fd, text_content, len);
	close(fd);
	if (bytes_written == -1)
		return (-1);
	return (1);
}
