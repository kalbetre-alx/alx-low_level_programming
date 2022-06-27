#include <stdlib.h>

/**
 * next_word - traverses to the next word
 * @str: the string
 * @word_size: gets assigned the word size
 *
 * Return: pointer to the next word
 */
char *next_word(char *str, int *word_size)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		while (*(str + i) == ' ' && *(str + i) != '\0')
			i++;

		*word_size = 0;
		while (*(str + i) != ' ' && *(str + i) != '\0')
		{
			(*word_size)++;
			i++;
		}

		if (*word_size > 0)
			return (str + (i - *word_size));
	}

	return (NULL);
}

/**
 * word_count - gets the number of words in a string
 * @str: the string
 *
 * Return: the number of words
 */
int word_count(char *str)
{
	int count = 0, word_size = 0;
	char *word = next_word(str, &word_size);

	while (word != NULL)
	{
		count++;
		word = next_word(word + word_size, &word_size);
	}

	return (count);
}

/**
 * strtow - extracts words from a string
 * @str: the string
 *
 * Return: pointer to the array of words
 */
char **strtow(char *str)
{
	int i = 0, j = 0, word_size = 0, num_words = 0;
	char **words;
	char *word;

	if (str == NULL)
		return (NULL);

	num_words = word_count(str);
	if (num_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	word = next_word(str, &word_size);
	while (word != NULL)
	{
		words[i] = (char *)malloc(sizeof(char) * (word_size + 1));
		if (words[i] == NULL)
			return (NULL);
		j = 0;
		while (j < word_size)
		{
			words[i][j] = word[j];
			j++;
		}
		words[i][j] = '\0';
		i++;

		word = next_word(word + word_size, &word_size);
	}
	words[i] = NULL;
	return (words);
}
