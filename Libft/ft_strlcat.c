/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:19:19 by hyunkkim          #+#    #+#             */
/*   Updated: 2021/12/13 18:00:44 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	src_len_to_add;
	int	idx_dst;
	int	idx_src;
	int	normal_return;

	src_len_to_add = (int)(dstsize - ft_strlen(dst)) - 1;
	idx_dst = ft_strlen(dst);
	idx_src = 0;
	normal_return = (int)(ft_strlen(dst) + ft_strlen(src));
	if (src_len_to_add < 0)
		return (ft_strlen(src) + dstsize);
	while (src[idx_src] != '\0' && src_len_to_add > 0)
	{
		dst[idx_dst++] = src[idx_src++];
		src_len_to_add--;
	}
	dst[idx_dst] = '\0';
	return (normal_return);
}
