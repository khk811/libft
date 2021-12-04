#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	word_num;

	word_num = 0;
	while (*s)
	{
		if (*s == c)
			word_num++;
		s++;
	}
	word_num++;
	return (word_num);
}

char **ft_split(const char *s, char c)
{
	char	**result;
	int	the_word_num;
	//int	the_char_num;

	if (!s)
		return (NULL);
	the_word_num = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (the_word_num + 1));
	if (!result)
		return (NULL);
	printf("total words: %d\n", the_word_num);
	/*
	//2. character count in a word - loop
	while (*s)
	{
		//strlcpy
		if (*s == c)
		{
			result[i] = (char*)malloc(sizeof(char) * (the_char_num + 1));
			ft_strlcpy(result[i], s, the_char_num);
		}
		s++;
		the_char_num++;
	}*/
	return (result);
}

int	main()
{
	char	*test = "this*is*a*sample*string.";

	ft_split(test, '*');
	return (0);
}
