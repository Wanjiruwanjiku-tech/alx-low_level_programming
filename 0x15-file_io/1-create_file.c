#include "main.h"

/**
*create_file - A function that creates a file
*
*@filename: Pointer to the name of file
*@text_content: Pointer to a null terminated string
*to write the file
*
*Description: THE CREATED FILE MUST HAVE THE
*PERMISSIONS rw-------. If the file exists truncate
*it. If filename is null return -1
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t ret;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content); /*find len*/
		ret = write(fd, text_content, len);

		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
