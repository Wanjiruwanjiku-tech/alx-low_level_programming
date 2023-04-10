#include "main.h"

/**
*read_textfile - A function that reads a text
*file and prints it to the POSIX standard output.
*
*@filename:Points to the text file
*@letters: Number of letters it should read
*
*Description: if a file cannot be opened or read
*return 0. If filename is null return 0
*Return: Number of letters it could read and prin
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*File descriptor*/
	char *buffer;
	ssize_t bytesRead, bytesWritten;
	/*Check if filename is null*/
	if (filename == NULL)
	{
		return (0);
	}
	/*open file with O_RDONLY*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/*Allocate buffer of size letters*/
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/*Read up to letters bytes into buffer*/
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	/*Write the bytes read to stdout*/
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytesWritten);
}
