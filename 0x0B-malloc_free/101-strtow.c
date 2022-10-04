#include <stdlib.h>
#include "main.h"

char **strtow(char *str);
int word_len(char *str);
int count_words(char *str);

/**
 * word_len - finds index and marks end of first word
 * @str: string
 * Return: index that marks the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int indx = 0, len = 0;

	while (*(str + indx) && *(str + indx) != ' ')
	{
		len++;
		indx++;
	}

	return (len);
}

/**
 * count_words - Counts no. of words within a string.
 * @str: string to be searched.
 * Return: The no. of words within the string
 */
int count_words(char *str)
{
	int indx = 0, words = 0, len = 0;

	for (indx = 0; *(str + indx); indx++)
		len++;

	for (indx = 0; indx < len; indx++)
	{
		if (*(str + indx) != ' ')
		{
			words++;
			indx += word_len(str + indx);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: string being split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int indx = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[indx] == ' ')
			indx++;

		letters = word_len(str + indx);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[indx++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
