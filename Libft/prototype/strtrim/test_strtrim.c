#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;
	char *result;

	if (!set)
		return (strdup((char *)s1));
	i = 0;
	len = (int)strlen(s1);
	while (strchr(set, s1[i]))
	{	
		printf("** %c\n", s1[i]);
		len--;
		i++;
	}
	printf("here-> %c\n", s1[i]);
	i = (int)strlen(s1) + 1;
	while (strchr(set, s1[i]))
	{
		printf("del -> %c\n", s1[i--]);
		len--;
		printf("len: %d\n", len);
	}
	printf("here-> %c\n", s1[i]);
	printf("len: %d\n", len);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (strchr(set, s1[i]))
			i++;
		else
		{
			strlcpy(result, s1 + i, (len + 1));
			printf("here-> %s\n", result);
			break;
		}
	}
	return (result);
}

int	main()
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1, " \n\t");

	printf("original len: %lu\n", strlen(s1));
	puts("expected result\n");
	puts(s2);
	printf("expected len: %lu\n", strlen(s2));
	puts("-------\n");
	puts("the result\n");
	puts(ret);
	printf("result len: %lu\n", strlen(ret));
	puts("end of test\n");
	return (0);
}
