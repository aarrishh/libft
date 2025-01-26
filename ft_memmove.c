/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:19:33 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/18 19:02:08 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *a;
	const unsigned char	*b;

    i = 0;
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (src <= dest)
	{
		while (n > 0)
		{
			a[n - 1] = b[n - 1];
			n--;
		}
		return (a);
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
/*
int main()
{
    char a[9] = "1234abcd";
    char b[7] = "34abcd";
    printf("%s\n", ft_memmove(b, a, 4));
}*/