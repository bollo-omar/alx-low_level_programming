#incude "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: param
 * @needle: parama
 *
 * Return: return a pointer to the beginning of the located substring, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *input = haystack;
	char *sub = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (input);
		}
		needle = sub;
		input++;
		haystack = input;
	}
	return (0);
}
