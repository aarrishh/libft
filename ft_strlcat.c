/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:30:43 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/18 21:18:36 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t			i;
	size_t			j;
	size_t			len;
	unsigned char	*a;

	i = 0;
	j = 0;
	len = 0;
	a = (unsigned char *)src;
	while (src[len])
		len++;
	while (dst[i])
		i++;
	if (dst[i] == '\0')
	{
		while (j < n)
		{
			dst[i + j] = a[j];
			j++;
		}
	}
	if (len > n)
		return (i + n);
	return (i + j);
}

// int main()
// {
// 	char a[13] = "Hello ";
// 	char b[7] = "world!";
// 	printf("%zu\n", ft_strlcat(a, b, 2));
// }