#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*odst;
	const char	*osrc;
	size_t	n;
	size_t	dlen;

	odst = dst;
	osrc = src;
	// odst, osrc : original dst, src address;
	n = dstsize;
	while (n-- != 0 && *dst != '\0')
		dst++;
	// 널이 안나올때까지, dstsize만큼 주소값 더함.
	// 아마 dst의 끝값까지 주소값이 이동할꺼임.
	dlen = dst - odst;
	// 주소값 끝 - 원래 주소값: 만약 주소값이 이전에 끝까지 이동했으면
	// dlen 값이 그냥 dst_len 값일꺼임. 
	// 만약 끝까지 안갔다면 dst_len보다 작은값?
	n = dstsize - dlen;
	// n을 dstsize - dlen: ??? 이게 뭐야
	if (n-- == 0)
		return (dlen + strlen(src));
	// n = 0이면 dstsize + src_len
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen - (src - osrc));
	// n != 0이면 normal return.
}

int	main()
{
	char	*dest1 = "rrrrrrrrrrrrrr";
	char	*src1 = "lorem ipsum dolor s:it amet";

	printf("bsd_result : %zu\n", ft_strlcat(dest1, src1, 15));
	printf("expected : %s\n", dest1);
	return (0);
}
