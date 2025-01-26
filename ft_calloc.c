/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:48:37 by arimanuk          #+#    #+#             */
/*   Updated: 2025/01/24 22:05:03 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
    unsigned char	*buffer;
    size_t			i;
    
    i = 0;
	if ((n != 0 && count > 65536) || (n > 65536 && count != 0))
		return (NULL);
	buffer = (unsigned char *)malloc(count * n);
	// if (!buffer)
	// 	return (NULL);
	while (i < count * n)
	{
    	buffer[i] = 0;
    	i++;
    }
    return (buffer);
}
// int main()
// {
// 	printf("%s\n", ft_calloc(5, sizeof(char)));
// }
