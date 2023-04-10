#include "main.h"

/**
*append_text_to_file - A function that appends
*text at the end of a file.
*
*@filename: Pointer to the name of the file
*@text_content: Pointer to null terminated string to
*append
*
*Descroption: Do not create the file if it does not
*exist
*Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t ret;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(fd, text_content, len);

		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
