/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:31:00 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/25 19:52:28 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	get_copy_n(int n, int *i, int *copy_n)
{
	if (n < 0)
	{
		*copy_n = -n;
		*i = 1;
	}
	else
	{
		*copy_n = n;
		*i = 0;
	}
}

int get_i(int i, int copy_n)
{
	while (copy_n)
	{
		copy_n = copy_n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*malloc_a;
	int i;
	int copy_n;
	
	get_copy_n(n, &i, &copy_n);
	i = get_i(i, copy_n);
	if (n == 0)
		return(ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	malloc_a = (char *)malloc((i + 1) * sizeof(char));
	malloc_a[i] = '\0';
	i--;
	if (n < 0)
		malloc_a[0] = '-';
	while (copy_n)
	{
		malloc_a[i] = (copy_n % 10) + 48;
		copy_n = copy_n / 10;
		i--;
	}
	return (malloc_a);
}
// int main()
// {
// 	printf("%s\n", ft_itoa(0));
// }