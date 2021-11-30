#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main()
{
	int	d1;
    char    *the_source = "sriracha";
    char    *resulte;
	char	*dont_give_up = "you can do this";
	char	paris[35] = "ecole42 et...";
	char	seoul[10] = "<42Seoul>";

	d1 = 88;
	printf("the result: %d\n", ft_isalnum(d1));
    resulte = ft_strdup(the_source);
    printf("the result: %s\n", resulte);
    free(resulte);
	printf("ft_putendl_fd result:\n");
	ft_putendl_fd(dont_give_up, 1);
	printf("you're a lucky:\n");
	ft_putnbr_fd(7, 1);
	printf("ft_strlen r.v: %zu\n", ft_strlcat(paris, seoul, ft_strlen(paris) + ft_strlen(seoul) + 1));
	printf("result of ft_strlcat: %s\n", paris);
	return (0);
}
