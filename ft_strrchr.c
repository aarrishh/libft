/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:15:52 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:44:49 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	i--;
	while (i >= 0)
	{
		if (str[i] != (unsigned char)c)
			i--;
		else
			return ((char *)str + i);
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n", ft_strrchr("Vardan", '\0'));
	printf("dzery %s\n", strrchr("Vardan", '\0'));
}*/