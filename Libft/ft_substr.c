/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:28:22 by hyunkkim          #+#    #+#             */
/*   Updated: 2021/12/18 13:16:13 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if (ft_strlen(s + start) <= len)
		len = ft_strlen(s + start);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (start >= ft_strlen(s))
		result[0] = '\0';
	else
		ft_strlcpy(result, &s[start], (len + 1));
	return (result);
}
