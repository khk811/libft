/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:18:54 by hyunkkim          #+#    #+#             */
/*   Updated: 2021/12/15 21:31:30 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	result = (char *)malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(result, (char *)s2, ft_strlen(s2) + ft_strlen(result) + 1);
	return (result);
}
