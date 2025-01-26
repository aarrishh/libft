/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:08:20 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/26 16:00:30 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

// int main()
// {
// 	int fd = open("example.txt", O_RDWR);
// 	if (fd < 0)
// 		printf("chem karum bacem\n");
// 	else
// 	{
// 		// printf("aaa\n");
// 		ft_putchar_fd('b', fd);
		// close(fd);
// 	}
// }