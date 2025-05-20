/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:30:43 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:43:58 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	foo1(char *dst, const char *src, size_t d_len)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dst[d_len + j] = src[j];
		j++;
	}
	dst[d_len + j] = '\0';
	return (d_len + j);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			d_len;
	size_t			j;
	size_t			s_len;

	j = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (dstsize == 0)
		return (s_len);
	if (d_len > dstsize || d_len == dstsize)
		return (dstsize + s_len);
	if (dstsize > (s_len + d_len))
		return (foo1(dst, src, d_len));
	while ((d_len + j) < dstsize - 1)
	{
		dst[d_len + j] = src[j];
		j++;
	}
	dst[d_len + j] = '\0';
	return (d_len + s_len);
}

// int main()
// {
// 	char a[13] = "Hello ";
// 	char b[7] = "world!";
// 	printf("%zu\n", ft_strlcat(a, b, 2));
// }