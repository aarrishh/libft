/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:24:15 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:43:21 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)ch)
			return ((char *)str + i);
		i++;
	}
	if ((unsigned char)ch == '\0')
		return ((char *)str + i);
	return (NULL);
}

// int main()
// {
// 	printf("mery %s\n", ft_strchr("teste", '\0'));
// 	printf("dzery %s\n", strchr("teste", '\0'));
// }
