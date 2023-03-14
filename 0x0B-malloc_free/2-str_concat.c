#include "main.h"

/**
*str_concat - A Function that concatenates two strings
*@s1: string one
*@s2: string two
*Return: null if failure and pointer to strin if success
*/
char *str_concat(char *s1, char *s2)
{
	char *cat_str;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t total_len = len1 + len2 + 1;

	if (s1 == NULL || s2 == NULL) /*Handle null inputs*/
	{
		s1 = "";
		s2 = "";
	}
	cat_str = malloc(sizeof(char) * total_len);

	if (cat_str == NULL)
	{
		return (NULL); /*Check if malloc is successful*/
	}
	memcpy(cat_str, s1, len1);
	memcpy(cat_str + len1, s2, len2 + 1);
	free(cat_str);

	return (cat_str);
}
