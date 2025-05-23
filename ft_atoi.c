/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:34:37 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:31:46 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	y;

	i = 0;
	sign = 1;
	y = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		y = (y * 10) + (str[i] - 48);
		i++;
	}
	return (sign * y);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_atoi("11a1"));
// 	printf("%d\n", atoi("11a1"));
// }