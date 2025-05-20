/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:12:56 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:44:42 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	while (s1[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		else
			i++;
	}
	return ((unsigned char)s1[i] - ((unsigned char)s2[i]));
}

// int main()
// {
// 	printf("mery %d\n", ft_strncmp("abcdef", "abc\375xx", 5));
// 	// printf("dzery %d\n", strncmp("Arino", "Arin", 10));
// }