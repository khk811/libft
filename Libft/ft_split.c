#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
    size_t	i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t  ft_strlcpy(char *dest, char *src, size_t dest_size)
{
    size_t  i;
    size_t  src_len;

    src_len = ft_strlen(src);
    i = 0;
    while (src[i] != '\0' && i + 1 < dest_size)
    {
        dest[i] = src[i];
        i++;
    }
    if (dest_size > 0)
        dest[i] = '\0';
    return (src_len);
}

static int	ft_count_words(const char *s, char c)
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

static char	**ft_assign_words(const char *s, char c, char **arr)
{
	int	i;
	size_t	the_char_num;
	char	*start_of_the_word;

	start_of_the_word = (char*)s;
	i = 0;
	the_char_num = 2;
	while (*s)
	{
		if (*(s + 1) == c || *(s + 1) == '\0')
		{
			arr[i] = (char *)malloc(sizeof(char) * (the_char_num + 1));
			ft_strlcpy(arr[i++], start_of_the_word, the_char_num);
			start_of_the_word = (char *)(s + 2);
			the_char_num = 0;
		}
		s++;
		the_char_num++;
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

int	main()
{
	char	*input_str = "this*is*a*sample*string.";
	char	**result;
	int	i;

	result = ft_split(input_str, '*');
	i = 0;
	while (result[i])
		printf("%s\n", result[i++]);
	return (0);
}