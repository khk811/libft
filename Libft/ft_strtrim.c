#include <stdlib.h>
#include "libft.h"

static int  ft_trim_len(char const *s1, char const *set)
{
  int   i;
  int   result;

  i = 0;
  result = (int)ft_strlen(s1);
  while (ft_strchr(set, s1[i++]))
  {
    if (!result)
      return (0);
    result--;
  }
  i = (int)ft_strlen(s1);
  while (ft_strchr(set, s1[--i]))
    result--;
  return (result);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;
	char *result;

	if (!set)
		return (ft_strdup((char *)s1));
    len = ft_trim_len(s1, set);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
	{
      if (ft_strchr(set, s1[i]))
        i++;
      else
       {
         ft_strlcpy(result, s1 + i, (len + 1));
         break ;
       }
    }
	return (result);
}
