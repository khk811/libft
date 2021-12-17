/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:18:54 by hyunkkim          #+#    #+#             */
/*   Updated: 2021/12/17 20:15:58 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len;

	if (!s1 || !s2)
	{
		if (!s1)
			return ((char *)s2);
		else if (!s2)
			return ((char *)s1);
	}
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *)malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(ret, (char *)s2, ft_strlen(s2) + ft_strlen(ret) + 1);
	return (ret);
}
