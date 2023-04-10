#include "main.h"

#define BUFFER_SIZE

/**
*main - Main entry point
*@argc: Argument Count
*@argv: Argument Vector
*
*Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	char *fileFrom;
	char *fileTo;
	char buffer[BUFFER_SIZE];
	int fdFrom, fdTo;
	ssize_t bytesRead, bytesWritten;
