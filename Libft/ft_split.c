#include <stdlib.h>
#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	word_num;

	word_num = 0;
	while (*s)
	{
		if (*s && *s != c)
        {
			word_num++;
            while (*s && *s != c)
                s++;
            if (!*s)
                break;
        }
		s++;
	}
	return (word_num);
}

static char	**ft_assign_words(const char *s, char c, char **arr)
{
	int	i;
	size_t	the_char_num;
	char	*start_of_the_word;

	i = 0;
	the_char_num = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
            start_of_the_word = (char*)s;
            while (*s && *s != c)
            {
                the_char_num++;
                s++;
            }
			arr[i] = (char *)malloc(sizeof(char) * (the_char_num + 1));
            if (!arr[i])
                return (NULL);
			ft_strlcpy(arr[i++], start_of_the_word, (the_char_num + 1));
			the_char_num = 0;
            if (!*s)
                break;
		}
		s++;
	}
	arr[i] = 0;
	return (arr);
}

char **ft_split(const char *s, char c)
{
	char	**result;
	int	the_word_num;

	if (!s)
		return (NULL);
	the_word_num = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (the_word_num + 1));
	if (!result)
		return (NULL);
	ft_assign_words(s, c, result);
	return (result);
}
