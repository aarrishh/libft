/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:15:05 by arimanuk          #+#    #+#             */
/*   Updated: 2025/02/02 19:42:00 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

// int main()
// {
// 	char a[7] = "Vardan";
// 	int fd = open("example.txt", O_RDWR | O_CREAT | O_APPEND);
// 	if (fd < 0)
// 		printf("chstacvec\n");
// 	else
// 	{
// 		ft_putendl_fd(a, fd);
// 	}
// }