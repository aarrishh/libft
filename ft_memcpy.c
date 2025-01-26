/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:12:00 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/18 18:50:10 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*a;
	const unsigned char		*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (const unsigned char *) src;
	if (n == 0)
		return (dest);
	if (a == NULL || b == NULL)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char aa[2] = "a";
	char bb[3] = {'A', 'A', 'A'};

	printf("mery %s\n", ft_memcpy(bb, aa, 2));
	printf("dzery %s\n", memcpy(bb, aa, 2));
}*/