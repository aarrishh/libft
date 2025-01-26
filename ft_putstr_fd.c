/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:00:05 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/26 16:23:48 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
// 	char a[7] = "Vardan";
// 	int fd = open("example.txt", O_RDWR | O_CREAT | O_APPEND);
// 	if (fd < 0)
// 		printf("chstacvec\n");
// 	else
// 	{
// 		ft_putstr_fd(a, fd);
// 	}
// }