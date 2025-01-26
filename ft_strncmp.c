/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:12:56 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/18 20:48:27 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	while (s1[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			break;
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	printf("mery %d\n", strncmp("1234", "1236", -5));
// 	// printf("dzery %d\n", strncmp("Arino", "Arin", 10));
// }